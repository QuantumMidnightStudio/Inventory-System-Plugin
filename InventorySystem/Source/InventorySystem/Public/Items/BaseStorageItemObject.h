#pragma once

#include "CoreMinimal.h"
#include "Library/StorageStructLibrary.h"
#include "BaseStorageItemObject.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UBaseStorageItemObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Item", meta = (ExposeOnSpawn="true"))
	AActor* ItemOwner;

	UPROPERTY(BlueprintReadWrite, Category = "Item", meta = (ExposeOnSpawn="true"))
	class UBaseStorageComponent* ItemStorage;
	
	UPROPERTY(BlueprintReadWrite, Category = "Item", meta = (ExposeOnSpawn="true"))
	FStorageItem ItemParams;

	UFUNCTION(BlueprintCallable,Category = "Item")
	void GetItemLocation(FItemLocation& StartItemLocation, FItemLocation& EndItemLocation);

	UFUNCTION(BlueprintCallable,Category = "Item")
	void AddCount(int32 Count);
	
	UFUNCTION(BlueprintCallable,Category = "Item")
	void RemoveCount(int32 Count);
};
