// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/PlayerStorageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStorageComponent() {}
// Cross Module References
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AChestActor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerStorageComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UCharacterStorageComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorage_StorageItemObject_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemLocation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventChangeInteractedChest_Parms
		{
			AChestActor* NewChest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewChest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::NewProp_NewChest = { "NewChest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_InventorySystem_eventChangeInteractedChest_Parms, NewChest), Z_Construct_UClass_AChestActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::NewProp_NewChest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "ChangeInteractedChest__DelegateSignature", nullptr, nullptr, sizeof(_Script_InventorySystem_eventChangeInteractedChest_Parms), Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayerStorageComponent::execSplitItem)
	{
		P_GET_OBJECT(UBaseStorageItemObject,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_STRUCT(FItemLocation,Z_Param_SecondItemLocation);
		P_GET_OBJECT(UStorage_StorageItemObject,Z_Param_SecondItemStorage);
		P_GET_UBOOL_REF(Z_Param_Out_ItemAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SplitItem(Z_Param_Item,Z_Param_Count,Z_Param_SecondItemLocation,Z_Param_SecondItemStorage,Z_Param_Out_ItemAdded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerStorageComponent::execDropItemToItem)
	{
		P_GET_OBJECT(UBaseStorageItemObject,Z_Param_DroppedItem);
		P_GET_OBJECT(UBaseStorageItemObject,Z_Param_DroppedOnItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItemToItem(Z_Param_DroppedItem,Z_Param_DroppedOnItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerStorageComponent::execDropItemToEmptySlot)
	{
		P_GET_OBJECT(UBaseStorageItemObject,Z_Param_DroppedItem);
		P_GET_OBJECT(UStorage_StorageItemObject,Z_Param_Storage);
		P_GET_STRUCT(FItemLocation,Z_Param_Location);
		P_GET_UBOOL(Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItemToEmptySlot(Z_Param_DroppedItem,Z_Param_Storage,Z_Param_Location,Z_Param_NewRotation);
		P_NATIVE_END;
	}
	void UPlayerStorageComponent::StaticRegisterNativesUPlayerStorageComponent()
	{
		UClass* Class = UPlayerStorageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropItemToEmptySlot", &UPlayerStorageComponent::execDropItemToEmptySlot },
			{ "DropItemToItem", &UPlayerStorageComponent::execDropItemToItem },
			{ "SplitItem", &UPlayerStorageComponent::execSplitItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics
	{
		struct PlayerStorageComponent_eventDropItemToEmptySlot_Parms
		{
			UBaseStorageItemObject* DroppedItem;
			UStorage_StorageItemObject* Storage;
			FItemLocation Location;
			bool NewRotation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppedItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Storage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_NewRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_DroppedItem = { "DroppedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventDropItemToEmptySlot_Parms, DroppedItem), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_Storage = { "Storage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventDropItemToEmptySlot_Parms, Storage), Z_Construct_UClass_UStorage_StorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventDropItemToEmptySlot_Parms, Location), Z_Construct_UScriptStruct_FItemLocation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_NewRotation_SetBit(void* Obj)
	{
		((PlayerStorageComponent_eventDropItemToEmptySlot_Parms*)Obj)->NewRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerStorageComponent_eventDropItemToEmptySlot_Parms), &Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_NewRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_DroppedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_Storage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStorageComponent, nullptr, "DropItemToEmptySlot", nullptr, nullptr, sizeof(PlayerStorageComponent_eventDropItemToEmptySlot_Parms), Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics
	{
		struct PlayerStorageComponent_eventDropItemToItem_Parms
		{
			UBaseStorageItemObject* DroppedItem;
			UBaseStorageItemObject* DroppedOnItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppedItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppedOnItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::NewProp_DroppedItem = { "DroppedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventDropItemToItem_Parms, DroppedItem), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::NewProp_DroppedOnItem = { "DroppedOnItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventDropItemToItem_Parms, DroppedOnItem), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::NewProp_DroppedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::NewProp_DroppedOnItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStorageComponent, nullptr, "DropItemToItem", nullptr, nullptr, sizeof(PlayerStorageComponent_eventDropItemToItem_Parms), Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics
	{
		struct PlayerStorageComponent_eventSplitItem_Parms
		{
			UBaseStorageItemObject* Item;
			int32 Count;
			FItemLocation SecondItemLocation;
			UStorage_StorageItemObject* SecondItemStorage;
			bool ItemAdded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondItemLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondItemStorage;
		static void NewProp_ItemAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ItemAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventSplitItem_Parms, Item), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventSplitItem_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_SecondItemLocation = { "SecondItemLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventSplitItem_Parms, SecondItemLocation), Z_Construct_UScriptStruct_FItemLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_SecondItemStorage = { "SecondItemStorage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStorageComponent_eventSplitItem_Parms, SecondItemStorage), Z_Construct_UClass_UStorage_StorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_ItemAdded_SetBit(void* Obj)
	{
		((PlayerStorageComponent_eventSplitItem_Parms*)Obj)->ItemAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_ItemAdded = { "ItemAdded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerStorageComponent_eventSplitItem_Parms), &Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_ItemAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_SecondItemLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_SecondItemStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::NewProp_ItemAdded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\x09\n\x09* Splits a stackable item in two\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerStorageComponent.h" },
		{ "ToolTip", "Splits a stackable item in two" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStorageComponent, nullptr, "SplitItem", nullptr, nullptr, sizeof(PlayerStorageComponent_eventSplitItem_Parms), Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStorageComponent_SplitItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStorageComponent_SplitItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerStorageComponent_NoRegister()
	{
		return UPlayerStorageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStorageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChangeInteractedChest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangeInteractedChest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractedChest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractedChest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStorageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterStorageComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerStorageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStorageComponent_DropItemToEmptySlot, "DropItemToEmptySlot" }, // 2300644694
		{ &Z_Construct_UFunction_UPlayerStorageComponent_DropItemToItem, "DropItemToItem" }, // 4072239808
		{ &Z_Construct_UFunction_UPlayerStorageComponent_SplitItem, "SplitItem" }, // 2153784330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStorageComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerStorageComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerStorageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_OnChangeInteractedChest_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_OnChangeInteractedChest = { "OnChangeInteractedChest", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStorageComponent, OnChangeInteractedChest), Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_OnChangeInteractedChest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_OnChangeInteractedChest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_InteractedChest_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_InteractedChest = { "InteractedChest", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStorageComponent, InteractedChest), Z_Construct_UClass_AChestActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_InteractedChest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_InteractedChest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStorageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_OnChangeInteractedChest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStorageComponent_Statics::NewProp_InteractedChest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStorageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStorageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStorageComponent_Statics::ClassParams = {
		&UPlayerStorageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerStorageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStorageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStorageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStorageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStorageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerStorageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerStorageComponent, 3973203601);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UPlayerStorageComponent>()
	{
		return UPlayerStorageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerStorageComponent(Z_Construct_UClass_UPlayerStorageComponent, &UPlayerStorageComponent::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UPlayerStorageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStorageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
