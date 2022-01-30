#pragma once

#include "CoreMinimal.h"
#include "Items/BaseStorageItemPDataAsset.h"
#include "EquipmentStorageItemPDataAsset.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UEquipmentStorageItemPDataAsset : public UBaseStorageItemPDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EquipmentSettings")
	EEquipPart EquipPart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EquipmentSettings")
	bool SpawnEquipItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EquipmentSettings")
	FName Socket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EquipmentSettings")
	bool SetPlayerSkeletalMesh;
};
