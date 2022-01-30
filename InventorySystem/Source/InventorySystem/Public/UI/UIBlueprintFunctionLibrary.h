#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UI/Library/UIStructLibrary.h"
#include "UIBlueprintFunctionLibrary.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "UI")
	static void GetDTWidget(int32 ID, /*out*/ bool& WidgetFound,  FDT_Widget& Widget);
	
	UFUNCTION(BlueprintCallable, Category = "UI")
	static void CalculateAndSetImageSizeBox(class USizeBox* SlotSizeBox, USizeBox* ImageSizeBox, float ImageWidthX, float ImageHeightY, bool RotateImage);

	UFUNCTION(BlueprintCallable, Category = "UI")
	static void SetDynamicImage(UMaterialInstanceDynamic* DynamicMaterial,bool Rotate, bool SetRenderTexture, UTextureRenderTarget2D* RenderTexture, UTexture2D* DefaultImage);

	UFUNCTION(BlueprintCallable, Category = "UI")
	static FVector2D GetImageSize(int32 ItemSizeX, int32 ItemSizeY, UTexture2D* DefaultImage, bool UseRenderImage);

	UFUNCTION(BlueprintCallable, Category = "UI")
	static void SetAutoImage(USizeBox* SlotSizeBox, USizeBox* ImageSizeBox, int32 ItemSizeX, int32 ItemSizeY,UMaterialInstanceDynamic* DynamicMaterial,bool Rotate, bool SetRenderTexture, UTextureRenderTarget2D* RenderTexture, UTexture2D* DefaultImage);
};
