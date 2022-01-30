#include "Chest/ChestStorageComponent.h"


void UChestStorageComponent::BeginPlay()
{
	Super::BeginPlay();

	StorageItemObject = NewObject<UStorage_StorageItemObject>();
	
	StorageItemObject->ItemOwner = GetOwner();
	StorageItemObject->ItemParams.ItemDataAsset = ChestItemDataAsset;
}
