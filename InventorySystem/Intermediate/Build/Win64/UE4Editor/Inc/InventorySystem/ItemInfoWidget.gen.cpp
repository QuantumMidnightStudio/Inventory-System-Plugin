// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Storage/ItemInfoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInfoWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemInfoWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemInfoWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void UItemInfoWidget::StaticRegisterNativesUItemInfoWidget()
	{
	}
	UClass* Z_Construct_UClass_UItemInfoWidget_NoRegister()
	{
		return UItemInfoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemInfoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemInfoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInfoWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Storage/ItemInfoWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemInfoWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemInfoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemInfoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemInfoWidget_Statics::ClassParams = {
		&UItemInfoWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemInfoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemInfoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemInfoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemInfoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemInfoWidget, 2265758138);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemInfoWidget>()
	{
		return UItemInfoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemInfoWidget(Z_Construct_UClass_UItemInfoWidget, &UItemInfoWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UItemInfoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemInfoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
