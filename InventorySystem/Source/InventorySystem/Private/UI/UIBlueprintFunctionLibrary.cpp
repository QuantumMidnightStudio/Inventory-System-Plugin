#include "UI/UIBlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/Texture2D.h"
#include "Components/SizeBox.h"

void UUIBlueprintFunctionLibrary::GetDTWidget(int32 ID, bool& WidgetFound, FDT_Widget& Widget)
{
	const UDataTable* DTWidgets = LoadObject<UDataTable>(nullptr, TEXT("/Game/Blueprints/WidgetSystem/DT_Widgets.DT_Widgets"));
	if(!DTWidgets) return;
	{
		const FString IDToString = FString::FromInt(ID);
		const FName WidgetRowName = FName(IDToString);
			
		const FString ContextString = TEXT("GetDTWidgetContext");

		FDT_Widget* DTWidget = DTWidgets->FindRow<FDT_Widget>(WidgetRowName, ContextString, true);
		if (DTWidget)
		{
			Widget = *DTWidget;
			WidgetFound = true;
			return;
		}
	}
	WidgetFound = false;
}

void UUIBlueprintFunctionLibrary::CalculateAndSetImageSizeBox(USizeBox* SlotSizeBox, USizeBox* ImageSizeBox, float ImageWidthX, float ImageHeightY, bool RotateImage)
{
	const float CurrentImageWidthX = RotateImage ? ImageHeightY : ImageWidthX;
	const float CurrentImageHeightY = RotateImage ? ImageWidthX : ImageHeightY;
	UE_LOG(LogTemp, Warning, TEXT("CurrentImageWidthX: %f"), CurrentImageWidthX);
	UE_LOG(LogTemp, Warning, TEXT("CurrentImageHeightY: %f"), CurrentImageHeightY);
	
	const float ImagePercentX = SlotSizeBox->WidthOverride/CurrentImageWidthX;
	const float ImagePercentY = SlotSizeBox->HeightOverride/CurrentImageHeightY;
	
	const float MinImagePercent = ImagePercentX>ImagePercentY ? ImagePercentY : ImagePercentX;
	
	ImageSizeBox->SetWidthOverride(CurrentImageWidthX*MinImagePercent);
	ImageSizeBox->SetHeightOverride(CurrentImageHeightY*MinImagePercent);
}

void UUIBlueprintFunctionLibrary::SetDynamicImage(UMaterialInstanceDynamic* DynamicMaterial, bool Rotate, bool SetRenderTexture, UTextureRenderTarget2D* RenderTexture, UTexture2D* DefaultImage)
{
	DynamicMaterial->SetScalarParameterValue("Rotation", Rotate ? -90.0f : 0.0f);
	if(!(RenderTexture || DefaultImage)) return;
	
	UTexture* TextureParameter;
	if(SetRenderTexture)
	{
		TextureParameter = RenderTexture;
	}
	else
	{
		TextureParameter = DefaultImage;
	}
	DynamicMaterial->SetTextureParameterValue("Image", TextureParameter);
	DynamicMaterial->SetScalarParameterValue("RenderItem?", SetRenderTexture ? 1.0f : 0.0f);
}

FVector2D UUIBlueprintFunctionLibrary::GetImageSize(int32 ItemSizeX, int32 ItemSizeY, UTexture2D* DefaultImage, bool UseRenderImage)
{
	if(UseRenderImage)
	{
		return {(float)ItemSizeX * 200.0f, (float)ItemSizeY * 200.0f};
	}
	else
	{
		if(!DefaultImage) return {128.0f, 128.0f};
		return {float(DefaultImage->GetSizeX()), float(DefaultImage->GetSizeY())};
	}
}

void UUIBlueprintFunctionLibrary::SetAutoImage(USizeBox* SlotSizeBox, USizeBox* ImageSizeBox, int32 ItemSizeX, int32 ItemSizeY, UMaterialInstanceDynamic* DynamicMaterial, bool Rotate, bool SetRenderTexture, UTextureRenderTarget2D* RenderTexture, UTexture2D* DefaultImage)
{
	if(SlotSizeBox && ImageSizeBox && DynamicMaterial)
	{
		SetDynamicImage(DynamicMaterial, Rotate, SetRenderTexture, RenderTexture, DefaultImage);
		const FVector2D ImageSize = GetImageSize(ItemSizeX, ItemSizeY, DefaultImage, SetRenderTexture);
		CalculateAndSetImageSizeBox(SlotSizeBox, ImageSizeBox, ImageSize.X, ImageSize.Y, Rotate);
	}
}
