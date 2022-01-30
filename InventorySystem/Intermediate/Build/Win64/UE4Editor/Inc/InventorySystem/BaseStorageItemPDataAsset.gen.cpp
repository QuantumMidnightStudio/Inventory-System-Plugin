// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Items/BaseStorageItemPDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStorageItemPDataAsset() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemRarity();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMaterials();
// End Cross Module References
	void UBaseStorageItemPDataAsset::StaticRegisterNativesUBaseStorageItemPDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister()
	{
		return UBaseStorageItemPDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDefaultPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemDefaultPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeStack_MetaData[];
#endif
		static void NewProp_CanBeStack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumItemsInStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumItemsInStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderItemImage_MetaData[];
#endif
		static void NewProp_RenderItemImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderItemImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomMeshMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMeshMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomMeshMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsStorage_MetaData[];
#endif
		static void NewProp_IsStorage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StorageSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StorageSizeY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Items/BaseStorageItemPDataAsset.h" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "StandartSettings" },
		{ "Comment", "//Default\n" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
		{ "ToolTip", "Default" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, ItemName), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "StandartSettings" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, ItemType), Z_Construct_UEnum_InventorySystem_EItemType, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "StandartSettings" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, Description), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "StandartSettings" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, Rarity), Z_Construct_UEnum_InventorySystem_EItemRarity, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemDefaultPrice_MetaData[] = {
		{ "Category", "StandartSettings" },
		{ "ClampMax", "999999" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemDefaultPrice = { "ItemDefaultPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, ItemDefaultPrice), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemDefaultPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemDefaultPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeX_MetaData[] = {
		{ "Category", "StandartSettings" },
		{ "ClampMax", "20" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeX = { "ItemSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, ItemSizeX), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeY_MetaData[] = {
		{ "Category", "StandartSettings" },
		{ "ClampMax", "20" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeY = { "ItemSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, ItemSizeY), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CanBeStack_MetaData[] = {
		{ "Category", "StandartSettings|StackInfo" },
		{ "Comment", "//StackInfo\n" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
		{ "ToolTip", "StackInfo" },
	};
#endif
	void Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CanBeStack_SetBit(void* Obj)
	{
		((UBaseStorageItemPDataAsset*)Obj)->CanBeStack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CanBeStack = { "CanBeStack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseStorageItemPDataAsset), &Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CanBeStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CanBeStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CanBeStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_MaximumItemsInStack_MetaData[] = {
		{ "Category", "StandartSettings|StackInfo" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "EditCondition", "CanBeStack" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_MaximumItemsInStack = { "MaximumItemsInStack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, MaximumItemsInStack), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_MaximumItemsInStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_MaximumItemsInStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_RenderItemImage_MetaData[] = {
		{ "Category", "StandartSettings|ImageSettings" },
		{ "Comment", "//ImageSettings\n" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
		{ "ToolTip", "ImageSettings" },
	};
#endif
	void Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_RenderItemImage_SetBit(void* Obj)
	{
		((UBaseStorageItemPDataAsset*)Obj)->RenderItemImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_RenderItemImage = { "RenderItemImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseStorageItemPDataAsset), &Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_RenderItemImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_RenderItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_RenderItemImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemImage_MetaData[] = {
		{ "Category", "StandartSettings|ImageSettings" },
		{ "EditCondition", "!RenderItemImage" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, ItemImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "StandartSettings|MeshSettings" },
		{ "Comment", "//MeshSettings\n" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
		{ "ToolTip", "MeshSettings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "StandartSettings|MeshSettings" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CustomMeshMaterials_Inner = { "CustomMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshMaterials, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CustomMeshMaterials_MetaData[] = {
		{ "Category", "StandartSettings|MeshSettings" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CustomMeshMaterials = { "CustomMeshMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, CustomMeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CustomMeshMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CustomMeshMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_IsStorage_MetaData[] = {
		{ "Category", "StandartSettings|StorageSettings" },
		{ "Comment", "//StorageSettings\n" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
		{ "ToolTip", "StorageSettings" },
	};
#endif
	void Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_IsStorage_SetBit(void* Obj)
	{
		((UBaseStorageItemPDataAsset*)Obj)->IsStorage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_IsStorage = { "IsStorage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseStorageItemPDataAsset), &Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_IsStorage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_IsStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_IsStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeX_MetaData[] = {
		{ "Category", "StandartSettings|StorageSettings" },
		{ "EditCondition", "IsStorage" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeX = { "StorageSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, StorageSizeX), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeY_MetaData[] = {
		{ "Category", "StandartSettings|StorageSettings" },
		{ "EditCondition", "IsStorage" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeY = { "StorageSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemPDataAsset, StorageSizeY), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemDefaultPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CanBeStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_MaximumItemsInStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_RenderItemImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_ItemImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CustomMeshMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_CustomMeshMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_IsStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::NewProp_StorageSizeY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStorageItemPDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::ClassParams = {
		&UBaseStorageItemPDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseStorageItemPDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseStorageItemPDataAsset, 922476991);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UBaseStorageItemPDataAsset>()
	{
		return UBaseStorageItemPDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseStorageItemPDataAsset(Z_Construct_UClass_UBaseStorageItemPDataAsset, &UBaseStorageItemPDataAsset::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UBaseStorageItemPDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStorageItemPDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
