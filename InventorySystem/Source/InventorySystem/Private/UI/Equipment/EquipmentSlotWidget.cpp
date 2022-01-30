#include "UI/Equipment/EquipmentSlotWidget.h"

#include "IDetailTreeNode.h"
#include "PlayerStorageComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Items/BaseStorageItemObject.h"
#include "Items/EquipmentStorageItemPDataAsset.h"
#include "UI/UIBlueprintFunctionLibrary.h"
#include "UI/Storage/Slot/ItemStorageSlotWidget.h"

void UEquipmentSlotWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	SetDefaultText();
}

void UEquipmentSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ImageDynamicMaterial = IItemImage->GetDynamicMaterial();
	SetImage();
	
	UPlayerStorageComponent* StorageComponent = Cast<UPlayerStorageComponent>(GetOwningPlayerPawn()->GetComponentByClass(UPlayerStorageComponent::StaticClass()));

	UBaseStorageItemObject* ItemToEquip = StorageComponent->GetEquipObjectItem(EquipPart);
	if(ItemToEquip)
	{
		UpdateItem(ItemToEquip);
	}
	StorageComponent->OnEquipItem.AddDynamic(this, &UEquipmentSlotWidget::UpdateItem);
	StorageComponent->OnUnEquipItem.AddDynamic(this, &UEquipmentSlotWidget::UnEquipItem);
}

void UEquipmentSlotWidget::UpdateItem(UBaseStorageItemObject* Item)
{
	if (!Item) return;
	
	const auto EquipData = Cast<UEquipmentStorageItemPDataAsset>(Item->ItemParams.ItemDataAsset);
	if(!EquipData || !(EquipData->EquipPart == EquipPart))  return;
	
	ItemInSlot = Item;
	TItemName->SetText(EquipData->ItemName);
	if(ImageDynamicMaterial)
	{
		SetImage();
	}
}

void UEquipmentSlotWidget::UnEquipItem(EEquipPart EquipSlot)
{
	if(!(EquipSlot == EquipPart)) return;

	ItemInSlot = nullptr;
	SetImage();
	SetDefaultText();
}

void UEquipmentSlotWidget::SetDefaultText()
{
	switch (EquipPart)
	{
	case EEquipPart::EEP_Head:
		TItemName->SetText(FText::FromString("HEAD"));
		break;
		
	case EEquipPart::EEP_Tors:
		TItemName->SetText(FText::FromString("TORS"));
		break;

	case EEquipPart::EEP_Backpack:
		TItemName->SetText(FText::FromString("BACKPACK"));
		break;

	case EEquipPart::EEP_MAX:
		TItemName->SetText(FText::FromString("%/Error:FixIt/%"));
		break;
	}
}

void UEquipmentSlotWidget::SetImage()
{
	UUIBlueprintFunctionLibrary::SetAutoImage(
	SBImageBox,
	SBItemImage,
	ItemInSlot ? ItemInSlot->ItemParams.ItemDataAsset->ItemSizeX : 1,
	ItemInSlot ? ItemInSlot->ItemParams.ItemDataAsset->ItemSizeY : 1,
	ImageDynamicMaterial,
	false,
	ItemInSlot ? ItemInSlot->ItemParams.ItemDataAsset->RenderItemImage : false,
	ItemInSlot ? ItemInSlot->ItemParams.RenderImage : nullptr,
	ItemInSlot ? ItemInSlot->ItemParams.ItemDataAsset->ItemImage : EmptySlotImage);
}

FReply UEquipmentSlotWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	FEventReply ReplyEvent;
	if(InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		ReplyEvent = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
	}
	
	return ReplyEvent.NativeReply;
}

void UEquipmentSlotWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent,
	UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if(!ItemInSlot) return;
	
	UItemStorageSlotWidget* DaDWidget = Cast<UItemStorageSlotWidget>(CreateWidget<UUserWidget>(GetWorld(), StorageItemWidgetForDaD));

	DaDWidget->DragWidget = true;
	DaDWidget->Item = ItemInSlot;
	DaDWidget->SlotSize = 100.0f;
	
	const auto DragAndDropOperation = Cast<UDaDStorage>(UWidgetBlueprintLibrary::CreateDragDropOperation(UDaDStorage::StaticClass()));
	DragAndDropOperation->DefaultDragVisual = DaDWidget;
	DragAndDropOperation->Pivot = EDragPivot::TopLeft;
	
	DragAndDropOperation->Item = ItemInSlot;
	DragAndDropOperation->DaDWidget = DaDWidget;

	OutOperation = DragAndDropOperation;
}

bool UEquipmentSlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	if(ItemInSlot) return false;
	const auto DaDStorage = Cast<UDaDStorage>(InOperation);
	if(!DaDStorage) return false;
	
	const auto StorageComponent = Cast<UPlayerStorageComponent>(GetOwningPlayerPawn()->GetComponentByClass(UPlayerStorageComponent::StaticClass()));
	if(!StorageComponent) return false;

	bool EquipReturnValue;
	StorageComponent->EquipItem(DaDStorage->Item, EquipReturnValue);

	return true;
}
