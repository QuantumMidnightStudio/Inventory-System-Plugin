// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Items/WorldItemActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldItemActor() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AWorldItemActor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AWorldItemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDroppedItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWorldItemActor::execSetMaterials)
	{
		P_GET_TARRAY(FMeshMaterials,Z_Param_Materials);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterials(Z_Param_Materials,Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldItemActor::execSetMesh)
	{
		P_GET_OBJECT(UBaseStorageItemPDataAsset,Z_Param_ItemDA);
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_MeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMesh(Z_Param_ItemDA,Z_Param_Out_MeshComp);
		P_NATIVE_END;
	}
	void AWorldItemActor::StaticRegisterNativesAWorldItemActor()
	{
		UClass* Class = AWorldItemActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaterials", &AWorldItemActor::execSetMaterials },
			{ "SetMesh", &AWorldItemActor::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics
	{
		struct WorldItemActor_eventSetMaterials_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshMaterials, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldItemActor_eventSetMaterials_Parms, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldItemActor_eventSetMaterials_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/WorldItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldItemActor, nullptr, "SetMaterials", nullptr, nullptr, sizeof(WorldItemActor_eventSetMaterials_Parms), Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldItemActor_SetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldItemActor_SetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics
	{
		struct WorldItemActor_eventSetMesh_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::NewProp_ItemDA = { "ItemDA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldItemActor_eventSetMesh_Parms, ItemDA), Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WorldItemActor_eventSetMesh_Parms, MeshComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::NewProp_ItemDA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/WorldItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldItemActor, nullptr, "SetMesh", nullptr, nullptr, sizeof(WorldItemActor_eventSetMesh_Parms), Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldItemActor_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldItemActor_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorldItemActor_NoRegister()
	{
		return AWorldItemActor::StaticClass();
	}
	struct Z_Construct_UClass_AWorldItemActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorageItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StorageItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorldItemActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldItemActor_SetMaterials, "SetMaterials" }, // 221553641
		{ &Z_Construct_UFunction_AWorldItemActor_SetMesh, "SetMesh" }, // 2348071055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldItemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/WorldItemActor.h" },
		{ "ModuleRelativePath", "Public/Items/WorldItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldItemActor_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WorldItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldItemActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldItemActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldItemActor_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldItemActor_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldItemActor_Statics::NewProp_ItemSettings_MetaData[] = {
		{ "Category", "Item" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Items/WorldItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldItemActor_Statics::NewProp_ItemSettings = { "ItemSettings", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldItemActor, ItemSettings), Z_Construct_UScriptStruct_FDroppedItem, METADATA_PARAMS(Z_Construct_UClass_AWorldItemActor_Statics::NewProp_ItemSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldItemActor_Statics::NewProp_ItemSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldItemActor_Statics::NewProp_StorageItems_Inner = { "StorageItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldItemActor_Statics::NewProp_StorageItems_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/WorldItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldItemActor_Statics::NewProp_StorageItems = { "StorageItems", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldItemActor, StorageItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldItemActor_Statics::NewProp_StorageItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldItemActor_Statics::NewProp_StorageItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldItemActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WorldItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldItemActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldItemActor, MeshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldItemActor_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldItemActor_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldItemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldItemActor_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldItemActor_Statics::NewProp_ItemSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldItemActor_Statics::NewProp_StorageItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldItemActor_Statics::NewProp_StorageItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldItemActor_Statics::NewProp_MeshComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWorldItemActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AWorldItemActor, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldItemActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldItemActor_Statics::ClassParams = {
		&AWorldItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorldItemActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldItemActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldItemActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldItemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldItemActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldItemActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldItemActor, 1042448254);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AWorldItemActor>()
	{
		return AWorldItemActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldItemActor(Z_Construct_UClass_AWorldItemActor, &AWorldItemActor::StaticClass, TEXT("/Script/InventorySystem"), TEXT("AWorldItemActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldItemActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
