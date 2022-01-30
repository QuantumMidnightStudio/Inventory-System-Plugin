// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Items/EquipmentStorageItemPDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentStorageItemPDataAsset() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipmentStorageItemPDataAsset_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipmentStorageItemPDataAsset();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EEquipPart();
// End Cross Module References
	void UEquipmentStorageItemPDataAsset::StaticRegisterNativesUEquipmentStorageItemPDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UEquipmentStorageItemPDataAsset_NoRegister()
	{
		return UEquipmentStorageItemPDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipPart_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquipPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnEquipItem_MetaData[];
#endif
		static void NewProp_SpawnEquipItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpawnEquipItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetPlayerSkeletalMesh_MetaData[];
#endif
		static void NewProp_SetPlayerSkeletalMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetPlayerSkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStorageItemPDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/EquipmentStorageItemPDataAsset.h" },
		{ "ModuleRelativePath", "Public/Items/EquipmentStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_EquipPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_EquipPart_MetaData[] = {
		{ "Category", "EquipmentSettings" },
		{ "ModuleRelativePath", "Public/Items/EquipmentStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_EquipPart = { "EquipPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentStorageItemPDataAsset, EquipPart), Z_Construct_UEnum_InventorySystem_EEquipPart, METADATA_PARAMS(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_EquipPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_EquipPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SpawnEquipItem_MetaData[] = {
		{ "Category", "EquipmentSettings" },
		{ "ModuleRelativePath", "Public/Items/EquipmentStorageItemPDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SpawnEquipItem_SetBit(void* Obj)
	{
		((UEquipmentStorageItemPDataAsset*)Obj)->SpawnEquipItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SpawnEquipItem = { "SpawnEquipItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEquipmentStorageItemPDataAsset), &Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SpawnEquipItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SpawnEquipItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SpawnEquipItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "EquipmentSettings" },
		{ "ModuleRelativePath", "Public/Items/EquipmentStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentStorageItemPDataAsset, Socket), METADATA_PARAMS(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_Socket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SetPlayerSkeletalMesh_MetaData[] = {
		{ "Category", "EquipmentSettings" },
		{ "ModuleRelativePath", "Public/Items/EquipmentStorageItemPDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SetPlayerSkeletalMesh_SetBit(void* Obj)
	{
		((UEquipmentStorageItemPDataAsset*)Obj)->SetPlayerSkeletalMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SetPlayerSkeletalMesh = { "SetPlayerSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEquipmentStorageItemPDataAsset), &Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SetPlayerSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SetPlayerSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SetPlayerSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_EquipPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_EquipPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SpawnEquipItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_Socket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::NewProp_SetPlayerSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentStorageItemPDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::ClassParams = {
		&UEquipmentStorageItemPDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentStorageItemPDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentStorageItemPDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentStorageItemPDataAsset, 3883176233);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UEquipmentStorageItemPDataAsset>()
	{
		return UEquipmentStorageItemPDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentStorageItemPDataAsset(Z_Construct_UClass_UEquipmentStorageItemPDataAsset, &UEquipmentStorageItemPDataAsset::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UEquipmentStorageItemPDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentStorageItemPDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
