// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Storage/WindowStorageWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowStorageWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UWindowStorageWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UWindowStorageWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorageWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventCloseWindow_Parms
		{
			UWindowStorageWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_InventorySystem_eventCloseWindow_Parms, Widget), Z_Construct_UClass_UWindowStorageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/WindowStorageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "CloseWindow__DelegateSignature", nullptr, nullptr, sizeof(_Script_InventorySystem_eventCloseWindow_Parms), Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWindowStorageWidget::execCloseWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseWindow();
		P_NATIVE_END;
	}
	void UWindowStorageWidget::StaticRegisterNativesUWindowStorageWidget()
	{
		UClass* Class = UWindowStorageWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseWindow", &UWindowStorageWidget::execCloseWindow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindowStorageWidget_CloseWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowStorageWidget_CloseWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/WindowStorageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowStorageWidget_CloseWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowStorageWidget, nullptr, "CloseWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowStorageWidget_CloseWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowStorageWidget_CloseWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowStorageWidget_CloseWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowStorageWidget_CloseWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindowStorageWidget_NoRegister()
	{
		return UWindowStorageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWindowStorageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCloseWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCloseWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TStorageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TStorageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseWindowButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseWindowButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowStorageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowStorageWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowStorageWidget_CloseWindow, "CloseWindow" }, // 3708509750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowStorageWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Storage/WindowStorageWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Storage/WindowStorageWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_OnCloseWindow_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/WindowStorageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_OnCloseWindow = { "OnCloseWindow", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowStorageWidget, OnCloseWindow), Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_OnCloseWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_OnCloseWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_WStorage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/WindowStorageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_WStorage = { "WStorage", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowStorageWidget, WStorage), Z_Construct_UClass_UStorageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_WStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_WStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_TStorageName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/WindowStorageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_TStorageName = { "TStorageName", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowStorageWidget, TStorageName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_TStorageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_TStorageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_CloseWindowButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/WindowStorageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_CloseWindowButton = { "CloseWindowButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowStorageWidget, CloseWindowButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_CloseWindowButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_CloseWindowButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowStorageWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_OnCloseWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_WStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_TStorageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowStorageWidget_Statics::NewProp_CloseWindowButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowStorageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowStorageWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowStorageWidget_Statics::ClassParams = {
		&UWindowStorageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWindowStorageWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWindowStorageWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowStorageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowStorageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowStorageWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowStorageWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowStorageWidget, 2927025146);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UWindowStorageWidget>()
	{
		return UWindowStorageWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowStorageWidget(Z_Construct_UClass_UWindowStorageWidget, &UWindowStorageWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UWindowStorageWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowStorageWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
