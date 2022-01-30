#include "UI/Storage/Slot/ItemStorageSlotWidget.h"

#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "DaDStorage.h"
#include "UI/UIBlueprintFunctionLibrary.h"
#include "PlayerStorageComponent.h"
#include "Components/Image.h"
#include "Items/BaseStorageItemObject.h"
#include "Items/BaseStorageItemPDataAsset.h"
#include "UI/Storage/StorageWidget.h"


void UItemStorageSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	if(!Item) return;
	bIsFocusable = true;
	if(DragWidget)
	{
		//SetFocus();
	}

	TItemName->SetText(Item->ItemParams.ItemDataAsset->ItemName);
	ImageDynamicMaterial = IItemImage->GetDynamicMaterial();
	if(ImageDynamicMaterial)
	{
		SetImage(Item->ItemParams.Rotate);
	}
	UpdateRotation(Item->ItemParams.Rotate);
	UpdateItemCount();

	if(DragWidget) return;
	UpdateItemLocation();
}

void UItemStorageSlotWidget::SetImage(bool Rotation)
{
	UUIBlueprintFunctionLibrary::SetAutoImage
	(
		SBSlotSize,
		SBImage,
		Item->ItemParams.ItemDataAsset->ItemSizeX,
		Item->ItemParams.ItemDataAsset->ItemSizeY,
		ImageDynamicMaterial,
		Rotation,
		Item->ItemParams.ItemDataAsset->RenderItemImage,
		Item->ItemParams.RenderImage,
		Item->ItemParams.ItemDataAsset->ItemImage
	);
}

void UItemStorageSlotWidget::UpdateRotation(bool Rotation)
{
	const float CurrentSlotSizeX = Rotation ? (float)Item->ItemParams.ItemDataAsset->ItemSizeY * SlotSize : (float)Item->ItemParams.ItemDataAsset->ItemSizeX * SlotSize;
	const float CurrentSlotSizeY = Rotation ? (float)Item->ItemParams.ItemDataAsset->ItemSizeX * SlotSize : (float)Item->ItemParams.ItemDataAsset->ItemSizeY * SlotSize;
	
	SBSlotSize->SetWidthOverride(CurrentSlotSizeX);
	SBSlotSize->SetHeightOverride(CurrentSlotSizeY);

	SetImage(Rotation);
	VisualRotate = Rotation;
}

void UItemStorageSlotWidget::UpdateItemCount()
{
	TCount->SetText(FText::FromString("x" + FString::FromInt(Item->ItemParams.Count)));
}

void UItemStorageSlotWidget::UpdateItemLocation()
{
	SlotLocation = Item->ItemParams.Location;
	const FVector2D NewLocation = {(float)SlotLocation.RowX * SlotSize,(float)SlotLocation.ColumnY * SlotSize};
	SetRenderTranslation(NewLocation);
}

FReply UItemStorageSlotWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	FEventReply ReplyEvent;
	if(InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		ReplyEvent = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
	}
	else if(InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
	{
		//OpenItemMenu
	}
	
	return ReplyEvent.NativeReply;
}

FReply UItemStorageSlotWidget::NativeOnMouseButtonDoubleClick(const FGeometry& InGeometry,
	const FPointerEvent& InMouseEvent)
{
	//Open window storage widget
	if(InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		ParentStorageWidget->OnOpenAdditionalUI.Broadcast(Item, this, EItemMenuType::EMT_Window);
	}
	return Super::NativeOnMouseButtonDoubleClick(InGeometry, InMouseEvent);
}

FReply UItemStorageSlotWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	if(InKeyEvent.GetKey() == EKeys::Delete)
	{
		//DropItem
	}
	else if(InKeyEvent.GetKey() == EKeys::R)
	{
		//RotateItem
		if(DragAndDropOperation)
		{
			DragAndDropOperation->DaDWidget->UpdateRotation(!DragAndDropOperation->DaDWidget->VisualRotate);
			if(DragAndDropOperation->EmptySlotTheMouseHoveringOver)
			{
				const auto EmptySlot = DragAndDropOperation->EmptySlotTheMouseHoveringOver;
				EmptySlot->ParentStorageWidget->SelectOccupiedSlots(DragAndDropOperation, EmptySlot->SlotLocation);
			}
		}
	}
	return Super::NativeOnKeyDown(InGeometry, InKeyEvent);
}

void UItemStorageSlotWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if(!Item) return;
	
	UItemStorageSlotWidget* DaDWidget = Cast<UItemStorageSlotWidget>(CreateWidget<UUserWidget>(GetWorld(), this->GetClass()));

	DaDWidget->DragWidget = true;
	DaDWidget->Item = Item;
	DaDWidget->SlotSize = SlotSize;

	SetVisibility(ESlateVisibility::HitTestInvisible);
	SetRenderOpacity(0.4f);
	
	DragAndDropOperation = Cast<UDaDStorage>(UWidgetBlueprintLibrary::CreateDragDropOperation(UDaDStorage::StaticClass()));
	DragAndDropOperation->DefaultDragVisual = DaDWidget;
	DragAndDropOperation->Pivot = EDragPivot::TopLeft;
	DragAndDropOperation->Payload = this;
	
	DragAndDropOperation->Item = Item;
	DragAndDropOperation->ParentWidget = this;
	DragAndDropOperation->DaDWidget = DaDWidget;

	OutOperation = DragAndDropOperation;
}

bool UItemStorageSlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	const auto DaDStorage = Cast<UDaDStorage>(InOperation);
	if(!DaDStorage) return false;
	
	const auto StorageComponent = Cast<UPlayerStorageComponent>(GetOwningPlayerPawn()->GetComponentByClass(UPlayerStorageComponent::StaticClass()));
	if(!StorageComponent) return false;
	
	StorageComponent->DropItemToItem(DaDStorage->Item,Item);
	return true;
}
