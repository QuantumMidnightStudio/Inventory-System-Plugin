// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/DaDStorage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDaDStorage() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UDaDStorage_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UDaDStorage();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemStorageSlotWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEmptyStorageSlotWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDaDStorage::execDropWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropWidget();
		P_NATIVE_END;
	}
	void UDaDStorage::StaticRegisterNativesUDaDStorage()
	{
		UClass* Class = UDaDStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropWidget", &UDaDStorage::execDropWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDaDStorage_DropWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDaDStorage_DropWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DaDStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDaDStorage_DropWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDaDStorage, nullptr, "DropWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDaDStorage_DropWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDaDStorage_DropWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDaDStorage_DropWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDaDStorage_DropWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDaDStorage_NoRegister()
	{
		return UDaDStorage::StaticClass();
	}
	struct Z_Construct_UClass_UDaDStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DaDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DaDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptySlotTheMouseHoveringOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptySlotTheMouseHoveringOver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDaDStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDaDStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDaDStorage_DropWidget, "DropWidget" }, // 3302952477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDaDStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DaDStorage.h" },
		{ "ModuleRelativePath", "Public/DaDStorage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDaDStorage_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DaDStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDaDStorage_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDaDStorage, Item), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDaDStorage_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDaDStorage_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDaDStorage_Statics::NewProp_ParentWidget_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DaDStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDaDStorage_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDaDStorage, ParentWidget), Z_Construct_UClass_UItemStorageSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDaDStorage_Statics::NewProp_ParentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDaDStorage_Statics::NewProp_ParentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDaDStorage_Statics::NewProp_DaDWidget_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DaDStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDaDStorage_Statics::NewProp_DaDWidget = { "DaDWidget", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDaDStorage, DaDWidget), Z_Construct_UClass_UItemStorageSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDaDStorage_Statics::NewProp_DaDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDaDStorage_Statics::NewProp_DaDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDaDStorage_Statics::NewProp_EmptySlotTheMouseHoveringOver_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DaDStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDaDStorage_Statics::NewProp_EmptySlotTheMouseHoveringOver = { "EmptySlotTheMouseHoveringOver", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDaDStorage, EmptySlotTheMouseHoveringOver), Z_Construct_UClass_UEmptyStorageSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDaDStorage_Statics::NewProp_EmptySlotTheMouseHoveringOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDaDStorage_Statics::NewProp_EmptySlotTheMouseHoveringOver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDaDStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDaDStorage_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDaDStorage_Statics::NewProp_ParentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDaDStorage_Statics::NewProp_DaDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDaDStorage_Statics::NewProp_EmptySlotTheMouseHoveringOver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDaDStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDaDStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDaDStorage_Statics::ClassParams = {
		&UDaDStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDaDStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDaDStorage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDaDStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDaDStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDaDStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDaDStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDaDStorage, 4249791280);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UDaDStorage>()
	{
		return UDaDStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDaDStorage(Z_Construct_UClass_UDaDStorage, &UDaDStorage::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UDaDStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDaDStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
