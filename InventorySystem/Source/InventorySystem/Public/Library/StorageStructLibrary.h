#pragma once

#include "CoreMinimal.h"

//IncludeLibrary for other classes
#include "Library/StorageEnumLibrary.h"

#include "StorageStructLibrary.generated.h"

USTRUCT(BlueprintType)
struct FMeshMaterials
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Elements;
};

USTRUCT(BlueprintType)
struct FDroppedItem
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBaseStorageItemPDataAsset* ItemDataAsset;
};

USTRUCT(BlueprintType)
struct FItemLocation
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RowX = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ColumnY = 0;
};

USTRUCT(BlueprintType)
struct FStorageItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBaseStorageItemPDataAsset* ItemDataAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemLocation Location = {-1, -1};
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Rotate = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStorage_StorageItemObject* ParentStorage = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTextureRenderTarget2D* RenderImage = nullptr;
};

USTRUCT(BlueprintType)
struct FNeededItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBaseStorageItemPDataAsset* ItemDataAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count = 1;
};



	