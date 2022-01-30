// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/StorageFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageFunctionLibrary() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorageFunctionLibrary_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorageFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void UStorageFunctionLibrary::StaticRegisterNativesUStorageFunctionLibrary()
	{
	}
	UClass* Z_Construct_UClass_UStorageFunctionLibrary_NoRegister()
	{
		return UStorageFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStorageFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorageFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StorageFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/StorageFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorageFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStorageFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStorageFunctionLibrary_Statics::ClassParams = {
		&UStorageFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStorageFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorageFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStorageFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStorageFunctionLibrary, 1505456496);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UStorageFunctionLibrary>()
	{
		return UStorageFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStorageFunctionLibrary(Z_Construct_UClass_UStorageFunctionLibrary, &UStorageFunctionLibrary::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UStorageFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorageFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
