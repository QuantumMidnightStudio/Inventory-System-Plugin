#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StorageInterface.h"

#include "BaseStorageComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYSYSTEM_API UBaseStorageComponent : public UActorComponent, public IStorageInterface
{
	GENERATED_BODY()

public:
	UBaseStorageComponent();
	
	virtual void AddItem(FDroppedItem Item, bool& ItemAdded, UBaseStorageItemObject*& AddedItem) override;
	virtual void RemoveItem(UBaseStorageItemObject* Item, bool& ItemRemoved) override;

	UFUNCTION()
	UBaseStorageItemObject* CreateItem(FStorageItem ItemInfo, bool& ItemCreated);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	TSubclassOf<class AItemRenderImageActor> ItemRenderImageActor;
	
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	UTextureRenderTarget2D* RenderItemImage(class UBaseStorageItemPDataAsset* ItemDA);

	UPROPERTY()
	AItemRenderImageActor* RenderActor;
};
