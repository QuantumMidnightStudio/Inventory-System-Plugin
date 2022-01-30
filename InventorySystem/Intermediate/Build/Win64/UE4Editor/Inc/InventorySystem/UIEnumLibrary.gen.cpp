// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/UI/Library/UIEnumLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIEnumLibrary() {}
// Cross Module References
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemMenuType();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EUIInput();
// End Cross Module References
	static UEnum* EItemMenuType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemMenuType, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemMenuType"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemMenuType>()
	{
		return EItemMenuType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemMenuType(EItemMenuType_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EItemMenuType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EItemMenuType_Hash() { return 756423008U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EItemMenuType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemMenuType"), 0, Get_Z_Construct_UEnum_InventorySystem_EItemMenuType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemMenuType::EMT_Window", (int64)EItemMenuType::EMT_Window },
				{ "EItemMenuType::EMT_ActionMenu", (int64)EItemMenuType::EMT_ActionMenu },
				{ "EItemMenuType::EMT_ItemSplitMenu", (int64)EItemMenuType::EMT_ItemSplitMenu },
				{ "EItemMenuType::EMT_MAX", (int64)EItemMenuType::EMT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMT_ActionMenu.DisplayName", "ActionMenu" },
				{ "EMT_ActionMenu.Name", "EItemMenuType::EMT_ActionMenu" },
				{ "EMT_ItemSplitMenu.DisplayName", "ItemSplitMenu" },
				{ "EMT_ItemSplitMenu.Name", "EItemMenuType::EMT_ItemSplitMenu" },
				{ "EMT_MAX.Hidden", "" },
				{ "EMT_MAX.Name", "EItemMenuType::EMT_MAX" },
				{ "EMT_Window.DisplayName", "Window" },
				{ "EMT_Window.Name", "EItemMenuType::EMT_Window" },
				{ "ModuleRelativePath", "Public/UI/Library/UIEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EItemMenuType",
				"EItemMenuType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUIInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EUIInput, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EUIInput"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EUIInput>()
	{
		return EUIInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUIInput(EUIInput_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EUIInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EUIInput_Hash() { return 4053240008U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EUIInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUIInput"), 0, Get_Z_Construct_UEnum_InventorySystem_EUIInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUIInput::EUI_Game", (int64)EUIInput::EUI_Game },
				{ "EUIInput::EUI_OnlyWidget", (int64)EUIInput::EUI_OnlyWidget },
				{ "EUIInput::EUI_WidgetAndGame", (int64)EUIInput::EUI_WidgetAndGame },
				{ "EUIInput::EUI_MAX", (int64)EUIInput::EUI_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EUI_Game.DisplayName", "Game" },
				{ "EUI_Game.Name", "EUIInput::EUI_Game" },
				{ "EUI_MAX.Hidden", "" },
				{ "EUI_MAX.Name", "EUIInput::EUI_MAX" },
				{ "EUI_OnlyWidget.DisplayName", "OnlyWidget" },
				{ "EUI_OnlyWidget.Name", "EUIInput::EUI_OnlyWidget" },
				{ "EUI_WidgetAndGame.DisplayName", "WidgetAndGame" },
				{ "EUI_WidgetAndGame.Name", "EUIInput::EUI_WidgetAndGame" },
				{ "ModuleRelativePath", "Public/UI/Library/UIEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EUIInput",
				"EUIInput",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
