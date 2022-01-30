#include "UI/Storage/Slot/EmptyStorageSlotWidget.h"

#include "Components/TextBlock.h"
#include "DaDStorage.h"
#include "PlayerStorageComponent.h"
#include "Components/Border.h"
#include "UI/Storage/StorageWidget.h"
#include "UI/Storage/Slot/ItemStorageSlotWidget.h"

void UEmptyStorageSlotWidget::SelectSlot(bool WrongLocation)
{
	if(WrongLocation)
	{
		BSelectedSlotBorder->SetBrushColor({0.567f, 0.0066f, 0.0f, 0.2f});
	}
	else
	{
		BSelectedSlotBorder->SetBrushColor({0.095f, 0.630f, 0.142f, 0.1f});
	}
}

void UEmptyStorageSlotWidget::DeselectSlot()
{
	BSelectedSlotBorder->SetBrushColor({1.0f, 1.0f, 1.0f, 0.0f});
}

void UEmptyStorageSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	TPosX->SetText(FText::FromString("X: " + FString::FromInt(SlotLocation.RowX)));
	TPosY->SetText(FText::FromString("Y: " + FString::FromInt(SlotLocation.ColumnY)));
}

bool UEmptyStorageSlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	ParentStorageWidget->DeselectSlots();
	const auto DaDStorage = Cast<UDaDStorage>(InOperation);
	if(!DaDStorage) return false;
	
	const auto StorageComponent = Cast<UPlayerStorageComponent>(GetOwningPlayerPawn()->GetComponentByClass(UPlayerStorageComponent::StaticClass()));
	if(!StorageComponent) return false;

	if(GetOwningPlayer()->IsInputKeyDown(EKeys::LeftAlt))
	{
		ParentStorageWidget->OnOpenAdditionalUI.Broadcast(DaDStorage->Item, this, EItemMenuType::EMT_ItemSplitMenu);
	}
	else
	{
		StorageComponent->DropItemToEmptySlot(DaDStorage->Item, ParentStorageWidget->StorageItem, SlotLocation, DaDStorage->DaDWidget->VisualRotate);
	}
	
	return true;
}

void UEmptyStorageSlotWidget::NativeOnDragEnter(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	Super::NativeOnDragEnter(InGeometry, InDragDropEvent, InOperation);
	
	const auto DaDStorage = Cast<UDaDStorage>(InOperation);
	if(!DaDStorage) return;

	DaDStorage->EmptySlotTheMouseHoveringOver=this;
	ParentStorageWidget->SelectOccupiedSlots(DaDStorage, SlotLocation);
}

void UEmptyStorageSlotWidget::NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDragLeave(InDragDropEvent, InOperation);
	
	const auto DaDStorage = Cast<UDaDStorage>(InOperation);
	if(!DaDStorage) return;

	DaDStorage->EmptySlotTheMouseHoveringOver=nullptr;
	ParentStorageWidget->DeselectSlots();
}
