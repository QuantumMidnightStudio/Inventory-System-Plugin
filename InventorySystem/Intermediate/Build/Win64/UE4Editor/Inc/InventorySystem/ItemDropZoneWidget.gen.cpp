// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Storage/ItemDropZoneWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDropZoneWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDropZoneWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDropZoneWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void UItemDropZoneWidget::StaticRegisterNativesUItemDropZoneWidget()
	{
	}
	UClass* Z_Construct_UClass_UItemDropZoneWidget_NoRegister()
	{
		return UItemDropZoneWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemDropZoneWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemDropZoneWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDropZoneWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Storage/ItemDropZoneWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemDropZoneWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemDropZoneWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDropZoneWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemDropZoneWidget_Statics::ClassParams = {
		&UItemDropZoneWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UItemDropZoneWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDropZoneWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemDropZoneWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemDropZoneWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemDropZoneWidget, 909526739);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemDropZoneWidget>()
	{
		return UItemDropZoneWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemDropZoneWidget(Z_Construct_UClass_UItemDropZoneWidget, &UItemDropZoneWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UItemDropZoneWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDropZoneWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
