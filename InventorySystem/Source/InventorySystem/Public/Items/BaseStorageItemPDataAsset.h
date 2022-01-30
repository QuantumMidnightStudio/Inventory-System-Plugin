#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Library/StorageStructLibrary.h"
#include "BaseStorageItemPDataAsset.generated.h"


UCLASS(BlueprintType)
class INVENTORYSYSTEM_API UBaseStorageItemPDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
//Default
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings")
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings")
	EItemType ItemType = EItemType::EIT_Default;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StandartSettings")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StandartSettings")
	EItemRarity Rarity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="StandartSettings", meta = (ClampMin = "1", ClampMax = "999999"))
	int32 ItemDefaultPrice = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="StandartSettings", meta = (ClampMin = "1", ClampMax = "20"))
	int32 ItemSizeX = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StandartSettings", meta = (ClampMin = "1", ClampMax = "20"))
	int32 ItemSizeY = 1;

//StackInfo
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings|StackInfo")
	bool CanBeStack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings|StackInfo", meta = (ClampMin = "1", ClampMax = "200", EditCondition = "CanBeStack"))
	int32 MaximumItemsInStack = 1;

//ImageSettings
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings|ImageSettings")
	bool RenderItemImage = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings|ImageSettings", meta = (EditCondition = "!RenderItemImage"))
	UTexture2D* ItemImage;
	
//MeshSettings
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StandartSettings|MeshSettings")
	UStaticMesh* StaticMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StandartSettings|MeshSettings")
	USkeletalMesh* SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StandartSettings|MeshSettings")
	TArray<FMeshMaterials> CustomMeshMaterials;

//StorageSettings
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings|StorageSettings")
	bool IsStorage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings|StorageSettings", meta = (EditCondition = "IsStorage"))
	int32 StorageSizeX = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StandartSettings|StorageSettings", meta = (EditCondition = "IsStorage"))
	int32 StorageSizeY = 1;
};
