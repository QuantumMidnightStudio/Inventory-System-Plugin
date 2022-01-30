#pragma once

#include "CoreMinimal.h"
#include "DaDStorage.h"
#include "CharacterStorageComponent.h"
#include "PlayerStorageComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeInteractedChest, class AChestActor*, NewChest);

UCLASS()
class INVENTORYSYSTEM_API UPlayerStorageComponent : public UCharacterStorageComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FChangeInteractedChest OnChangeInteractedChest;
	
	UPROPERTY()
	AChestActor* InteractedChest;

	void InteractionWithChest(AChestActor* ChestActor);
	
	UFUNCTION()
	void DropItemToEmptySlot(UBaseStorageItemObject* DroppedItem, UStorage_StorageItemObject* Storage, FItemLocation Location, bool NewRotation);

	UFUNCTION()
	void DropItemToItem(UBaseStorageItemObject* DroppedItem, UBaseStorageItemObject* DroppedOnItem);

	/**	
	* Splits a stackable item in two
	*/
	UFUNCTION()
	void SplitItem(UBaseStorageItemObject* Item, int32 Count, FItemLocation SecondItemLocation, UStorage_StorageItemObject* SecondItemStorage, bool& ItemAdded);
};
