#pragma once

#include "CoreMinimal.h"
#include "BaseStorageComponent.h"
#include "ChestStorageComponent.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UChestStorageComponent : public UBaseStorageComponent
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBaseStorageItemPDataAsset* ChestItemDataAsset;

	UPROPERTY(BlueprintReadWrite)
	class UStorage_StorageItemObject* StorageItemObject;
};
