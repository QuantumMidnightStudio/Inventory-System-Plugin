// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Storage/Slot/ItemStorageSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemStorageSlotWidget() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemStorageSlotWidget_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemStorageSlotWidget();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageSlotWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UDaDStorage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UItemStorageSlotWidget::execUpdateItemCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemStorageSlotWidget::execUpdateRotation)
	{
		P_GET_UBOOL(Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRotation(Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemStorageSlotWidget::execUpdateItemLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemLocation();
		P_NATIVE_END;
	}
	void UItemStorageSlotWidget::StaticRegisterNativesUItemStorageSlotWidget()
	{
		UClass* Class = UItemStorageSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateItemCount", &UItemStorageSlotWidget::execUpdateItemCount },
			{ "UpdateItemLocation", &UItemStorageSlotWidget::execUpdateItemLocation },
			{ "UpdateRotation", &UItemStorageSlotWidget::execUpdateRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemStorageSlotWidget, nullptr, "UpdateItemCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemStorageSlotWidget, nullptr, "UpdateItemLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics
	{
		struct ItemStorageSlotWidget_eventUpdateRotation_Parms
		{
			bool Rotation;
		};
		static void NewProp_Rotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::NewProp_Rotation_SetBit(void* Obj)
	{
		((ItemStorageSlotWidget_eventUpdateRotation_Parms*)Obj)->Rotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemStorageSlotWidget_eventUpdateRotation_Parms), &Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::NewProp_Rotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemStorageSlotWidget, nullptr, "UpdateRotation", nullptr, nullptr, sizeof(ItemStorageSlotWidget_eventUpdateRotation_Parms), Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemStorageSlotWidget_NoRegister()
	{
		return UItemStorageSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemStorageSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragWidget_MetaData[];
#endif
		static void NewProp_DragWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DragWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualRotate_MetaData[];
#endif
		static void NewProp_VisualRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IItemImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IItemImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageDynamicMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageDynamicMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragAndDropOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragAndDropOperation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemStorageSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStorageSlotWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemStorageSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemCount, "UpdateItemCount" }, // 3510004050
		{ &Z_Construct_UFunction_UItemStorageSlotWidget_UpdateItemLocation, "UpdateItemLocation" }, // 1219067744
		{ &Z_Construct_UFunction_UItemStorageSlotWidget_UpdateRotation, "UpdateRotation" }, // 66944683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Storage/Slot/ItemStorageSlotWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	void Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragWidget_SetBit(void* Obj)
	{
		((UItemStorageSlotWidget*)Obj)->DragWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragWidget = { "DragWidget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UItemStorageSlotWidget), &Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemStorageSlotWidget, Item), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_VisualRotate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	void Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_VisualRotate_SetBit(void* Obj)
	{
		((UItemStorageSlotWidget*)Obj)->VisualRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_VisualRotate = { "VisualRotate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UItemStorageSlotWidget), &Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_VisualRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_VisualRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_VisualRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_SBImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_SBImage = { "SBImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemStorageSlotWidget, SBImage), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_SBImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_SBImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_IItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_IItemImage = { "IItemImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemStorageSlotWidget, IItemImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_IItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_IItemImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TCount = { "TCount", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemStorageSlotWidget, TCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TItemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TItemName = { "TItemName", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemStorageSlotWidget, TItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_ImageDynamicMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_ImageDynamicMaterial = { "ImageDynamicMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemStorageSlotWidget, ImageDynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_ImageDynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_ImageDynamicMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragAndDropOperation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Storage/Slot/ItemStorageSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragAndDropOperation = { "DragAndDropOperation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemStorageSlotWidget, DragAndDropOperation), Z_Construct_UClass_UDaDStorage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragAndDropOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragAndDropOperation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemStorageSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_VisualRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_SBImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_IItemImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_TItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_ImageDynamicMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStorageSlotWidget_Statics::NewProp_DragAndDropOperation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemStorageSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemStorageSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemStorageSlotWidget_Statics::ClassParams = {
		&UItemStorageSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemStorageSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemStorageSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemStorageSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemStorageSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemStorageSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemStorageSlotWidget, 1132582996);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemStorageSlotWidget>()
	{
		return UItemStorageSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemStorageSlotWidget(Z_Construct_UClass_UItemStorageSlotWidget, &UItemStorageSlotWidget::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UItemStorageSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemStorageSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
