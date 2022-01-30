// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/UIBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIBlueprintFunctionLibrary() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UUIBlueprintFunctionLibrary_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UUIBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDT_Widget();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUIBlueprintFunctionLibrary::execSetAutoImage)
	{
		P_GET_OBJECT(USizeBox,Z_Param_SlotSizeBox);
		P_GET_OBJECT(USizeBox,Z_Param_ImageSizeBox);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemSizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemSizeY);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_DynamicMaterial);
		P_GET_UBOOL(Z_Param_Rotate);
		P_GET_UBOOL(Z_Param_SetRenderTexture);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTexture);
		P_GET_OBJECT(UTexture2D,Z_Param_DefaultImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIBlueprintFunctionLibrary::SetAutoImage(Z_Param_SlotSizeBox,Z_Param_ImageSizeBox,Z_Param_ItemSizeX,Z_Param_ItemSizeY,Z_Param_DynamicMaterial,Z_Param_Rotate,Z_Param_SetRenderTexture,Z_Param_RenderTexture,Z_Param_DefaultImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIBlueprintFunctionLibrary::execGetImageSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemSizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemSizeY);
		P_GET_OBJECT(UTexture2D,Z_Param_DefaultImage);
		P_GET_UBOOL(Z_Param_UseRenderImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UUIBlueprintFunctionLibrary::GetImageSize(Z_Param_ItemSizeX,Z_Param_ItemSizeY,Z_Param_DefaultImage,Z_Param_UseRenderImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIBlueprintFunctionLibrary::execSetDynamicImage)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_DynamicMaterial);
		P_GET_UBOOL(Z_Param_Rotate);
		P_GET_UBOOL(Z_Param_SetRenderTexture);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTexture);
		P_GET_OBJECT(UTexture2D,Z_Param_DefaultImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIBlueprintFunctionLibrary::SetDynamicImage(Z_Param_DynamicMaterial,Z_Param_Rotate,Z_Param_SetRenderTexture,Z_Param_RenderTexture,Z_Param_DefaultImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIBlueprintFunctionLibrary::execCalculateAndSetImageSizeBox)
	{
		P_GET_OBJECT(USizeBox,Z_Param_SlotSizeBox);
		P_GET_OBJECT(USizeBox,Z_Param_ImageSizeBox);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImageWidthX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImageHeightY);
		P_GET_UBOOL(Z_Param_RotateImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIBlueprintFunctionLibrary::CalculateAndSetImageSizeBox(Z_Param_SlotSizeBox,Z_Param_ImageSizeBox,Z_Param_ImageWidthX,Z_Param_ImageHeightY,Z_Param_RotateImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIBlueprintFunctionLibrary::execGetDTWidget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_UBOOL_REF(Z_Param_Out_WidgetFound);
		P_GET_STRUCT_REF(FDT_Widget,Z_Param_Out_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIBlueprintFunctionLibrary::GetDTWidget(Z_Param_ID,Z_Param_Out_WidgetFound,Z_Param_Out_Widget);
		P_NATIVE_END;
	}
	void UUIBlueprintFunctionLibrary::StaticRegisterNativesUUIBlueprintFunctionLibrary()
	{
		UClass* Class = UUIBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAndSetImageSizeBox", &UUIBlueprintFunctionLibrary::execCalculateAndSetImageSizeBox },
			{ "GetDTWidget", &UUIBlueprintFunctionLibrary::execGetDTWidget },
			{ "GetImageSize", &UUIBlueprintFunctionLibrary::execGetImageSize },
			{ "SetAutoImage", &UUIBlueprintFunctionLibrary::execSetAutoImage },
			{ "SetDynamicImage", &UUIBlueprintFunctionLibrary::execSetDynamicImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics
	{
		struct UIBlueprintFunctionLibrary_eventCalculateAndSetImageSizeBox_Parms
		{
			USizeBox* SlotSizeBox;
			USizeBox* ImageSizeBox;
			float ImageWidthX;
			float ImageHeightY;
			bool RotateImage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotSizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlotSizeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageSizeBox;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImageWidthX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImageHeightY;
		static void NewProp_RotateImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_SlotSizeBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_SlotSizeBox = { "SlotSizeBox", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventCalculateAndSetImageSizeBox_Parms, SlotSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_SlotSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_SlotSizeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageSizeBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageSizeBox = { "ImageSizeBox", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventCalculateAndSetImageSizeBox_Parms, ImageSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageSizeBox_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageWidthX = { "ImageWidthX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventCalculateAndSetImageSizeBox_Parms, ImageWidthX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageHeightY = { "ImageHeightY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventCalculateAndSetImageSizeBox_Parms, ImageHeightY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_RotateImage_SetBit(void* Obj)
	{
		((UIBlueprintFunctionLibrary_eventCalculateAndSetImageSizeBox_Parms*)Obj)->RotateImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_RotateImage = { "RotateImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIBlueprintFunctionLibrary_eventCalculateAndSetImageSizeBox_Parms), &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_RotateImage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_SlotSizeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageSizeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageWidthX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_ImageHeightY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::NewProp_RotateImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIBlueprintFunctionLibrary, nullptr, "CalculateAndSetImageSizeBox", nullptr, nullptr, sizeof(UIBlueprintFunctionLibrary_eventCalculateAndSetImageSizeBox_Parms), Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics
	{
		struct UIBlueprintFunctionLibrary_eventGetDTWidget_Parms
		{
			int32 ID;
			bool WidgetFound;
			FDT_Widget Widget;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static void NewProp_WidgetFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WidgetFound;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventGetDTWidget_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::NewProp_WidgetFound_SetBit(void* Obj)
	{
		((UIBlueprintFunctionLibrary_eventGetDTWidget_Parms*)Obj)->WidgetFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::NewProp_WidgetFound = { "WidgetFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIBlueprintFunctionLibrary_eventGetDTWidget_Parms), &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::NewProp_WidgetFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventGetDTWidget_Parms, Widget), Z_Construct_UScriptStruct_FDT_Widget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::NewProp_WidgetFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/UI/UIBlueprintFunctionLibrary.h" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIBlueprintFunctionLibrary, nullptr, "GetDTWidget", nullptr, nullptr, sizeof(UIBlueprintFunctionLibrary_eventGetDTWidget_Parms), Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics
	{
		struct UIBlueprintFunctionLibrary_eventGetImageSize_Parms
		{
			int32 ItemSizeX;
			int32 ItemSizeY;
			UTexture2D* DefaultImage;
			bool UseRenderImage;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemSizeX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemSizeY;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
		static void NewProp_UseRenderImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRenderImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_ItemSizeX = { "ItemSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventGetImageSize_Parms, ItemSizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_ItemSizeY = { "ItemSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventGetImageSize_Parms, ItemSizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventGetImageSize_Parms, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_UseRenderImage_SetBit(void* Obj)
	{
		((UIBlueprintFunctionLibrary_eventGetImageSize_Parms*)Obj)->UseRenderImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_UseRenderImage = { "UseRenderImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIBlueprintFunctionLibrary_eventGetImageSize_Parms), &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_UseRenderImage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventGetImageSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_ItemSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_ItemSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_DefaultImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_UseRenderImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIBlueprintFunctionLibrary, nullptr, "GetImageSize", nullptr, nullptr, sizeof(UIBlueprintFunctionLibrary_eventGetImageSize_Parms), Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics
	{
		struct UIBlueprintFunctionLibrary_eventSetAutoImage_Parms
		{
			USizeBox* SlotSizeBox;
			USizeBox* ImageSizeBox;
			int32 ItemSizeX;
			int32 ItemSizeY;
			UMaterialInstanceDynamic* DynamicMaterial;
			bool Rotate;
			bool SetRenderTexture;
			UTextureRenderTarget2D* RenderTexture;
			UTexture2D* DefaultImage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotSizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlotSizeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSizeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageSizeBox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemSizeX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemSizeY;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
		static void NewProp_Rotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rotate;
		static void NewProp_SetRenderTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetRenderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SlotSizeBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SlotSizeBox = { "SlotSizeBox", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms, SlotSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SlotSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SlotSizeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ImageSizeBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ImageSizeBox = { "ImageSizeBox", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms, ImageSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ImageSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ImageSizeBox_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ItemSizeX = { "ItemSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms, ItemSizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ItemSizeY = { "ItemSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms, ItemSizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_Rotate_SetBit(void* Obj)
	{
		((UIBlueprintFunctionLibrary_eventSetAutoImage_Parms*)Obj)->Rotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms), &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_Rotate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SetRenderTexture_SetBit(void* Obj)
	{
		((UIBlueprintFunctionLibrary_eventSetAutoImage_Parms*)Obj)->SetRenderTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SetRenderTexture = { "SetRenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms), &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SetRenderTexture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms, RenderTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SlotSizeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ImageSizeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ItemSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_ItemSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_DynamicMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_Rotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_SetRenderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_RenderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::NewProp_DefaultImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIBlueprintFunctionLibrary, nullptr, "SetAutoImage", nullptr, nullptr, sizeof(UIBlueprintFunctionLibrary_eventSetAutoImage_Parms), Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics
	{
		struct UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms
		{
			UMaterialInstanceDynamic* DynamicMaterial;
			bool Rotate;
			bool SetRenderTexture;
			UTextureRenderTarget2D* RenderTexture;
			UTexture2D* DefaultImage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
		static void NewProp_Rotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rotate;
		static void NewProp_SetRenderTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetRenderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_Rotate_SetBit(void* Obj)
	{
		((UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms*)Obj)->Rotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms), &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_Rotate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_SetRenderTexture_SetBit(void* Obj)
	{
		((UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms*)Obj)->SetRenderTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_SetRenderTexture = { "SetRenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms), &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_SetRenderTexture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms, RenderTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_DynamicMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_Rotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_SetRenderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_RenderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::NewProp_DefaultImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/UIBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIBlueprintFunctionLibrary, nullptr, "SetDynamicImage", nullptr, nullptr, sizeof(UIBlueprintFunctionLibrary_eventSetDynamicImage_Parms), Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIBlueprintFunctionLibrary_NoRegister()
	{
		return UUIBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_CalculateAndSetImageSizeBox, "CalculateAndSetImageSizeBox" }, // 2565747733
		{ &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetDTWidget, "GetDTWidget" }, // 320137865
		{ &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_GetImageSize, "GetImageSize" }, // 2224958032
		{ &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetAutoImage, "SetAutoImage" }, // 2077240544
		{ &Z_Construct_UFunction_UUIBlueprintFunctionLibrary_SetDynamicImage, "SetDynamicImage" }, // 3460305943
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/UIBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/UI/UIBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics::ClassParams = {
		&UUIBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIBlueprintFunctionLibrary, 3041863476);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UUIBlueprintFunctionLibrary>()
	{
		return UUIBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIBlueprintFunctionLibrary(Z_Construct_UClass_UUIBlueprintFunctionLibrary, &UUIBlueprintFunctionLibrary::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UUIBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
