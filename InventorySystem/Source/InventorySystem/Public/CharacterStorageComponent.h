#pragma once

#include "CoreMinimal.h"
#include "BaseStorageComponent.h"
#include "Items/WorldItemActor.h"
#include "CharacterStorageComponent.generated.h"

ENUM_RANGE_BY_COUNT(EEquipPart, EEquipPart::EEP_MAX)

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquipItem, UBaseStorageItemObject*, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnEquipItem, EEquipPart, EquipSlot);

UCLASS()
class INVENTORYSYSTEM_API UCharacterStorageComponent : public UBaseStorageComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FEquipItem OnEquipItem;

	UPROPERTY(BlueprintAssignable)
	FUnEquipItem OnUnEquipItem;
	
	virtual void AddItem(FDroppedItem Item, bool& ItemAdded, UBaseStorageItemObject*& AddedItemObject) override;
	
	UFUNCTION()
	void EquipItem(UBaseStorageItemObject* ItemToEquip, /*Out*/ bool& ReturnValue);
	
	UFUNCTION()
	void UnEquipItem(EEquipPart EquipSlot, /*Out*/bool& ReturnValue);
	
	UFUNCTION()
	UBaseStorageItemObject* GetEquipObjectItem(EEquipPart Slot);
	
	UFUNCTION()
	bool CanItemBeEquipped(FDroppedItem Item);
	
protected:
	void FindingFreeSlotInStorages(const UBaseStorageItemPDataAsset* ItemData, /*Out*/ bool& SlotFound, FItemLocation& SlotLocation, UStorage_StorageItemObject*& Storage);

private:
//Equipment Objects
	UPROPERTY()
	UBaseStorageItemObject* Head;
	
	UPROPERTY()
	UBaseStorageItemObject* Tors;
	
	UPROPERTY()
	UBaseStorageItemObject* Backpack;


//Equipment actos
	UPROPERTY()
	AWorldItemActor* HeadActor;

	UPROPERTY()
	AWorldItemActor* TorsActor;

	UPROPERTY()
	AWorldItemActor* BackpackActor;
};
