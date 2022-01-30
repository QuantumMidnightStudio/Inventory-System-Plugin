// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/StorageInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageInterface() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorageInterface_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorageInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void UStorageInterface::StaticRegisterNativesUStorageInterface()
	{
	}
	UClass* Z_Construct_UClass_UStorageInterface_NoRegister()
	{
		return UStorageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStorageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StorageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStorageInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStorageInterface_Statics::ClassParams = {
		&UStorageInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStorageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorageInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStorageInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStorageInterface, 3546025443);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UStorageInterface>()
	{
		return UStorageInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStorageInterface(Z_Construct_UClass_UStorageInterface, &UStorageInterface::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UStorageInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorageInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
