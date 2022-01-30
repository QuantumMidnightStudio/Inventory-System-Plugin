// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Library/UIStructLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIStructLibrary() {}
// Cross Module References
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCreatedWidget();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDT_Widget();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EUIInput();
// End Cross Module References
class UScriptStruct* FCreatedWidget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FCreatedWidget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreatedWidget, Z_Construct_UPackage__Script_InventorySystem(), TEXT("CreatedWidget"), sizeof(FCreatedWidget), Get_Z_Construct_UScriptStruct_FCreatedWidget_Hash());
	}
	return Singleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FCreatedWidget>()
{
	return FCreatedWidget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCreatedWidget(FCreatedWidget::StaticStruct, TEXT("/Script/InventorySystem"), TEXT("CreatedWidget"), false, nullptr, nullptr);
static struct FScriptStruct_InventorySystem_StaticRegisterNativesFCreatedWidget
{
	FScriptStruct_InventorySystem_StaticRegisterNativesFCreatedWidget()
	{
		UScriptStruct::DeferCppStructOps<FCreatedWidget>(FName(TEXT("CreatedWidget")));
	}
} ScriptStruct_InventorySystem_StaticRegisterNativesFCreatedWidget;
	struct Z_Construct_UScriptStruct_FCreatedWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreatedWidget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreatedWidget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "CreatedWidget" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreatedWidget, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "CreatedWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreatedWidget, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreatedWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreatedWidget_Statics::NewProp_Widget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreatedWidget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		nullptr,
		&NewStructOps,
		"CreatedWidget",
		sizeof(FCreatedWidget),
		alignof(FCreatedWidget),
		Z_Construct_UScriptStruct_FCreatedWidget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatedWidget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreatedWidget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreatedWidget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreatedWidget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCreatedWidget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CreatedWidget"), sizeof(FCreatedWidget), Get_Z_Construct_UScriptStruct_FCreatedWidget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCreatedWidget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCreatedWidget_Hash() { return 3724238590U; }

static_assert(std::is_polymorphic<FDT_Widget>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDT_Widget cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FDT_Widget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INVENTORYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDT_Widget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDT_Widget, Z_Construct_UPackage__Script_InventorySystem(), TEXT("DT_Widget"), sizeof(FDT_Widget), Get_Z_Construct_UScriptStruct_FDT_Widget_Hash());
	}
	return Singleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FDT_Widget>()
{
	return FDT_Widget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDT_Widget(FDT_Widget::StaticStruct, TEXT("/Script/InventorySystem"), TEXT("DT_Widget"), false, nullptr, nullptr);
static struct FScriptStruct_InventorySystem_StaticRegisterNativesFDT_Widget
{
	FScriptStruct_InventorySystem_StaticRegisterNativesFDT_Widget()
	{
		UScriptStruct::DeferCppStructOps<FDT_Widget>(FName(TEXT("DT_Widget")));
	}
} ScriptStruct_InventorySystem_StaticRegisterNativesFDT_Widget;
	struct Z_Construct_UScriptStruct_FDT_Widget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseLock_MetaData[];
#endif
		static void NewProp_UseLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockMovement_MetaData[];
#endif
		static void NewProp_LockMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideHUD_MetaData[];
#endif
		static void NewProp_HideHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideOtherWidgets_MetaData[];
#endif
		static void NewProp_HideOtherWidgets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideOtherWidgets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDT_Widget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDT_Widget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDT_Widget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "DT_Widget" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDT_Widget, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "DT_Widget" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDT_Widget, Widget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "DT_Widget" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDT_Widget, Input), Z_Construct_UEnum_InventorySystem_EUIInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_UseLock_MetaData[] = {
		{ "Category", "DT_Widget" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_UseLock_SetBit(void* Obj)
	{
		((FDT_Widget*)Obj)->UseLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_UseLock = { "UseLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDT_Widget), &Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_UseLock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_UseLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_UseLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_LockMovement_MetaData[] = {
		{ "Category", "DT_Widget" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_LockMovement_SetBit(void* Obj)
	{
		((FDT_Widget*)Obj)->LockMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_LockMovement = { "LockMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDT_Widget), &Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_LockMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_LockMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_LockMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideHUD_MetaData[] = {
		{ "Category", "DT_Widget" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideHUD_SetBit(void* Obj)
	{
		((FDT_Widget*)Obj)->HideHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideHUD = { "HideHUD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDT_Widget), &Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideHUD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideOtherWidgets_MetaData[] = {
		{ "Category", "DT_Widget" },
		{ "ModuleRelativePath", "Public/UI/Library/UIStructLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideOtherWidgets_SetBit(void* Obj)
	{
		((FDT_Widget*)Obj)->HideOtherWidgets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideOtherWidgets = { "HideOtherWidgets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDT_Widget), &Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideOtherWidgets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideOtherWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideOtherWidgets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDT_Widget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Input_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_UseLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_LockMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_Widget_Statics::NewProp_HideOtherWidgets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDT_Widget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DT_Widget",
		sizeof(FDT_Widget),
		alignof(FDT_Widget),
		Z_Construct_UScriptStruct_FDT_Widget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDT_Widget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_Widget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDT_Widget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDT_Widget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DT_Widget"), sizeof(FDT_Widget), Get_Z_Construct_UScriptStruct_FDT_Widget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDT_Widget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDT_Widget_Hash() { return 3272943722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
