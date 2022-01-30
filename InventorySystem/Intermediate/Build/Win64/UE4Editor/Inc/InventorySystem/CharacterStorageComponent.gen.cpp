// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/CharacterStorageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStorageComponent() {}
// Cross Module References
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EEquipPart();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UCharacterStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UCharacterStorageComponent();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageComponent();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDroppedItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AWorldItemActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventUnEquipItem_Parms
		{
			EEquipPart EquipSlot;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquipSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::NewProp_EquipSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::NewProp_EquipSlot = { "EquipSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_InventorySystem_eventUnEquipItem_Parms, EquipSlot), Z_Construct_UEnum_InventorySystem_EEquipPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::NewProp_EquipSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::NewProp_EquipSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "UnEquipItem__DelegateSignature", nullptr, nullptr, sizeof(_Script_InventorySystem_eventUnEquipItem_Parms), Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics
	{
		struct _Script_InventorySystem_eventEquipItem_Parms
		{
			UBaseStorageItemObject* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_InventorySystem_eventEquipItem_Parms, Item), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "EquipItem__DelegateSignature", nullptr, nullptr, sizeof(_Script_InventorySystem_eventEquipItem_Parms), Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCharacterStorageComponent::execCanItemBeEquipped)
	{
		P_GET_STRUCT(FDroppedItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanItemBeEquipped(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterStorageComponent::execGetEquipObjectItem)
	{
		P_GET_ENUM(EEquipPart,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseStorageItemObject**)Z_Param__Result=P_THIS->GetEquipObjectItem(EEquipPart(Z_Param_Slot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterStorageComponent::execUnEquipItem)
	{
		P_GET_ENUM(EEquipPart,Z_Param_EquipSlot);
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnEquipItem(EEquipPart(Z_Param_EquipSlot),Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterStorageComponent::execEquipItem)
	{
		P_GET_OBJECT(UBaseStorageItemObject,Z_Param_ItemToEquip);
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipItem(Z_Param_ItemToEquip,Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	void UCharacterStorageComponent::StaticRegisterNativesUCharacterStorageComponent()
	{
		UClass* Class = UCharacterStorageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanItemBeEquipped", &UCharacterStorageComponent::execCanItemBeEquipped },
			{ "EquipItem", &UCharacterStorageComponent::execEquipItem },
			{ "GetEquipObjectItem", &UCharacterStorageComponent::execGetEquipObjectItem },
			{ "UnEquipItem", &UCharacterStorageComponent::execUnEquipItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics
	{
		struct CharacterStorageComponent_eventCanItemBeEquipped_Parms
		{
			FDroppedItem Item;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStorageComponent_eventCanItemBeEquipped_Parms, Item), Z_Construct_UScriptStruct_FDroppedItem, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterStorageComponent_eventCanItemBeEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterStorageComponent_eventCanItemBeEquipped_Parms), &Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStorageComponent, nullptr, "CanItemBeEquipped", nullptr, nullptr, sizeof(CharacterStorageComponent_eventCanItemBeEquipped_Parms), Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics
	{
		struct CharacterStorageComponent_eventEquipItem_Parms
		{
			UBaseStorageItemObject* ItemToEquip;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStorageComponent_eventEquipItem_Parms, ItemToEquip), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterStorageComponent_eventEquipItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterStorageComponent_eventEquipItem_Parms), &Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::NewProp_ItemToEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Out*/" },
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
		{ "ToolTip", "Out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStorageComponent, nullptr, "EquipItem", nullptr, nullptr, sizeof(CharacterStorageComponent_eventEquipItem_Parms), Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterStorageComponent_EquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterStorageComponent_EquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics
	{
		struct CharacterStorageComponent_eventGetEquipObjectItem_Parms
		{
			EEquipPart Slot;
			UBaseStorageItemObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStorageComponent_eventGetEquipObjectItem_Parms, Slot), Z_Construct_UEnum_InventorySystem_EEquipPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStorageComponent_eventGetEquipObjectItem_Parms, ReturnValue), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStorageComponent, nullptr, "GetEquipObjectItem", nullptr, nullptr, sizeof(CharacterStorageComponent_eventGetEquipObjectItem_Parms), Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics
	{
		struct CharacterStorageComponent_eventUnEquipItem_Parms
		{
			EEquipPart EquipSlot;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquipSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::NewProp_EquipSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::NewProp_EquipSlot = { "EquipSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterStorageComponent_eventUnEquipItem_Parms, EquipSlot), Z_Construct_UEnum_InventorySystem_EEquipPart, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterStorageComponent_eventUnEquipItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterStorageComponent_eventUnEquipItem_Parms), &Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::NewProp_EquipSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::NewProp_EquipSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Out*/" },
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
		{ "ToolTip", "Out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterStorageComponent, nullptr, "UnEquipItem", nullptr, nullptr, sizeof(CharacterStorageComponent_eventUnEquipItem_Parms), Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterStorageComponent_NoRegister()
	{
		return UCharacterStorageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterStorageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEquipItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnEquipItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnEquipItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Backpack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Backpack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorsActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TorsActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackpackActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackpackActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterStorageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStorageComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterStorageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterStorageComponent_CanItemBeEquipped, "CanItemBeEquipped" }, // 2717976264
		{ &Z_Construct_UFunction_UCharacterStorageComponent_EquipItem, "EquipItem" }, // 3249120401
		{ &Z_Construct_UFunction_UCharacterStorageComponent_GetEquipObjectItem, "GetEquipObjectItem" }, // 615785979
		{ &Z_Construct_UFunction_UCharacterStorageComponent_UnEquipItem, "UnEquipItem" }, // 3429004029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterStorageComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnEquipItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnEquipItem = { "OnEquipItem", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStorageComponent, OnEquipItem), Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnEquipItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnEquipItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnUnEquipItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnUnEquipItem = { "OnUnEquipItem", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStorageComponent, OnUnEquipItem), Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnUnEquipItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnUnEquipItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Head_MetaData[] = {
		{ "Comment", "//Equipment Objects\n" },
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
		{ "ToolTip", "Equipment Objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStorageComponent, Head), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Tors_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Tors = { "Tors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStorageComponent, Tors), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Tors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Tors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Backpack_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Backpack = { "Backpack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStorageComponent, Backpack), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Backpack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Backpack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_HeadActor_MetaData[] = {
		{ "Comment", "//Equipment actos\n" },
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
		{ "ToolTip", "Equipment actos" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_HeadActor = { "HeadActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStorageComponent, HeadActor), Z_Construct_UClass_AWorldItemActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_HeadActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_HeadActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_TorsActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_TorsActor = { "TorsActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStorageComponent, TorsActor), Z_Construct_UClass_AWorldItemActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_TorsActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_TorsActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_BackpackActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_BackpackActor = { "BackpackActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterStorageComponent, BackpackActor), Z_Construct_UClass_AWorldItemActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_BackpackActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_BackpackActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterStorageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnEquipItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_OnUnEquipItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Tors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_Backpack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_HeadActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_TorsActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterStorageComponent_Statics::NewProp_BackpackActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterStorageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterStorageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterStorageComponent_Statics::ClassParams = {
		&UCharacterStorageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterStorageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterStorageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterStorageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterStorageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterStorageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterStorageComponent, 1274492616);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UCharacterStorageComponent>()
	{
		return UCharacterStorageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterStorageComponent(Z_Construct_UClass_UCharacterStorageComponent, &UCharacterStorageComponent::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UCharacterStorageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterStorageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
