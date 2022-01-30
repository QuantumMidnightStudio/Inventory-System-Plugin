#include "PlayerStorageComponent.h"

#include "Items/BaseStorageItemPDataAsset.h"

void UPlayerStorageComponent::InteractionWithChest(AChestActor* ChestActor)
{
	InteractedChest = ChestActor;
	OnChangeInteractedChest.Broadcast(ChestActor);
}

void UPlayerStorageComponent::DropItemToEmptySlot(UBaseStorageItemObject* DroppedItem, UStorage_StorageItemObject* Storage, FItemLocation Location, bool NewRotation)
{
	Storage->RelocateItem(DroppedItem, Location, true, NewRotation);
}

void UPlayerStorageComponent::DropItemToItem(UBaseStorageItemObject* DroppedItem, UBaseStorageItemObject* DroppedOnItem)
{
	if(DroppedItem == DroppedOnItem) return;
	
	if(DroppedOnItem->ItemParams.ItemDataAsset->IsStorage)
	{
		bool ItemRelocated;
		Cast<UStorage_StorageItemObject>(DroppedOnItem)->RelocateItemToFreeSlot(DroppedItem, ItemRelocated);
	}
	
	if(DroppedOnItem->ItemParams.ItemDataAsset->CanBeStack && DroppedOnItem->ItemParams.ItemDataAsset == DroppedItem->ItemParams.ItemDataAsset)
	{
		const int32 MaxCount = DroppedOnItem->ItemParams.ItemDataAsset->MaximumItemsInStack;
		const int32 FreeStackSpace = MaxCount - DroppedOnItem->ItemParams.Count; 
		const int32 CurrentCount = DroppedItem->ItemParams.Count;
		
		if(FreeStackSpace>=CurrentCount)
		{
			DroppedOnItem->AddCount(CurrentCount);
			bool ItemRemoved;
			DroppedItem->ItemParams.ParentStorage->RemoveItem(DroppedItem, ItemRemoved);
		}
		else
		{
			DroppedOnItem->AddCount(FreeStackSpace);
			DroppedItem->RemoveCount(FreeStackSpace);
		}
	}
}

void UPlayerStorageComponent::SplitItem(UBaseStorageItemObject* Item, int32 Count, FItemLocation SecondItemLocation,UStorage_StorageItemObject* SecondItemStorage, bool& ItemAdded)
{
	ItemAdded = false;
	if(Count<=0) return;

	bool Found;
	UBaseStorageItemObject* FoundItem;
	bool OutOfStorage;
	SecondItemStorage->CheckSlotBySize(SecondItemLocation, Item->ItemParams.ItemDataAsset, Item, false, Found, FoundItem, OutOfStorage);
	if (Found || OutOfStorage) return;
	
	if(Item->ItemParams.Count == Count)
	{
		SecondItemStorage->RelocateItem(Item, SecondItemLocation, false, false);
		ItemAdded = true;
		return;
	}
	
    bool ItemCreated;
    UBaseStorageItemObject* ObjectItem = CreateItem(Item->ItemParams,ItemCreated);
	if(!ItemCreated) return;
	
	ObjectItem->ItemParams.Count = Count;
	ObjectItem->ItemParams.Location = SecondItemLocation;
	Item->RemoveCount(Count);
	
	ItemAdded = true;
	SecondItemStorage->AddItemToArray(ObjectItem);
}
