#include "Items/Storage_StorageItemObject.h"

#include "CharacterStorageComponent.h"
#include "Items/EquipmentStorageItemPDataAsset.h"

void UStorage_StorageItemObject::AddItem(UBaseStorageItemObject* Item, bool& ItemAdded)
{
	bool AllItemStackBeenAdded;
	AddItemToOtherStackableItems(Item, AllItemStackBeenAdded);
	if(AllItemStackBeenAdded)
	{
		ItemAdded = true;
		return;
	}

	bool SlotFound; 
	FItemLocation SlotLocation;
	SearchFreeSlotInStorage(Item->ItemParams.ItemDataAsset, SlotFound, SlotLocation);
	if(!SlotFound) return;
	
	Item->ItemParams.Location=SlotLocation;
	AddItemToArray(Item);
	ItemAdded = true;
}

void UStorage_StorageItemObject::AddItemToArray(UBaseStorageItemObject* ItemObject)
{
	ItemObject->ItemParams.ParentStorage = this;
	ItemObject->ItemOwner = ItemOwner;
	StorageItems.Add(ItemObject);
	
	OnItemAdded.Broadcast(ItemObject);
}

void UStorage_StorageItemObject::RemoveItem(UBaseStorageItemObject* ItemObject, bool& ItemRemoved)
{
	OnItemRemoved.Broadcast(ItemObject);
	StorageItems.Remove(ItemObject);
	ItemRemoved = true;
}

void UStorage_StorageItemObject::RelocateItem(UBaseStorageItemObject* Item, FItemLocation NewLocation,  bool ChangeRotation, bool NewRotation)
{
	if(Item == this) return;

	if(Item->ItemParams.ItemDataAsset->IsStorage)
	{
		if(CheckingForTheStorageParadox(Cast<UStorage_StorageItemObject>(Item))) return;
	}
	
	const bool ItemRotation = ChangeRotation ? NewRotation : Item->ItemParams.Rotate;
	
	bool Found;
    UBaseStorageItemObject* FoundItem;
    bool OutOfStorage;
	CheckSlotBySize(NewLocation, Item->ItemParams.ItemDataAsset, Item, ItemRotation, Found, FoundItem, OutOfStorage);
	if (Found || OutOfStorage) return;
	
	Item->ItemParams.Location = NewLocation;
	Item->ItemParams.Rotate = ItemRotation;

	//IsParentStorageTheSame
	if(Item->ItemParams.ParentStorage == this)
	{
		OnItemRelocated.Broadcast(Item);
	}
	else
	{
		UStorage_StorageItemObject* OldStorage = Item->ItemParams.ParentStorage;
		AddItemToArray(Item);
		if(OldStorage)
		{
			bool ItemRemoved;
			OldStorage->RemoveItem(Item, ItemRemoved);
		}
		else
		{
			bool UnEquipReturnValue;
			Cast<UCharacterStorageComponent>(Item->ItemStorage)->UnEquipItem(Cast<UEquipmentStorageItemPDataAsset>(Item->ItemParams.ItemDataAsset)->EquipPart, UnEquipReturnValue);
		}
	}
}

void UStorage_StorageItemObject::RelocateItemToFreeSlot(UBaseStorageItemObject* Item, bool& ItemRelocated)
{
	ItemRelocated = false;
	bool Found;
	FItemLocation SlotLocation;
	SearchFreeSlotInStorage(Item->ItemParams.ItemDataAsset, Found, SlotLocation);

	if(Found)
	{
		RelocateItem(Item, SlotLocation, false, false);
		ItemRelocated = true;
	}
}

bool UStorage_StorageItemObject::LocationInStorageRange(FItemLocation Location)
{
	const int32 StorageSizeX = ItemParams.ItemDataAsset->StorageSizeX-1;
	const int32 StorageSizeY = ItemParams.ItemDataAsset->StorageSizeY-1;

	return (Location.RowX<=StorageSizeX)&&(Location.ColumnY<=StorageSizeY)&&(Location.RowX>=0)&&(Location.ColumnY>=0);
}

void UStorage_StorageItemObject::SearchFreeSlotInStorage(const UBaseStorageItemPDataAsset* ItemData, bool& Found, FItemLocation& SlotLocation)
{
	const int32 StorageSizeX = ItemParams.ItemDataAsset->StorageSizeX;
	const int32 StorageSizeY = ItemParams.ItemDataAsset->StorageSizeY;
	
	
	for (int LoopY = 0; LoopY <= StorageSizeY; LoopY++)
	{
		for (int LoopX = 0; LoopX <= StorageSizeX; LoopX++)
		{
			bool ReturnItemFound;
			UBaseStorageItemObject* ReturnItem;
			bool ReturnOutOfStorage;
			
			CheckSlotBySize({LoopX, LoopY}, ItemData, nullptr, false, ReturnItemFound, ReturnItem, ReturnOutOfStorage);
			if(!(ReturnItemFound || ReturnOutOfStorage))
			{
				SlotLocation = {LoopX, LoopY};
				Found = true;
				return;
			}
		}
	}
	SlotLocation = {-1, -1};
	Found = false;
}

