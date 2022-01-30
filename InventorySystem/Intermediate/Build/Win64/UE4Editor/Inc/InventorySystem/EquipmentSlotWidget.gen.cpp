// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Equipment/EquipmentSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentSlotWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipmentSlotWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipmentSlotWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EEquipPart();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemStorageSlotWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEquipmentSlotWidget::execSetImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentSlotWidget::execSetDefaultText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentSlotWidget::execUnEquipItem)
	{
		P_GET_ENUM(EEquipPart,Z_Param_EquipSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnEquipItem(EEquipPart(Z_Param_EquipSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentSlotWidget::execUpdateItem)
	{
		P_GET_OBJECT(UBaseStorageItemObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItem(Z_Param_Item);
		P_NATIVE_END;
	}
	void UEquipmentSlotWidget::StaticRegisterNativesUEquipmentSlotWidget()
	{
		UClass* Class = UEquipmentSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDefaultText", &UEquipmentSlotWidget::execSetDefaultText },
			{ "SetImage", &UEquipmentSlotWidget::execSetImage },
			{ "UnEquipItem", &UEquipmentSlotWidget::execUnEquipItem },
			{ "UpdateItem", &UEquipmentSlotWidget::execUpdateItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentSlotWidget_SetDefaultText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentSlotWidget_SetDefaultText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentSlotWidget_SetDefaultText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentSlotWidget, nullptr, "SetDefaultText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentSlotWidget_SetDefaultText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSlotWidget_SetDefaultText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentSlotWidget_SetDefaultText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentSlotWidget_SetDefaultText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentSlotWidget_SetImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentSlotWidget_SetImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentSlotWidget_SetImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentSlotWidget, nullptr, "SetImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentSlotWidget_SetImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSlotWidget_SetImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentSlotWidget_SetImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentSlotWidget_SetImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics
	{
		struct EquipmentSlotWidget_eventUnEquipItem_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::NewProp_EquipSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::NewProp_EquipSlot = { "EquipSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentSlotWidget_eventUnEquipItem_Parms, EquipSlot), Z_Construct_UEnum_InventorySystem_EEquipPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::NewProp_EquipSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::NewProp_EquipSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentSlotWidget, nullptr, "UnEquipItem", nullptr, nullptr, sizeof(EquipmentSlotWidget_eventUnEquipItem_Parms), Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics
	{
		struct EquipmentSlotWidget_eventUpdateItem_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentSlotWidget_eventUpdateItem_Parms, Item), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentSlotWidget, nullptr, "UpdateItem", nullptr, nullptr, sizeof(EquipmentSlotWidget_eventUpdateItem_Parms), Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquipmentSlotWidget_NoRegister()
	{
		return UEquipmentSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipPart_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquipPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptySlotImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptySlotImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageItemWidgetForDaD_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StorageItemWidgetForDaD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemInSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBSlotSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBSlotSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBImageBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBImageBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBItemImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBItemImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IItemImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IItemImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageDynamicMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageDynamicMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentSlotWidget_SetDefaultText, "SetDefaultText" }, // 1868483378
		{ &Z_Construct_UFunction_UEquipmentSlotWidget_SetImage, "SetImage" }, // 1928662979
		{ &Z_Construct_UFunction_UEquipmentSlotWidget_UnEquipItem, "UnEquipItem" }, // 671698516
		{ &Z_Construct_UFunction_UEquipmentSlotWidget_UpdateItem, "UpdateItem" }, // 629130064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Equipment/EquipmentSlotWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EquipPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EquipPart_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EquipPart = { "EquipPart", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, EquipPart), Z_Construct_UEnum_InventorySystem_EEquipPart, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EquipPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EquipPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EmptySlotImage_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EmptySlotImage = { "EmptySlotImage", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, EmptySlotImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EmptySlotImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EmptySlotImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_StorageItemWidgetForDaD_MetaData[] = {
		{ "Category", "DaD" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_StorageItemWidgetForDaD = { "StorageItemWidgetForDaD", nullptr, (EPropertyFlags)0x0025080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, StorageItemWidgetForDaD), Z_Construct_UClass_UItemStorageSlotWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_StorageItemWidgetForDaD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_StorageItemWidgetForDaD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ItemInSlot_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ItemInSlot = { "ItemInSlot", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, ItemInSlot), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ItemInSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ItemInSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBSlotSize_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBSlotSize = { "SBSlotSize", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, SBSlotSize), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBSlotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBSlotSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBImageBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBImageBox = { "SBImageBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, SBImageBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBImageBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBImageBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBItemImage = { "SBItemImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, SBItemImage), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBItemImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_IItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_IItemImage = { "IItemImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, IItemImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_IItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_IItemImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_TItemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_TItemName = { "TItemName", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, TItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_TItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_TItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ImageDynamicMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Equipment/EquipmentSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ImageDynamicMaterial = { "ImageDynamicMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentSlotWidget, ImageDynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ImageDynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ImageDynamicMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EquipPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EquipPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_EmptySlotImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_StorageItemWidgetForDaD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ItemInSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBSlotSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBImageBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_SBItemImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_IItemImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_TItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSlotWidget_Statics::NewProp_ImageDynamicMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentSlotWidget_Statics::ClassParams = {
		&UEquipmentSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipmentSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentSlotWidget, 3670200488);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UEquipmentSlotWidget>()
	{
		return UEquipmentSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentSlotWidget(Z_Construct_UClass_UEquipmentSlotWidget, &UEquipmentSlotWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UEquipmentSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
