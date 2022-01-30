#include "CharacterStorageComponent.h"

#include "Items/Storage_StorageItemObject.h"
#include "Items/EquipmentStorageItemPDataAsset.h"

void UCharacterStorageComponent::AddItem(FDroppedItem Item, bool& ItemAdded, UBaseStorageItemObject*& AddedItemObject)
{
	ItemAdded = false;
	
	const FStorageItem StorageItemToAdd = {Item.ItemDataAsset, Item.Count};
	bool ItemCreated;
	UBaseStorageItemObject* ObjectItem = CreateItem(StorageItemToAdd,ItemCreated);
	if(!ItemCreated) return;

	if(Item.ItemDataAsset->RenderItemImage)
	{
		ObjectItem->ItemParams.RenderImage = RenderItemImage(Item.ItemDataAsset);
	}
	
	//Check equip or add
	if(CanItemBeEquipped(Item))
	{
		bool IsItemEquipped;
		EquipItem(ObjectItem, IsItemEquipped);
		if(IsItemEquipped)
		{
			AddedItemObject = ObjectItem;
			ItemAdded = true;
			return;
		}
	}

	//Try add in any equipment item
	for (const EEquipPart EquipPart : TEnumRange<EEquipPart>())
	{
		UBaseStorageItemObject* EquipStorageItem = GetEquipObjectItem(EquipPart);
		if(!EquipStorageItem || !EquipStorageItem->ItemParams.ItemDataAsset->IsStorage) continue;

		const auto Storage = Cast<UStorage_StorageItemObject>(EquipStorageItem);
		Storage->AddItem(ObjectItem, ItemAdded);
		if(ItemAdded)
		{
			return;
		}
	}
}

void UCharacterStorageComponent::EquipItem(UBaseStorageItemObject* ItemToEquip, bool& ReturnValue)
{
	if(!ItemToEquip || !(ItemToEquip->ItemParams.ItemDataAsset->ItemType == EItemType::EIT_Equipment)) return;

	const FDroppedItem ItemInfo = {ItemToEquip->ItemParams.Count, ItemToEquip->ItemParams.ItemDataAsset};
	if(!CanItemBeEquipped(ItemInfo)) return;
	
	if(ItemToEquip->ItemParams.ParentStorage)
	{
		bool ItemRemoved;
		ItemToEquip->ItemParams.ParentStorage->RemoveItem(ItemToEquip, ItemRemoved);
	}
	
	const auto EquipmentData = Cast<UEquipmentStorageItemPDataAsset>(ItemToEquip->ItemParams.ItemDataAsset);
	if(!EquipmentData) return;
	switch (EquipmentData->EquipPart)
	{
	case EEquipPart::EEP_Head:
		Head = ItemToEquip;
		UE_LOG(LogTemp, Display, TEXT("EquipHead"));
		ReturnValue = true;
		break;

	case EEquipPart::EEP_Tors:
		Tors = ItemToEquip;
		UE_LOG(LogTemp, Display, TEXT("EquipTors"));
		ReturnValue = true;
		break;
		
	case EEquipPart::EEP_Backpack: 
		Backpack = ItemToEquip;
		UE_LOG(LogTemp, Display, TEXT("EquipBackpack"));
		ReturnValue = true;
		break;
	default:
		ReturnValue = false;
		break;
	}
	if(ReturnValue)
	{
		ItemToEquip->ItemParams.ParentStorage = nullptr;
		ItemToEquip->ItemParams.Location = {-1, -1};
		ItemToEquip->ItemOwner = GetOwner();
		ItemToEquip->ItemStorage = this;
		
		OnEquipItem.Broadcast(ItemToEquip);
	}
}

void UCharacterStorageComponent::UnEquipItem(EEquipPart EquipSlot, bool& ReturnValue)
{
	switch (EquipSlot)
	{
	default:
		ReturnValue = false;
		break;
		
	case EEquipPart::EEP_Head:
		Head = nullptr;
		ReturnValue = true;
		break;

	case EEquipPart::EEP_Tors:
		Tors = nullptr;
		ReturnValue = true;
		break;
		
	case EEquipPart::EEP_Backpack:
		Backpack = nullptr;
		ReturnValue = true;
		break;
	}

	if(ReturnValue)
	{
		OnUnEquipItem.Broadcast(EquipSlot);
	}
}

UBaseStorageItemObject* UCharacterStorageComponent::GetEquipObjectItem(EEquipPart Slot)
{
	switch (Slot)
	{
	case EEquipPart::EEP_Head:
		return Head;

	case EEquipPart::EEP_Tors:
		return Tors;
		
	case EEquipPart::EEP_Backpack: 
		return Backpack;
	default:
		return nullptr;
	}
}

bool UCharacterStorageComponent::CanItemBeEquipped(FDroppedItem Item)
{
	const auto EquipmentData = Cast<UEquipmentStorageItemPDataAsset>(Item.ItemDataAsset);
	if (!EquipmentData) return false;

	switch (EquipmentData->EquipPart)
	{
	case EEquipPart::EEP_Head:
		if(!Head)
		{
			return true;
		}
		break;

	case EEquipPart::EEP_Tors: 
		if(!Tors)
		{
			return true;
		}
		break;
		
	case EEquipPart::EEP_Backpack: 
		if(!Backpack)
		{
			return true;
		}
		break;
	default:
		return false;
	}
	return false;
}

void UCharacterStorageComponent::FindingFreeSlotInStorages(const UBaseStorageItemPDataAsset* ItemData, bool& SlotFound, FItemLocation& SlotLocation, UStorage_StorageItemObject*& Storage)
{
	for (const EEquipPart EquipPart : TEnumRange<EEquipPart>())
	{
		UBaseStorageItemObject* EquipStorageItem = GetEquipObjectItem(EquipPart);
		if(!EquipStorageItem || !EquipStorageItem->ItemParams.ItemDataAsset->IsStorage) continue;

		Storage = Cast<UStorage_StorageItemObject>(EquipStorageItem);
		if(!Storage) continue;
		Storage->SearchFreeSlotInStorage(ItemData, SlotFound, SlotLocation);
		if(SlotFound) return;
	}	
}
