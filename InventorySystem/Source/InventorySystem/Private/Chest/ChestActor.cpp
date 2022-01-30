#include "Chest/ChestActor.h"


AChestActor::AChestActor()
{
	PrimaryActorTick.bCanEverTick = false;
	Inventory = CreateDefaultSubobject<UChestStorageComponent>(TEXT("InventoryComponent"));
}

bool AChestActor::Interactable(EInteractType& Interact)
{
	Interact = EInteractType::EIT_Chest;
	return true;
}

void AChestActor::BeginPlay()
{
	Super::BeginPlay();
}

