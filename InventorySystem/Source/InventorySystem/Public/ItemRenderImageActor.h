#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Library/StorageStructLibrary.h"
#include "ItemRenderImageActor.generated.h"

UCLASS()
class INVENTORYSYSTEM_API AItemRenderImageActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AItemRenderImageActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Default, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemRender, meta = (AllowPrivateAccess = "true"))
	USceneCaptureComponent2D* SceneCapture;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemRender, meta = (AllowPrivateAccess = "true"))
	class USpotLightComponent* Light;
	
	UFUNCTION()
	UTextureRenderTarget2D* RenderItem(class UBaseStorageItemPDataAsset* ItemDA);

private:
	UFUNCTION()
	void SetMaterials(TArray<FMeshMaterials> Materials, UPrimitiveComponent* Mesh);
	
	UFUNCTION()
	void SetMesh(UBaseStorageItemPDataAsset* ItemDA, UPrimitiveComponent*& MeshComp);
	
	UFUNCTION()
	UTextureRenderTarget2D* Snap(int32 Width, int32 Height);
};
