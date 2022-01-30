// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Storage/Slot/BaseStorageSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStorageSlotWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageSlotWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageSlotWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorageWidget_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemLocation();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
// End Cross Module References
	void UBaseStorageSlotWidget::StaticRegisterNativesUBaseStorageSlotWidget()
	{
	}
	UClass* Z_Construct_UClass_UBaseStorageSlotWidget_NoRegister()
	{
		return UBaseStorageSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseStorageSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlotSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentStorageWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentStorageWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBSlotSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBSlotSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseStorageSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Storage/Slot/BaseStorageSlotWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/BaseStorageSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/BaseStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotSize = { "SlotSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageSlotWidget, SlotSize), METADATA_PARAMS(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_ParentStorageWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/BaseStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_ParentStorageWidget = { "ParentStorageWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageSlotWidget, ParentStorageWidget), Z_Construct_UClass_UStorageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_ParentStorageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_ParentStorageWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/BaseStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotLocation = { "SlotLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageSlotWidget, SlotLocation), Z_Construct_UScriptStruct_FItemLocation, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SBSlotSize_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/BaseStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SBSlotSize = { "SBSlotSize", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageSlotWidget, SBSlotSize), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SBSlotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SBSlotSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseStorageSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_ParentStorageWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SlotLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageSlotWidget_Statics::NewProp_SBSlotSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseStorageSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStorageSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseStorageSlotWidget_Statics::ClassParams = {
		&UBaseStorageSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseStorageSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseStorageSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseStorageSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseStorageSlotWidget, 2314406318);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UBaseStorageSlotWidget>()
	{
		return UBaseStorageSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseStorageSlotWidget(Z_Construct_UClass_UBaseStorageSlotWidget, &UBaseStorageSlotWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UBaseStorageSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStorageSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
