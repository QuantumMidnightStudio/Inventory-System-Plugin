// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySystem_init() {}
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_ItemRelocated__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_AddItem__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_ItemRemoved__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_UpdateItemCount__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_AdditioinalUI__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_AdditioinalUIStage1__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_AdditioinalUIStage2__DelegateSignature();
	INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InventorySystem()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_ItemRelocated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_AddItem__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_ItemRemoved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_UpdateItemCount__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_EquipItem__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_UnEquipItem__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_ChangeInteractedChest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_AdditioinalUI__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_AdditioinalUIStage1__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_AdditioinalUIStage2__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventorySystem_CloseWindow__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/InventorySystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB9B41B69,
				0x5EFC732D,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
