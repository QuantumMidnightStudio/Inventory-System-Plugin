// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/PlayerMenu/PlayerStoragesMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStoragesMenuWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerStoragesMenuWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerStoragesMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerStorageWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAdditionalStorageUIsWidget_NoRegister();
// End Cross Module References
	void UPlayerStoragesMenuWidget::StaticRegisterNativesUPlayerStoragesMenuWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerStoragesMenuWidget_NoRegister()
	{
		return UPlayerStoragesMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStorages_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStorages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalStorageMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalStorageMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerMenu/PlayerStoragesMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenu/PlayerStoragesMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_PlayerStorages_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenu/PlayerStoragesMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_PlayerStorages = { "PlayerStorages", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStoragesMenuWidget, PlayerStorages), Z_Construct_UClass_UPlayerStorageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_PlayerStorages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_PlayerStorages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_AdditionalStorageMenu_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerMenu/PlayerStoragesMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_AdditionalStorageMenu = { "AdditionalStorageMenu", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStoragesMenuWidget, AdditionalStorageMenu), Z_Construct_UClass_UAdditionalStorageUIsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_AdditionalStorageMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_AdditionalStorageMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_PlayerStorages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::NewProp_AdditionalStorageMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStoragesMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::ClassParams = {
		&UPlayerStoragesMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStoragesMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerStoragesMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerStoragesMenuWidget, 515256138);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UPlayerStoragesMenuWidget>()
	{
		return UPlayerStoragesMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerStoragesMenuWidget(Z_Construct_UClass_UPlayerStoragesMenuWidget, &UPlayerStoragesMenuWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UPlayerStoragesMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStoragesMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
