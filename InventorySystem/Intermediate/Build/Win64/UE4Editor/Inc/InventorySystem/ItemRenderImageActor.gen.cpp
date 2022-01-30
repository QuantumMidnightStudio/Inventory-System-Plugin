// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemRenderImageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemRenderImageActor() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemRenderImageActor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemRenderImageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AItemRenderImageActor::execSnap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->Snap(Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemRenderImageActor::execSetMesh)
	{
		P_GET_OBJECT(UBaseStorageItemPDataAsset,Z_Param_ItemDA);
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_MeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMesh(Z_Param_ItemDA,Z_Param_Out_MeshComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemRenderImageActor::execSetMaterials)
	{
		P_GET_TARRAY(FMeshMaterials,Z_Param_Materials);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterials(Z_Param_Materials,Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemRenderImageActor::execRenderItem)
	{
		P_GET_OBJECT(UBaseStorageItemPDataAsset,Z_Param_ItemDA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RenderItem(Z_Param_ItemDA);
		P_NATIVE_END;
	}
	void AItemRenderImageActor::StaticRegisterNativesAItemRenderImageActor()
	{
		UClass* Class = AItemRenderImageActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RenderItem", &AItemRenderImageActor::execRenderItem },
			{ "SetMaterials", &AItemRenderImageActor::execSetMaterials },
			{ "SetMesh", &AItemRenderImageActor::execSetMesh },
			{ "Snap", &AItemRenderImageActor::execSnap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics
	{
		struct ItemRenderImageActor_eventRenderItem_Parms
		{
			UBaseStorageItemPDataAsset* ItemDA;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDA;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::NewProp_ItemDA = { "ItemDA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventRenderItem_Parms, ItemDA), Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventRenderItem_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::NewProp_ItemDA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemRenderImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemRenderImageActor, nullptr, "RenderItem", nullptr, nullptr, sizeof(ItemRenderImageActor_eventRenderItem_Parms), Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemRenderImageActor_RenderItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemRenderImageActor_RenderItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics
	{
		struct ItemRenderImageActor_eventSetMaterials_Parms
		{
			TArray<FMeshMaterials> Materials;
			UPrimitiveComponent* Mesh;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshMaterials, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventSetMaterials_Parms, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventSetMaterials_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemRenderImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemRenderImageActor, nullptr, "SetMaterials", nullptr, nullptr, sizeof(ItemRenderImageActor_eventSetMaterials_Parms), Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemRenderImageActor_SetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemRenderImageActor_SetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics
	{
		struct ItemRenderImageActor_eventSetMesh_Parms
		{
			UBaseStorageItemPDataAsset* ItemDA;
			UPrimitiveComponent* MeshComp;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::NewProp_ItemDA = { "ItemDA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventSetMesh_Parms, ItemDA), Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventSetMesh_Parms, MeshComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::NewProp_ItemDA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemRenderImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemRenderImageActor, nullptr, "SetMesh", nullptr, nullptr, sizeof(ItemRenderImageActor_eventSetMesh_Parms), Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemRenderImageActor_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemRenderImageActor_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics
	{
		struct ItemRenderImageActor_eventSnap_Parms
		{
			int32 Width;
			int32 Height;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventSnap_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventSnap_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemRenderImageActor_eventSnap_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemRenderImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemRenderImageActor, nullptr, "Snap", nullptr, nullptr, sizeof(ItemRenderImageActor_eventSnap_Parms), Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemRenderImageActor_Snap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemRenderImageActor_Snap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItemRenderImageActor_NoRegister()
	{
		return AItemRenderImageActor::StaticClass();
	}
	struct Z_Construct_UClass_AItemRenderImageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Light;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemRenderImageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemRenderImageActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemRenderImageActor_RenderItem, "RenderItem" }, // 2961362345
		{ &Z_Construct_UFunction_AItemRenderImageActor_SetMaterials, "SetMaterials" }, // 4132067354
		{ &Z_Construct_UFunction_AItemRenderImageActor_SetMesh, "SetMesh" }, // 1189504662
		{ &Z_Construct_UFunction_AItemRenderImageActor_Snap, "Snap" }, // 569237699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemRenderImageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemRenderImageActor.h" },
		{ "ModuleRelativePath", "Public/ItemRenderImageActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemRenderImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemRenderImageActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneCapture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemRender" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemRenderImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemRenderImageActor, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_Light_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ItemRender" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemRenderImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemRenderImageActor, Light), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_Light_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemRenderImageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_SceneCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemRenderImageActor_Statics::NewProp_Light,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemRenderImageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemRenderImageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemRenderImageActor_Statics::ClassParams = {
		&AItemRenderImageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemRenderImageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemRenderImageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemRenderImageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemRenderImageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemRenderImageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemRenderImageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemRenderImageActor, 1939984610);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AItemRenderImageActor>()
	{
		return AItemRenderImageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemRenderImageActor(Z_Construct_UClass_AItemRenderImageActor, &AItemRenderImageActor::StaticClass, TEXT("/Script/InventorySystem"), TEXT("AItemRenderImageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemRenderImageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
