#include "UI/Storage/StorageWidget.h"

#include "Components/UniformGridPanel.h"
#include "Items/BaseStorageItemPDataAsset.h"
#include "Items/Storage_StorageItemObject.h"
#include "UI/Storage/Slot/EmptyStorageSlotWidget.h"
#include "UI/Storage/Slot/ItemStorageSlotWidget.h"


void UStorageWidget::NativeConstruct()
{
	Super::NativeConstruct();
	SetInfo();
}

void UStorageWidget::SetInfo()
{
	if(!StorageItem) return;
	
	CreateStorage(StorageItem->ItemParams.ItemDataAsset->StorageSizeX, StorageItem->ItemParams.ItemDataAsset->StorageSizeY);
	
	StorageItem->OnItemRelocated.AddDynamic(this, &UStorageWidget::RelocateItem);
	StorageItem->OnItemAdded.AddDynamic(this, &UStorageWidget::AddItem);
	StorageItem->OnItemRemoved.AddDynamic(this, &UStorageWidget::RemoveItem);
	StorageItem->OnItemCountUpdated.AddDynamic(this, &UStorageWidget::ChangeCountItem);

	for (UBaseStorageItemObject* ArrayStorageItem : StorageItem->StorageItems)
	{
		AddItem(ArrayStorageItem);
	}
}

void UStorageWidget::SelectOccupiedSlots(UDaDStorage* DaD, FItemLocation Location)
{
	DeselectSlots();
	const int32 ItemSizeX = DaD->DaDWidget->VisualRotate ? DaD->Item->ItemParams.ItemDataAsset->ItemSizeY-1 : DaD->Item->ItemParams.ItemDataAsset->ItemSizeX-1;
	const int32 ItemSizeY = DaD->DaDWidget->VisualRotate ? DaD->Item->ItemParams.ItemDataAsset->ItemSizeX-1 : DaD->Item->ItemParams.ItemDataAsset->ItemSizeY-1;

	bool Found;
	UBaseStorageItemObject* FoundItem;
	bool OutOfStorage;
	StorageItem->CheckSlotBySize(Location, DaD->Item->ItemParams.ItemDataAsset, DaD->Item, DaD->DaDWidget->VisualRotate, Found, FoundItem, OutOfStorage);
	
	for (int LoopX = Location.RowX; LoopX <= Location.RowX+ItemSizeX; LoopX++)
	{
		for (int LoopY = Location.ColumnY; LoopY <= Location.ColumnY+ItemSizeY; LoopY++)
		{
			for(UEmptyStorageSlotWidget* EmptySlot : EmptyStorageSlots)
			{

				if(EmptySlot->SlotLocation.RowX == LoopX && EmptySlot->SlotLocation.ColumnY == LoopY)
				{
					SelectedSlots.Add(EmptySlot);
					EmptySlot->SelectSlot(Found || OutOfStorage );
					break;
				}
			}
		}
	}
}

void UStorageWidget::DeselectSlots()
{
	for (UEmptyStorageSlotWidget* EmptySlot : SelectedSlots)
	{
		EmptySlot->DeselectSlot();
	}
	SelectedSlots.Empty();
}

UItemStorageSlotWidget* UStorageWidget::SearchWidgetByItem(UBaseStorageItemObject* Item)
{
	for (UItemStorageSlotWidget* WidgetStorageItem : StorageItemWidgets)
	{
		if(WidgetStorageItem->Item == Item)
		{
			return WidgetStorageItem;
		}
	}
	return nullptr;
}

void UStorageWidget::CreateStorage(const int32 SizeX, const int32 SizeY)
{
	GPStorageSlots->ClearChildren();
	for (int LoopY = 0; LoopY <= (SizeY-1); LoopY++)
	{
		for (int LoopX = 0; LoopX <= (SizeX-1); LoopX++)
		{
			UEmptyStorageSlotWidget* CurrentWidget = Cast<UEmptyStorageSlotWidget>(CreateWidget<UUserWidget>(GetWorld(), EmptyStorageSlotWidget));
			
			CurrentWidget->SlotSize = StorageSlotSize;
			CurrentWidget->SlotLocation = {LoopX, LoopY};
			CurrentWidget->ParentStorageWidget = this;
			
			GPStorageSlots->AddChildToUniformGrid(CurrentWidget,LoopY,LoopX);
			EmptyStorageSlots.Add(CurrentWidget);
		}
	}
}

void UStorageWidget::AddItem(UBaseStorageItemObject* Item)
{
	if(!(Item->ItemParams.ParentStorage == StorageItem)) return;
	UItemStorageSlotWidget* CurrentWidget = Cast<UItemStorageSlotWidget>(CreateWidget<UUserWidget>(GetWorld(), StorageItemWidget));
	
	CurrentWidget->SlotSize = StorageSlotSize;
	CurrentWidget->SlotLocation = Item->ItemParams.Location;
	CurrentWidget->ParentStorageWidget = this;

	CurrentWidget->Item = Item;

	StorageItemWidgets.Add(CurrentWidget);
	OItems->AddChild(CurrentWidget);
}

void UStorageWidget::RelocateItem(UBaseStorageItemObject* Item)
{
	UItemStorageSlotWidget* ItemWidget = SearchWidgetByItem(Item);
	if(!ItemWidget) return;
	
	ItemWidget->UpdateItemLocation();
	ItemWidget->UpdateRotation(Item->ItemParams.Rotate);
}

void UStorageWidget::RemoveItem(UBaseStorageItemObject* Item)
{
	UItemStorageSlotWidget* ItemWidget = SearchWidgetByItem(Item);
	if(!ItemWidget) return;
	
	StorageItemWidgets.Remove(ItemWidget);
	ItemWidget->RemoveFromParent();

}

void UStorageWidget::ChangeCountItem(UBaseStorageItemObject* Item)
{
	UItemStorageSlotWidget* ItemWidget = SearchWidgetByItem(Item);
	if(!ItemWidget) return;

	ItemWidget->UpdateItemCount();
}
