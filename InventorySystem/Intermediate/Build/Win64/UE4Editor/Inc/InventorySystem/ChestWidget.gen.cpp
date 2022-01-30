// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Chest/ChestWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChestWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UChestWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UChestWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AChestActor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorageWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerStorageWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAdditionalStorageUIsWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UChestWidget::execUpdateChestWidget)
	{
		P_GET_OBJECT(AChestActor,Z_Param_Chest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateChestWidget(Z_Param_Chest);
		P_NATIVE_END;
	}
	void UChestWidget::StaticRegisterNativesUChestWidget()
	{
		UClass* Class = UChestWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateChestWidget", &UChestWidget::execUpdateChestWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics
	{
		struct ChestWidget_eventUpdateChestWidget_Parms
		{
			AChestActor* Chest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::NewProp_Chest = { "Chest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChestWidget_eventUpdateChestWidget_Parms, Chest), Z_Construct_UClass_AChestActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::NewProp_Chest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Chest/ChestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChestWidget, nullptr, "UpdateChestWidget", nullptr, nullptr, sizeof(ChestWidget_eventUpdateChestWidget_Parms), Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChestWidget_UpdateChestWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChestWidget_UpdateChestWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChestWidget_NoRegister()
	{
		return UChestWidget::StaticClass();
	}
	struct Z_Construct_UClass_UChestWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestStorageWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChestStorageWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStorageWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStorageWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalStorageMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalStorageMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChestWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChestWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChestWidget_UpdateChestWidget, "UpdateChestWidget" }, // 126148479
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Chest/ChestWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Chest/ChestWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestWidget_Statics::NewProp_ChestStorageWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Chest/ChestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestWidget_Statics::NewProp_ChestStorageWidget = { "ChestStorageWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChestWidget, ChestStorageWidget), Z_Construct_UClass_UStorageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChestWidget_Statics::NewProp_ChestStorageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestWidget_Statics::NewProp_ChestStorageWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestWidget_Statics::NewProp_PlayerStorageWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Chest/ChestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestWidget_Statics::NewProp_PlayerStorageWidget = { "PlayerStorageWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChestWidget, PlayerStorageWidget), Z_Construct_UClass_UPlayerStorageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChestWidget_Statics::NewProp_PlayerStorageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestWidget_Statics::NewProp_PlayerStorageWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChestWidget_Statics::NewProp_AdditionalStorageMenu_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Chest/ChestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChestWidget_Statics::NewProp_AdditionalStorageMenu = { "AdditionalStorageMenu", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChestWidget, AdditionalStorageMenu), Z_Construct_UClass_UAdditionalStorageUIsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChestWidget_Statics::NewProp_AdditionalStorageMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChestWidget_Statics::NewProp_AdditionalStorageMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChestWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestWidget_Statics::NewProp_ChestStorageWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestWidget_Statics::NewProp_PlayerStorageWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChestWidget_Statics::NewProp_AdditionalStorageMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChestWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChestWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChestWidget_Statics::ClassParams = {
		&UChestWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChestWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChestWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChestWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChestWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChestWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChestWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChestWidget, 2531726545);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UChestWidget>()
	{
		return UChestWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChestWidget(Z_Construct_UClass_UChestWidget, &UChestWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UChestWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChestWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
