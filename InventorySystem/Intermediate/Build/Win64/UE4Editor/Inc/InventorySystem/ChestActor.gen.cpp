// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Chest/ChestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChestActor() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AChestActor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AChestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UChestStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	void AChestActor::StaticRegisterNativesAChestActor()
	{
	}
	UClass* Z_Construct_UClass_AChestActor_NoRegister()
	{
		return AChestActor::StaticClass();
	}
	struct Z_Construct_UClass_AChestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chest/ChestActor.h" },
		{ "ModuleRelativePath", "Public/Chest/ChestActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChestActor_Statics::NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chest/ChestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChestActor_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChestActor, Inventory), Z_Construct_UClass_UChestStorageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChestActor_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChestActor_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChestActor_Statics::NewProp_Inventory,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AChestActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AChestActor, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChestActor_Statics::ClassParams = {
		&AChestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChestActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChestActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChestActor, 2942974300);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AChestActor>()
	{
		return AChestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChestActor(Z_Construct_UClass_AChestActor, &AChestActor::StaticClass, TEXT("/Script/InventorySystem"), TEXT("AChestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
