// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Chest/ChestStorageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChestStorageComponent() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UChestStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UChestStorageComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageComponent();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorage_StorageItemObject_NoRegister();
// End Cross Module References
	void UChestStorageComponent::StaticRegisterNativesUChestStorageComponent()
	{
	}
	UClass* Z_Construct_UClass_UChestStorageComponent_NoRegister()
	{
		return UChestStorageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChestStorageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestItemDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChestItemDataAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageItemObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorageItemObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChestStorageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStorageComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestStorageComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chest/ChestStorageComponent.h" },
		{ "ModuleRelativePath", "Public/Chest/ChestStorageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_ChestItemDataAsset_MetaData[] = {
		{ "Category", "ChestStorageComponent" },
		{ "ModuleRelativePath", "Public/Chest/ChestStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_ChestItemDataAsset = { "ChestItemDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChestStorageComponent, ChestItemDataAsset), Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_ChestItemDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_ChestItemDataAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_StorageItemObject_MetaData[] = {
		{ "Category", "ChestStorageComponent" },
		{ "ModuleRelativePath", "Public/Chest/ChestStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_StorageItemObject = { "StorageItemObject", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChestStorageComponent, StorageItemObject), Z_Construct_UClass_UStorage_StorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_StorageItemObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_StorageItemObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChestStorageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_ChestItemDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestStorageComponent_Statics::NewProp_StorageItemObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChestStorageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChestStorageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChestStorageComponent_Statics::ClassParams = {
		&UChestStorageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChestStorageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChestStorageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChestStorageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChestStorageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChestStorageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChestStorageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChestStorageComponent, 2628735827);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UChestStorageComponent>()
	{
		return UChestStorageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChestStorageComponent(Z_Construct_UClass_UChestStorageComponent, &UChestStorageComponent::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UChestStorageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChestStorageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
