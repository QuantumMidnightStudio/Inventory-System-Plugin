// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Storage/ItemSplitMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSplitMenuWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSplitMenuWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSplitMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemLocation();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorage_StorageItemObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UItemSplitMenuWidget::execUpdateSliderValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSliderValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemSplitMenuWidget::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemSplitMenuWidget::execAccept)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Accept();
		P_NATIVE_END;
	}
	void UItemSplitMenuWidget::StaticRegisterNativesUItemSplitMenuWidget()
	{
		UClass* Class = UItemSplitMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Accept", &UItemSplitMenuWidget::execAccept },
			{ "Cancel", &UItemSplitMenuWidget::execCancel },
			{ "UpdateSliderValue", &UItemSplitMenuWidget::execUpdateSliderValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemSplitMenuWidget_Accept_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemSplitMenuWidget_Accept_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSplitMenuWidget_Accept_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSplitMenuWidget, nullptr, "Accept", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemSplitMenuWidget_Accept_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSplitMenuWidget_Accept_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemSplitMenuWidget_Accept()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemSplitMenuWidget_Accept_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemSplitMenuWidget_Cancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemSplitMenuWidget_Cancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSplitMenuWidget_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSplitMenuWidget, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemSplitMenuWidget_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSplitMenuWidget_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemSplitMenuWidget_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemSplitMenuWidget_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics
	{
		struct ItemSplitMenuWidget_eventUpdateSliderValue_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemSplitMenuWidget_eventUpdateSliderValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSplitMenuWidget, nullptr, "UpdateSliderValue", nullptr, nullptr, sizeof(ItemSplitMenuWidget_eventUpdateSliderValue_Parms), Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemSplitMenuWidget_NoRegister()
	{
		return UItemSplitMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemSplitMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SItemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TCurrentCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TCurrentCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BAccept_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BAccept;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BCancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BCancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplitItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondItemLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondItemLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondItemStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondItemStorage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemSplitMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemSplitMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemSplitMenuWidget_Accept, "Accept" }, // 1894973016
		{ &Z_Construct_UFunction_UItemSplitMenuWidget_Cancel, "Cancel" }, // 4269108438
		{ &Z_Construct_UFunction_UItemSplitMenuWidget_UpdateSliderValue, "UpdateSliderValue" }, // 1331689418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Storage/ItemSplitMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SItemCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SItemCount = { "SItemCount", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemSplitMenuWidget, SItemCount), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SItemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TCurrentCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TCurrentCount = { "TCurrentCount", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemSplitMenuWidget, TCurrentCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TCurrentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TCurrentCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TMaxCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TMaxCount = { "TMaxCount", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemSplitMenuWidget, TMaxCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BAccept_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BAccept = { "BAccept", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemSplitMenuWidget, BAccept), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BAccept_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BAccept_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BCancel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BCancel = { "BCancel", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemSplitMenuWidget, BCancel), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BCancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SplitItem_MetaData[] = {
		{ "Category", "SplitItem" },
		{ "Comment", "//=================================================================================================================\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SplitItem = { "SplitItem", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemSplitMenuWidget, SplitItem), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SplitItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SplitItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemLocation_MetaData[] = {
		{ "Category", "SplitItem" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemLocation = { "SecondItemLocation", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemSplitMenuWidget, SecondItemLocation), Z_Construct_UScriptStruct_FItemLocation, METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemStorage_MetaData[] = {
		{ "Category", "SplitItem" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/ItemSplitMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemStorage = { "SecondItemStorage", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemSplitMenuWidget, SecondItemStorage), Z_Construct_UClass_UStorage_StorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemStorage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemSplitMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TCurrentCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_TMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BAccept,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_BCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SplitItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSplitMenuWidget_Statics::NewProp_SecondItemStorage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemSplitMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemSplitMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemSplitMenuWidget_Statics::ClassParams = {
		&UItemSplitMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemSplitMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemSplitMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemSplitMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemSplitMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemSplitMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemSplitMenuWidget, 4022493894);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemSplitMenuWidget>()
	{
		return UItemSplitMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemSplitMenuWidget(Z_Construct_UClass_UItemSplitMenuWidget, &UItemSplitMenuWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UItemSplitMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemSplitMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
