// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Library/StorageStructLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageStructLibrary() {}
// Cross Module References
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNeededItem();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStorageItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemLocation();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorage_StorageItemObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDroppedItem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FNeededItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNeededItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeededItem, Z_Construct_UPackage__Script_InventorySystem(), TEXT("NeededItem"), sizeof(FNeededItem), Get_Z_Construct_UScriptStruct_FNeededItem_Hash());
	}
	return Singleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FNeededItem>()
{
	return FNeededItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNeededItem(FNeededItem::StaticStruct, TEXT("/Script/InventorySystem"), TEXT("NeededItem"), false, nullptr, nullptr);
static struct FScriptStruct_InventorySystem_StaticRegisterNativesFNeededItem
{
	FScriptStruct_InventorySystem_StaticRegisterNativesFNeededItem()
	{
		UScriptStruct::DeferCppStructOps<FNeededItem>(FName(TEXT("NeededItem")));
	}
} ScriptStruct_InventorySystem_StaticRegisterNativesFNeededItem;
	struct Z_Construct_UScriptStruct_FNeededItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDataAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeededItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeededItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeededItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_ItemDataAsset_MetaData[] = {
		{ "Category", "NeededItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_ItemDataAsset = { "ItemDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNeededItem, ItemDataAsset), Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_ItemDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_ItemDataAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "NeededItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNeededItem, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeededItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_ItemDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeededItem_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeededItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"NeededItem",
		sizeof(FNeededItem),
		alignof(FNeededItem),
		Z_Construct_UScriptStruct_FNeededItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeededItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeededItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeededItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeededItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNeededItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NeededItem"), sizeof(FNeededItem), Get_Z_Construct_UScriptStruct_FNeededItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNeededItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNeededItem_Hash() { return 87368497U; }
class UScriptStruct* FStorageItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FStorageItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStorageItem, Z_Construct_UPackage__Script_InventorySystem(), TEXT("StorageItem"), sizeof(FStorageItem), Get_Z_Construct_UScriptStruct_FStorageItem_Hash());
	}
	return Singleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FStorageItem>()
{
	return FStorageItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStorageItem(FStorageItem::StaticStruct, TEXT("/Script/InventorySystem"), TEXT("StorageItem"), false, nullptr, nullptr);
static struct FScriptStruct_InventorySystem_StaticRegisterNativesFStorageItem
{
	FScriptStruct_InventorySystem_StaticRegisterNativesFStorageItem()
	{
		UScriptStruct::DeferCppStructOps<FStorageItem>(FName(TEXT("StorageItem")));
	}
} ScriptStruct_InventorySystem_StaticRegisterNativesFStorageItem;
	struct Z_Construct_UScriptStruct_FStorageItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDataAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotate_MetaData[];
#endif
		static void NewProp_Rotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorageItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStorageItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStorageItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ItemDataAsset_MetaData[] = {
		{ "Category", "StorageItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ItemDataAsset = { "ItemDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStorageItem, ItemDataAsset), Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ItemDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ItemDataAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "StorageItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStorageItem, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "StorageItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStorageItem, Location), Z_Construct_UScriptStruct_FItemLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Rotate_MetaData[] = {
		{ "Category", "StorageItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Rotate_SetBit(void* Obj)
	{
		((FStorageItem*)Obj)->Rotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStorageItem), &Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Rotate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Rotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Rotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ParentStorage_MetaData[] = {
		{ "Category", "StorageItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ParentStorage = { "ParentStorage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStorageItem, ParentStorage), Z_Construct_UClass_UStorage_StorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ParentStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ParentStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_RenderImage_MetaData[] = {
		{ "Category", "StorageItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_RenderImage = { "RenderImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStorageItem, RenderImage), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_RenderImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_RenderImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStorageItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ItemDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_Rotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_ParentStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorageItem_Statics::NewProp_RenderImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStorageItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"StorageItem",
		sizeof(FStorageItem),
		alignof(FStorageItem),
		Z_Construct_UScriptStruct_FStorageItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorageItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStorageItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStorageItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStorageItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStorageItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StorageItem"), sizeof(FStorageItem), Get_Z_Construct_UScriptStruct_FStorageItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStorageItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStorageItem_Hash() { return 1562847188U; }
class UScriptStruct* FItemLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FItemLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemLocation, Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemLocation"), sizeof(FItemLocation), Get_Z_Construct_UScriptStruct_FItemLocation_Hash());
	}
	return Singleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FItemLocation>()
{
	return FItemLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemLocation(FItemLocation::StaticStruct, TEXT("/Script/InventorySystem"), TEXT("ItemLocation"), false, nullptr, nullptr);
static struct FScriptStruct_InventorySystem_StaticRegisterNativesFItemLocation
{
	FScriptStruct_InventorySystem_StaticRegisterNativesFItemLocation()
	{
		UScriptStruct::DeferCppStructOps<FItemLocation>(FName(TEXT("ItemLocation")));
	}
} ScriptStruct_InventorySystem_StaticRegisterNativesFItemLocation;
	struct Z_Construct_UScriptStruct_FItemLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_RowX_MetaData[] = {
		{ "Category", "ItemLocation" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_RowX = { "RowX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemLocation, RowX), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_RowX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_RowX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_ColumnY_MetaData[] = {
		{ "Category", "ItemLocation" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_ColumnY = { "ColumnY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemLocation, ColumnY), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_ColumnY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_ColumnY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_RowX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemLocation_Statics::NewProp_ColumnY,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"ItemLocation",
		sizeof(FItemLocation),
		alignof(FItemLocation),
		Z_Construct_UScriptStruct_FItemLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemLocation"), sizeof(FItemLocation), Get_Z_Construct_UScriptStruct_FItemLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemLocation_Hash() { return 1365104677U; }
class UScriptStruct* FDroppedItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDroppedItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDroppedItem, Z_Construct_UPackage__Script_InventorySystem(), TEXT("DroppedItem"), sizeof(FDroppedItem), Get_Z_Construct_UScriptStruct_FDroppedItem_Hash());
	}
	return Singleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FDroppedItem>()
{
	return FDroppedItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDroppedItem(FDroppedItem::StaticStruct, TEXT("/Script/InventorySystem"), TEXT("DroppedItem"), false, nullptr, nullptr);
static struct FScriptStruct_InventorySystem_StaticRegisterNativesFDroppedItem
{
	FScriptStruct_InventorySystem_StaticRegisterNativesFDroppedItem()
	{
		UScriptStruct::DeferCppStructOps<FDroppedItem>(FName(TEXT("DroppedItem")));
	}
} ScriptStruct_InventorySystem_StaticRegisterNativesFDroppedItem;
	struct Z_Construct_UScriptStruct_FDroppedItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroppedItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDroppedItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDroppedItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "DroppedItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDroppedItem, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_ItemDataAsset_MetaData[] = {
		{ "Category", "DroppedItem" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_ItemDataAsset = { "ItemDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDroppedItem, ItemDataAsset), Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_ItemDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_ItemDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDroppedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroppedItem_Statics::NewProp_ItemDataAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDroppedItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"DroppedItem",
		sizeof(FDroppedItem),
		alignof(FDroppedItem),
		Z_Construct_UScriptStruct_FDroppedItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroppedItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDroppedItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroppedItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDroppedItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDroppedItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DroppedItem"), sizeof(FDroppedItem), Get_Z_Construct_UScriptStruct_FDroppedItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDroppedItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDroppedItem_Hash() { return 2837512892U; }
class UScriptStruct* FMeshMaterials::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FMeshMaterials_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshMaterials, Z_Construct_UPackage__Script_InventorySystem(), TEXT("MeshMaterials"), sizeof(FMeshMaterials), Get_Z_Construct_UScriptStruct_FMeshMaterials_Hash());
	}
	return Singleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FMeshMaterials>()
{
	return FMeshMaterials::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshMaterials(FMeshMaterials::StaticStruct, TEXT("/Script/InventorySystem"), TEXT("MeshMaterials"), false, nullptr, nullptr);
static struct FScriptStruct_InventorySystem_StaticRegisterNativesFMeshMaterials
{
	FScriptStruct_InventorySystem_StaticRegisterNativesFMeshMaterials()
	{
		UScriptStruct::DeferCppStructOps<FMeshMaterials>(FName(TEXT("MeshMaterials")));
	}
} ScriptStruct_InventorySystem_StaticRegisterNativesFMeshMaterials;
	struct Z_Construct_UScriptStruct_FMeshMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Elements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMaterials_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshMaterials>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "MeshMaterials" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMaterials, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Elements_MetaData[] = {
		{ "Category", "MeshMaterials" },
		{ "ModuleRelativePath", "Public/Library/StorageStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMaterials, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Elements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Elements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Elements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMaterials_Statics::NewProp_Elements,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshMaterials_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"MeshMaterials",
		sizeof(FMeshMaterials),
		alignof(FMeshMaterials),
		Z_Construct_UScriptStruct_FMeshMaterials_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMaterials_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMaterials_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMaterials_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshMaterials()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshMaterials_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshMaterials"), sizeof(FMeshMaterials), Get_Z_Construct_UScriptStruct_FMeshMaterials_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshMaterials_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshMaterials_Hash() { return 3002594976U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
