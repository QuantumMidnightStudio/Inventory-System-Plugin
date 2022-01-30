// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/BaseStorageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStorageComponent() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageComponent_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStorageItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemObject_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemRenderImageActor_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UStorageInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseStorageComponent::execRenderItemImage)
	{
		P_GET_OBJECT(UBaseStorageItemPDataAsset,Z_Param_ItemDA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RenderItemImage(Z_Param_ItemDA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseStorageComponent::execCreateItem)
	{
		P_GET_STRUCT(FStorageItem,Z_Param_ItemInfo);
		P_GET_UBOOL_REF(Z_Param_Out_ItemCreated);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseStorageItemObject**)Z_Param__Result=P_THIS->CreateItem(Z_Param_ItemInfo,Z_Param_Out_ItemCreated);
		P_NATIVE_END;
	}
	void UBaseStorageComponent::StaticRegisterNativesUBaseStorageComponent()
	{
		UClass* Class = UBaseStorageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateItem", &UBaseStorageComponent::execCreateItem },
			{ "RenderItemImage", &UBaseStorageComponent::execRenderItemImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics
	{
		struct BaseStorageComponent_eventCreateItem_Parms
		{
			FStorageItem ItemInfo;
			bool ItemCreated;
			UBaseStorageItemObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemInfo;
		static void NewProp_ItemCreated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ItemCreated;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStorageComponent_eventCreateItem_Parms, ItemInfo), Z_Construct_UScriptStruct_FStorageItem, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::NewProp_ItemCreated_SetBit(void* Obj)
	{
		((BaseStorageComponent_eventCreateItem_Parms*)Obj)->ItemCreated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::NewProp_ItemCreated = { "ItemCreated", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseStorageComponent_eventCreateItem_Parms), &Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::NewProp_ItemCreated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStorageComponent_eventCreateItem_Parms, ReturnValue), Z_Construct_UClass_UBaseStorageItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::NewProp_ItemInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::NewProp_ItemCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseStorageComponent, nullptr, "CreateItem", nullptr, nullptr, sizeof(BaseStorageComponent_eventCreateItem_Parms), Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseStorageComponent_CreateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseStorageComponent_CreateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics
	{
		struct BaseStorageComponent_eventRenderItemImage_Parms
		{
			UBaseStorageItemPDataAsset* ItemDA;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDA;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::NewProp_ItemDA = { "ItemDA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStorageComponent_eventRenderItemImage_Parms, ItemDA), Z_Construct_UClass_UBaseStorageItemPDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStorageComponent_eventRenderItemImage_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::NewProp_ItemDA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseStorageComponent, nullptr, "RenderItemImage", nullptr, nullptr, sizeof(BaseStorageComponent_eventRenderItemImage_Parms), Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseStorageComponent_NoRegister()
	{
		return UBaseStorageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseStorageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemRenderImageActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemRenderImageActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseStorageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseStorageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseStorageComponent_CreateItem, "CreateItem" }, // 2815292155
		{ &Z_Construct_UFunction_UBaseStorageComponent_RenderItemImage, "RenderItemImage" }, // 1828757083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BaseStorageComponent.h" },
		{ "ModuleRelativePath", "Public/BaseStorageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_ItemRenderImageActor_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BaseStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_ItemRenderImageActor = { "ItemRenderImageActor", nullptr, (EPropertyFlags)0x0015000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageComponent, ItemRenderImageActor), Z_Construct_UClass_AItemRenderImageActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_ItemRenderImageActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_ItemRenderImageActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_RenderActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseStorageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_RenderActor = { "RenderActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseStorageComponent, RenderActor), Z_Construct_UClass_AItemRenderImageActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_RenderActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_RenderActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseStorageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_ItemRenderImageActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseStorageComponent_Statics::NewProp_RenderActor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseStorageComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStorageInterface_NoRegister, (int32)VTABLE_OFFSET(UBaseStorageComponent, IStorageInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseStorageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStorageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseStorageComponent_Statics::ClassParams = {
		&UBaseStorageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseStorageComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseStorageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStorageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseStorageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseStorageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseStorageComponent, 818864386);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UBaseStorageComponent>()
	{
		return UBaseStorageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseStorageComponent(Z_Construct_UClass_UBaseStorageComponent, &UBaseStorageComponent::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UBaseStorageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStorageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