void UStorage_StorageItemObject::CheckSlotBySize(FItemLocation SlotLocation, const UBaseStorageItemPDataAsset* ItemData, UBaseStorageItemObject* IgnoreItem, bool RotateItem, bool& Found, UBaseStorageItemObject*& Item, bool& OutOfStorage)
{
	const int32 ItemSizeX = RotateItem ? ItemData->ItemSizeY-1 : ItemData->ItemSizeX-1;
	const int32 ItemSizeY = RotateItem ? ItemData->ItemSizeX-1 : ItemData->ItemSizeY-1;
	
	if (!LocationInStorageRange(SlotLocation) || !LocationInStorageRange({SlotLocation.RowX+ItemSizeX, SlotLocation.ColumnY+ItemSizeY}))
	{
		OutOfStorage = true;
		return;
	}
	
	for (int LoopX = SlotLocation.RowX; LoopX <= SlotLocation.RowX+ItemSizeX; LoopX++)
	{
		for (int LoopY = SlotLocation.ColumnY; LoopY <= SlotLocation.ColumnY+ItemSizeY; LoopY++)
		{
			bool ReturnFound;
			UBaseStorageItemObject* ReturnItem;
			GetSlotInfoInStorage({LoopX, LoopY}, IgnoreItem, ReturnFound, ReturnItem);
			if(ReturnFound)
			{
				OutOfStorage = false;
				Found = true;
				Item = ReturnItem;
				return;
			}
		}
	}
	Found = false;
	OutOfStorage = false;
}

void UStorage_StorageItemObject::GetSlotInfoInStorage(FItemLocation SlotLocation, UBaseStorageItemObject* IgnoreItem, bool& Found, UBaseStorageItemObject*& Item)
{
	for (UBaseStorageItemObject* StorageItem : StorageItems)
	{
		if(StorageItem == IgnoreItem) continue;
		
		FItemLocation StartItemLocation;
		FItemLocation EndItemLocation;
		StorageItem->GetItemLocation(StartItemLocation, EndItemLocation);
		for (int LoopY = StartItemLocation.ColumnY; LoopY <= EndItemLocation.ColumnY; LoopY++)
		{
			if(LoopY == SlotLocation.ColumnY)
			{
				for (int LoopX = StartItemLocation.RowX; LoopX <= EndItemLocation.RowX; LoopX++)
				{
					if(LoopX == SlotLocation.RowX)
					{
						Found = true;
						Item = StorageItem;
						return;
					}
				}
			}
		} 
	}
	Found = false;
}

void UStorage_StorageItemObject::SearchItemsInStorageHierarchy(TArray<UBaseStorageItemObject*>& Items)
{
	for (UBaseStorageItemObject* StorageItem : StorageItems)
	{
		Items.Add(StorageItem);
		if(StorageItem->ItemParams.ItemDataAsset->IsStorage)
		{
			const auto StorageObject = Cast<UStorage_StorageItemObject>(StorageItem);
			TArray<UBaseStorageItemObject*> FoundItems;
			StorageObject->SearchItemsInStorageHierarchy(FoundItems);
			if(FoundItems.IsValidIndex(0))
			{
				Items.Append(FoundItems);
			}
		}
	}
}

void UStorage_StorageItemObject::SearchAllParentStorageHierarchy(TArray<UStorage_StorageItemObject*>& Storages)
{
	if(ItemParams.ParentStorage)
	{
		Storages.Add(ItemParams.ParentStorage);
		TArray<UStorage_StorageItemObject*> FoundStorages;
		ItemParams.ParentStorage->SearchAllParentStorageHierarchy(FoundStorages);

		if(FoundStorages.IsValidIndex(0))
		{
			Storages.Append(FoundStorages);
		}
	}
}

void UStorage_StorageItemObject::SearchItemsByDataAsset(UBaseStorageItemPDataAsset* DataAsset, TArray<UBaseStorageItemObject*>& Items)
{
	TArray<UBaseStorageItemObject*> FoundItems;
	SearchItemsInStorageHierarchy(FoundItems);

	for (UBaseStorageItemObject* Item : FoundItems)
	{
		if(Item->ItemParams.ItemDataAsset == DataAsset)
		{
			Items.Add(Item);
		}
	}
}

bool UStorage_StorageItemObject::CheckingForTheStorageParadox(UStorage_StorageItemObject* Item)
{
	TArray<UStorage_StorageItemObject*> FoundStorages;
	SearchAllParentStorageHierarchy(FoundStorages);

	for(UStorage_StorageItemObject* Storage : FoundStorages)
	{
		if(Storage == Item)
		{
			return true;
		}
	}
	return false;
}

void UStorage_StorageItemObject::AddItemToOtherStackableItems(UBaseStorageItemObject* Item, bool& AllItemStackBeenAdded)
{
	AllItemStackBeenAdded = false;
	
	if(!Item->ItemParams.ItemDataAsset->CanBeStack) return;
	
	const int32 MaxCount =Item->ItemParams.ItemDataAsset->MaximumItemsInStack;
	int32 CurrentCount = Item->ItemParams.Count;
	
	TArray<UBaseStorageItemObject*> FoundItems;
	SearchItemsByDataAsset(Item->ItemParams.ItemDataAsset, FoundItems);

	for (UBaseStorageItemObject* FoundItem : FoundItems)
	{
		const int32 FreeStackSpace = MaxCount - FoundItem->ItemParams.Count;
		if(FreeStackSpace>0)
		{
			if(FreeStackSpace>=CurrentCount)
			{
				FoundItem->ItemParams.Count = FoundItem->ItemParams.Count + CurrentCount;
				
				OnItemCountUpdated.Broadcast(FoundItem);
				
				AllItemStackBeenAdded = true;
				if(Item->ItemParams.ParentStorage)
				{
					bool ItemRemoved;
					Item->ItemParams.ParentStorage->RemoveItem(Item,ItemRemoved);
				}
				return;
			}
			else
			{
				FoundItem->ItemParams.Count = MaxCount;
				CurrentCount = CurrentCount-FreeStackSpace;
				
				OnItemCountUpdated.Broadcast(FoundItem);
			}
		}
	}
	Item->ItemParams.Count = CurrentCount;
	AllItemStackBeenAdded = false;
	return;
}
