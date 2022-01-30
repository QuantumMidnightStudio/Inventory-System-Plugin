#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "GameFramework/Actor.h"
#include "Chest/ChestStorageComponent.h"
#include "ChestActor.generated.h"

UCLASS()
class INVENTORYSYSTEM_API AChestActor : public AActor, public IInteractInterface
{
	GENERATED_BODY()

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	UChestStorageComponent* Inventory;
	
	AChestActor();

	virtual bool Interactable(EInteractType& InteractType) override;
	
protected:
	virtual void BeginPlay() override;
	
};
