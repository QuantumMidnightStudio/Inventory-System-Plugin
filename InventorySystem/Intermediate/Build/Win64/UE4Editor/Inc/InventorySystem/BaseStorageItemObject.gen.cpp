// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Items/BaseStorageItemObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStorageItemObject() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemLocation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStorageItem();
// End Cross Module References
	DEFINE_FUNCTION(UBaseStorageItemObject::execRemoveCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCount(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseStorageItemObject::execAddCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCount(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseStorageItemObject::execGetItemLocation)
	{
		P_GET_STRUCT_REF(FItemLocation,Z_Param_Out_StartItemLocation);
		P_GET_STRUCT_REF(FItemLocation,Z_Param_Out_EndItemLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemLocation(Z_Param_Out_StartItemLocation,Z_Param_Out_EndItemLocation);
		P_NATIVE_END;
	}
	void UBaseStorageItemObject::StaticRegisterNativesUBaseStorageItemObject()
	{
		UClass* Class = UBaseStorageItemObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCount", &UBaseStorageItemObject::execAddCount },
			{ "GetItemLocation", &UBaseStorageItemObject::execGetItemLocation },
			{ "RemoveCount", &UBaseStorageItemObject::execRemoveCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics
	{
		struct BaseStorageItemObject_eventAddCount_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStorageItemObject_eventAddCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseStorageItemObject, nullptr, "AddCount", nullptr, nullptr, sizeof(BaseStorageItemObject_eventAddCount_Parms), Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseStorageItemObject_AddCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseStorageItemObject_AddCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics
	{
		struct BaseStorageItemObject_eventGetItemLocation_Parms
		{
			FItemLocation StartItemLocation;
			FItemLocation EndItemLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartItemLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndItemLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::NewProp_StartItemLocation = { "StartItemLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStorageItemObject_eventGetItemLocation_Parms, StartItemLocation), Z_Construct_UScriptStruct_FItemLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::NewProp_EndItemLocation = { "EndItemLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStorageItemObject_eventGetItemLocation_Parms, EndItemLocation), Z_Construct_UScriptStruct_FItemLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::NewProp_StartItemLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::NewProp_EndItemLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseStorageItemObject, nullptr, "GetItemLocation", nullptr, nullptr, sizeof(BaseStorageItemObject_eventGetItemLocation_Parms), Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics
	{
		struct BaseStorageItemObject_eventRemoveCount_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStorageItemObject_eventRemoveCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseStorageItemObject, nullptr, "RemoveCount", nullptr, nullptr, sizeof(BaseStorageItemObject_eventRemoveCount_Parms), Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister()
	{
		return UBaseStorageItemObject::StaticClass();
	}
	struct Z_Construct_UClass_UBaseStorageItemObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseStorageItemObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseStorageItemObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseStorageItemObject_AddCount, "AddCount" }, // 4075948337
		{ &Z_Construct_UFunction_UBaseStorageItemObject_GetItemLocation, "GetItemLocation" }, // 3050263159
		{ &Z_Construct_UFunction_UBaseStorageItemObject_RemoveCount, "RemoveCount" }, // 2607619239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/BaseStorageItemObject.h" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemOwner_MetaData[] = {
		{ "Category", "Item" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemObject, ItemOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemStorage_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemStorage = { "ItemStorage", nullptr, (EPropertyFlags)0x001100000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemObject, ItemStorage), Z_Construct_UClass_UBaseStorageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemParams_MetaData[] = {
		{ "Category", "Item" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Items/BaseStorageItemObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemParams = { "ItemParams", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageItemObject, ItemParams), Z_Construct_UScriptStruct_FStorageItem, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseStorageItemObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageItemObject_Statics::NewProp_ItemParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseStorageItemObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStorageItemObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseStorageItemObject_Statics::ClassParams = {
		&UBaseStorageItemObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseStorageItemObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseStorageItemObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageItemObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseStorageItemObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseStorageItemObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseStorageItemObject, 1822836199);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UBaseStorageItemObject>()
	{
		return UBaseStorageItemObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseStorageItemObject(Z_Construct_UClass_UBaseStorageItemObject, &UBaseStorageItemObject::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UBaseStorageItemObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStorageItemObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
