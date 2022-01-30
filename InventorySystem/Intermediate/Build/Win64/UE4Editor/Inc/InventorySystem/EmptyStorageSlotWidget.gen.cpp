// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Storage/Slot/EmptyStorageSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyStorageSlotWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEmptyStorageSlotWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEmptyStorageSlotWidget();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageSlotWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEmptyStorageSlotWidget::execDeselectSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmptyStorageSlotWidget::execSelectSlot)
	{
		P_GET_UBOOL(Z_Param_WrongLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSlot(Z_Param_WrongLocation);
		P_NATIVE_END;
	}
	void UEmptyStorageSlotWidget::StaticRegisterNativesUEmptyStorageSlotWidget()
	{
		UClass* Class = UEmptyStorageSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeselectSlot", &UEmptyStorageSlotWidget::execDeselectSlot },
			{ "SelectSlot", &UEmptyStorageSlotWidget::execSelectSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEmptyStorageSlotWidget_DeselectSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmptyStorageSlotWidget_DeselectSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/EmptyStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmptyStorageSlotWidget_DeselectSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmptyStorageSlotWidget, nullptr, "DeselectSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmptyStorageSlotWidget_DeselectSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmptyStorageSlotWidget_DeselectSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmptyStorageSlotWidget_DeselectSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmptyStorageSlotWidget_DeselectSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics
	{
		struct EmptyStorageSlotWidget_eventSelectSlot_Parms
		{
			bool WrongLocation;
		};
		static void NewProp_WrongLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WrongLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::NewProp_WrongLocation_SetBit(void* Obj)
	{
		((EmptyStorageSlotWidget_eventSelectSlot_Parms*)Obj)->WrongLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::NewProp_WrongLocation = { "WrongLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EmptyStorageSlotWidget_eventSelectSlot_Parms), &Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::NewProp_WrongLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::NewProp_WrongLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/EmptyStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmptyStorageSlotWidget, nullptr, "SelectSlot", nullptr, nullptr, sizeof(EmptyStorageSlotWidget_eventSelectSlot_Parms), Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEmptyStorageSlotWidget_NoRegister()
	{
		return UEmptyStorageSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEmptyStorageSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSelectedSlotBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BSelectedSlotBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TPosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TPosY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStorageSlotWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEmptyStorageSlotWidget_DeselectSlot, "DeselectSlot" }, // 211744906
		{ &Z_Construct_UFunction_UEmptyStorageSlotWidget_SelectSlot, "SelectSlot" }, // 374320970
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Storage/Slot/EmptyStorageSlotWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/EmptyStorageSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_BSelectedSlotBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/EmptyStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_BSelectedSlotBorder = { "BSelectedSlotBorder", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmptyStorageSlotWidget, BSelectedSlotBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_BSelectedSlotBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_BSelectedSlotBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosX_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/EmptyStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosX = { "TPosX", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmptyStorageSlotWidget, TPosX), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosY_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/EmptyStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosY = { "TPosY", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmptyStorageSlotWidget, TPosY), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_BSelectedSlotBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::NewProp_TPosY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmptyStorageSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::ClassParams = {
		&UEmptyStorageSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmptyStorageSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmptyStorageSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmptyStorageSlotWidget, 2416060913);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UEmptyStorageSlotWidget>()
	{
		return UEmptyStorageSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmptyStorageSlotWidget(Z_Construct_UClass_UEmptyStorageSlotWidget, &UEmptyStorageSlotWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UEmptyStorageSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmptyStorageSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
