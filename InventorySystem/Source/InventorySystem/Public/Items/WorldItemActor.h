#pragma once

#include "CoreMinimal.h"
#include "BaseStorageItemObject.h"
#include "InteractInterface.h"
#include "GameFramework/Actor.h"
#include "Library/StorageStructLibrary.h"
#include "WorldItemActor.generated.h"

UCLASS()
class INVENTORYSYSTEM_API AWorldItemActor : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	AWorldItemActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Default, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneRoot;
	
	virtual void OnConstruction(const FTransform& Transform) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item", meta = (ExposeOnSpawn="true"))
	FDroppedItem ItemSettings;

	UPROPERTY(BlueprintReadWrite, Category = "Item")
	TArray<UBaseStorageItemObject*> StorageItems;
	
	virtual bool Interactable(EInteractType& InteractType) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	UPrimitiveComponent* MeshComponent;
	
protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void SetMesh(UBaseStorageItemPDataAsset* ItemDA, UPrimitiveComponent*& MeshComp);
	
	UFUNCTION()
	void SetMaterials(TArray<FMeshMaterials> Materials, UPrimitiveComponent* Mesh);
};
