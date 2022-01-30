#include "Items/WorldItemActor.h"

#include "Items/BaseStorageItemPDataAsset.h"


AWorldItemActor::AWorldItemActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SceneRoot->bVisualizeComponent = true;
	SetRootComponent(SceneRoot);
}

void AWorldItemActor::OnConstruction(const FTransform& Transform)
{
	if(ItemSettings.ItemDataAsset)
	{
		SetMesh(ItemSettings.ItemDataAsset, MeshComponent);
	}
	Super::OnConstruction(Transform);
}

bool AWorldItemActor::Interactable(EInteractType& Interact)
{
	Interact = EInteractType::EIT_Item;
	return true;
}

void AWorldItemActor::BeginPlay()
{
	Super::BeginPlay();
}

void AWorldItemActor::SetMesh(UBaseStorageItemPDataAsset* ItemDA, UPrimitiveComponent*& MeshComp)
{
	if(ItemDA->SkeletalMesh)
	{
		const auto SkeletalMeshComponent = NewObject<USkeletalMeshComponent>(this, TEXT("SkeletalMeshComponent"));
		SkeletalMeshComponent->SetSkeletalMesh(ItemDA->SkeletalMesh);
		MeshComp = SkeletalMeshComponent;
	}
	else if(ItemDA->StaticMesh)
	{
		const auto StaticMeshComponent = NewObject<UStaticMeshComponent>(this, TEXT("StaticMeshComponent"));
		StaticMeshComponent->SetStaticMesh(ItemDA->StaticMesh);
		MeshComp = StaticMeshComponent;
	}
	else
	{
		return;
	}
	
	MeshComp->SetupAttachment(GetRootComponent());
	MeshComp->RegisterComponent();
	MeshComp->SetCollisionProfileName(TEXT("BlockAll"));
	
	SetMaterials(ItemDA->CustomMeshMaterials, MeshComp);
}

void AWorldItemActor::SetMaterials(TArray<FMeshMaterials> Materials, UPrimitiveComponent* Mesh)
{
	for(FMeshMaterials Material : Materials)
	{
		for(const int32 ElementIndex : Material.Elements)
		{
			Mesh->SetMaterial(ElementIndex, Material.Material);
		}
	}
}


