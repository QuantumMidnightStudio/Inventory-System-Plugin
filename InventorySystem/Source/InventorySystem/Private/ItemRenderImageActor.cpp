#include "ItemRenderImageActor.h"

#include "Components/SpotLightComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Items/BaseStorageItemPDataAsset.h"
#include "Kismet/KismetSystemLibrary.h"


AItemRenderImageActor::AItemRenderImageActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SceneRoot->bVisualizeComponent = true;
	SetRootComponent(SceneRoot);
	
	SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
	SceneCapture->SetupAttachment(GetRootComponent());
	
	Light = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	Light->SetupAttachment(SceneCapture);
	Light->SetRelativeLocation({-170.0f, 0.0f, 0.0f});
}

UTextureRenderTarget2D* AItemRenderImageActor::RenderItem(UBaseStorageItemPDataAsset* ItemDA)
{
	if(!ItemDA) return nullptr;
	UPrimitiveComponent* MeshComp;
	SetMesh(ItemDA, MeshComp);

	FVector Origin;
	FVector BoxExtent;
	float SphereRadius;
	UKismetSystemLibrary::GetComponentBounds(MeshComp, Origin, BoxExtent, SphereRadius);
	

	MeshComp->SetRelativeLocation((Origin - MeshComp->GetComponentLocation()) * -1.0f);

	const float MultiplicationFactor = FMath::Clamp((float)ItemDA->ItemSizeX / (float)ItemDA->ItemSizeY / BoxExtent.Size() * 10.0f, 1.0f, 99.0f);
	const float PosX = BoxExtent.Size() * MultiplicationFactor * -1.0f;
	SceneCapture->SetRelativeLocation({PosX, 0.0f, 0.0f});

	const auto RenderTexture = Snap(ItemDA->ItemSizeX * 200, ItemDA->ItemSizeY * 200);
	MeshComp->DestroyComponent();
	
	return RenderTexture;
}

void AItemRenderImageActor::SetMaterials(TArray<FMeshMaterials> Materials, UPrimitiveComponent* Mesh)
{
	for(FMeshMaterials Material : Materials)
	{
		for(const int32 ElementIndex : Material.Elements)
		{
			Mesh->SetMaterial(ElementIndex, Material.Material);
		}
	}
}

void AItemRenderImageActor::SetMesh(UBaseStorageItemPDataAsset* ItemDA, UPrimitiveComponent*& MeshComp)
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
	
	SetMaterials(ItemDA->CustomMeshMaterials, MeshComp);
}

UTextureRenderTarget2D* AItemRenderImageActor::Snap(int32 Width, int32 Height)
{
	UTextureRenderTarget2D* RenderTarget = 	UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), Width, Height);
	SceneCapture->TextureTarget = RenderTarget;
	SceneCapture->ShowOnlyActorComponents(this);
	SceneCapture->CaptureScene();
	SceneCapture->TextureTarget = nullptr;
	return RenderTarget;
}

