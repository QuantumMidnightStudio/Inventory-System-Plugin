#pragma once

#include "CoreMinimal.h"
#include "Items/BaseStorageItemObject.h"
#include "Storage_StorageItemObject.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemRelocated, UBaseStorageItemObject*, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddItem, UBaseStorageItemObject*, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemRemoved, UBaseStorageItemObject*, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateItemCount, UBaseStorageItemObject*, Item);

UCLASS()
class INVENTORYSYSTEM_API UStorage_StorageItemObject : public UBaseStorageItemObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FAddItem OnItemAdded;
	
	UPROPERTY(BlueprintAssignable)
	FItemRelocated OnItemRelocated;

	UPROPERTY(BlueprintAssignable)
	FItemRemoved OnItemRemoved;

	UPROPERTY(BlueprintAssignable)
	FUpdateItemCount OnItemCountUpdated;
	
// Public: Variables
	UPROPERTY(BlueprintReadWrite, Category = "Item")
	TArray<UBaseStorageItemObject*> StorageItems;
	
//Public: Functions
	UFUNCTION(BlueprintCallable,Category = "Item")
	void AddItem(UBaseStorageItemObject* Item, bool& ItemAdded);

	UFUNCTION(BlueprintCallable,Category = "Item")
	void AddItemToArray(UBaseStorageItemObject* ItemObject);

	UFUNCTION(BlueprintCallable,Category = "Item")
	void RemoveItem(UBaseStorageItemObject* ItemObject, bool& ItemRemoved);

	UFUNCTION(BlueprintCallable,Category = "Item")
	void RelocateItem(UBaseStorageItemObject* Item, FItemLocation NewLocation, bool ChangeRotation, bool NewRotation);

	void RelocateItemToFreeSlot(UBaseStorageItemObject* Item, bool& ItemRelocated);

/* Slots */
	/**	
	* @param Location slot location.
	*/
	UFUNCTION(BlueprintCallable,Category = "Slots")
	bool LocationInStorageRange(FItemLocation Location);

	UFUNCTION(BlueprintCallable,Category = "Slots")
	void SearchFreeSlotInStorage(const UBaseStorageItemPDataAsset* ItemData, /*Out*/ bool& Found, FItemLocation& SlotLocation);

	UFUNCTION(BlueprintCallable,Category = "Slots")
	void CheckSlotBySize(FItemLocation SlotLocation, const UBaseStorageItemPDataAsset* ItemData, UBaseStorageItemObject* IgnoreItem,bool RotateItem,/*Out*/ bool& Found, UBaseStorageItemObject*& Item, bool& OutOfStorage);

	UFUNCTION(BlueprintCallable,Category = "Slots")
	void GetSlotInfoInStorage(FItemLocation SlotLocation, UBaseStorageItemObject* IgnoreItem, /*Out*/ bool& Found, UBaseStorageItemObject*& Item);
/* ==================== */

/* Hierarchy */
	
	UFUNCTION(BlueprintCallable)
	void SearchItemsInStorageHierarchy(TArray<UBaseStorageItemObject*>& Items);

	UFUNCTION(BlueprintCallable)
	void SearchAllParentStorageHierarchy(TArray<UStorage_StorageItemObject*>& Storages);

	UFUNCTION(BlueprintCallable)
	void SearchItemsByDataAsset(UBaseStorageItemPDataAsset* DataAsset, TArray<UBaseStorageItemObject*>& Items);

	UFUNCTION(BlueprintCallable)
	bool CheckingForTheStorageParadox(UStorage_StorageItemObject* Item);

/* ==================== */

	UFUNCTION(BlueprintCallable)
	void AddItemToOtherStackableItems(UBaseStorageItemObject* Item,bool& AllItemStackBeenAdded);
};
