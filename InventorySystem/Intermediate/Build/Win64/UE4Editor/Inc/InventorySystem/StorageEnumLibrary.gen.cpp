// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Library/StorageEnumLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageEnumLibrary() {}
// Cross Module References
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EActiveWeapon();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EFireMode();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EWeaponComponentType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EWeaponReloadType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EWeaponType();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemRarity();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EEquipPart();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemType();
// End Cross Module References
	static UEnum* EActiveWeapon_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EActiveWeapon, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EActiveWeapon"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EActiveWeapon>()
	{
		return EActiveWeapon_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActiveWeapon(EActiveWeapon_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EActiveWeapon"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EActiveWeapon_Hash() { return 2457503812U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EActiveWeapon()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActiveWeapon"), 0, Get_Z_Construct_UEnum_InventorySystem_EActiveWeapon_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActiveWeapon::EAW_Hand", (int64)EActiveWeapon::EAW_Hand },
				{ "EActiveWeapon::EAW_Spine", (int64)EActiveWeapon::EAW_Spine },
				{ "EActiveWeapon::EAW_MAX", (int64)EActiveWeapon::EAW_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EAW_Hand.DisplayName", "Hand" },
				{ "EAW_Hand.Name", "EActiveWeapon::EAW_Hand" },
				{ "EAW_MAX.Hidden", "" },
				{ "EAW_MAX.Name", "EActiveWeapon::EAW_MAX" },
				{ "EAW_Spine.DisplayName", "Spine" },
				{ "EAW_Spine.Name", "EActiveWeapon::EAW_Spine" },
				{ "ModuleRelativePath", "Public/Library/StorageEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EActiveWeapon",
				"EActiveWeapon",
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
	static UEnum* EFireMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EFireMode, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EFireMode"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EFireMode>()
	{
		return EFireMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireMode(EFireMode_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EFireMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EFireMode_Hash() { return 3159358330U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EFireMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireMode"), 0, Get_Z_Construct_UEnum_InventorySystem_EFireMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireMode::EFM_Auto", (int64)EFireMode::EFM_Auto },
				{ "EFireMode::EFM_Single", (int64)EFireMode::EFM_Single },
				{ "EFireMode::EFM_MAX", (int64)EFireMode::EFM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EFM_Auto.DisplayName", "Auto" },
				{ "EFM_Auto.Name", "EFireMode::EFM_Auto" },
				{ "EFM_MAX.Hidden", "" },
				{ "EFM_MAX.Name", "EFireMode::EFM_MAX" },
				{ "EFM_Single.DisplayName", "Single" },
				{ "EFM_Single.Name", "EFireMode::EFM_Single" },
				{ "ModuleRelativePath", "Public/Library/StorageEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EFireMode",
				"EFireMode",
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
	static UEnum* EWeaponComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EWeaponComponentType, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EWeaponComponentType"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EWeaponComponentType>()
	{
		return EWeaponComponentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponComponentType(EWeaponComponentType_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EWeaponComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EWeaponComponentType_Hash() { return 1864226956U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EWeaponComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponComponentType"), 0, Get_Z_Construct_UEnum_InventorySystem_EWeaponComponentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponComponentType::EWCT_Grip", (int64)EWeaponComponentType::EWCT_Grip },
				{ "EWeaponComponentType::EWCT_Magazine", (int64)EWeaponComponentType::EWCT_Magazine },
				{ "EWeaponComponentType::EWCT_Muzzle", (int64)EWeaponComponentType::EWCT_Muzzle },
				{ "EWeaponComponentType::EWCT_Sight", (int64)EWeaponComponentType::EWCT_Sight },
				{ "EWeaponComponentType::EWCT_Stock", (int64)EWeaponComponentType::EWCT_Stock },
				{ "EWeaponComponentType::EWCT_Forend", (int64)EWeaponComponentType::EWCT_Forend },
				{ "EWeaponComponentType::EWCT_MAX", (int64)EWeaponComponentType::EWCT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EWCT_Forend.DisplayName", "Forend" },
				{ "EWCT_Forend.Name", "EWeaponComponentType::EWCT_Forend" },
				{ "EWCT_Grip.DisplayName", "Grip" },
				{ "EWCT_Grip.Name", "EWeaponComponentType::EWCT_Grip" },
				{ "EWCT_Magazine.DisplayName", "Magazine" },
				{ "EWCT_Magazine.Name", "EWeaponComponentType::EWCT_Magazine" },
				{ "EWCT_MAX.Hidden", "" },
				{ "EWCT_MAX.Name", "EWeaponComponentType::EWCT_MAX" },
				{ "EWCT_Muzzle.DisplayName", "Muzzle" },
				{ "EWCT_Muzzle.Name", "EWeaponComponentType::EWCT_Muzzle" },
				{ "EWCT_Sight.DisplayName", "Sight" },
				{ "EWCT_Sight.Name", "EWeaponComponentType::EWCT_Sight" },
				{ "EWCT_Stock.DisplayName", "Stock" },
				{ "EWCT_Stock.Name", "EWeaponComponentType::EWCT_Stock" },
				{ "ModuleRelativePath", "Public/Library/StorageEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EWeaponComponentType",
				"EWeaponComponentType",
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
	static UEnum* EWeaponReloadType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EWeaponReloadType, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EWeaponReloadType"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EWeaponReloadType>()
	{
		return EWeaponReloadType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponReloadType(EWeaponReloadType_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EWeaponReloadType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EWeaponReloadType_Hash() { return 550550707U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EWeaponReloadType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponReloadType"), 0, Get_Z_Construct_UEnum_InventorySystem_EWeaponReloadType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponReloadType::EWRT_DefaultReload", (int64)EWeaponReloadType::EWRT_DefaultReload },
				{ "EWeaponReloadType::EWRT_ReloadEmpty", (int64)EWeaponReloadType::EWRT_ReloadEmpty },
				{ "EWeaponReloadType::EWRT_ReloadWithoutMag", (int64)EWeaponReloadType::EWRT_ReloadWithoutMag },
				{ "EWeaponReloadType::EWRT_ReloadEmptyWithoutMag", (int64)EWeaponReloadType::EWRT_ReloadEmptyWithoutMag },
				{ "EWeaponReloadType::EWRT_MAX", (int64)EWeaponReloadType::EWRT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EWRT_DefaultReload.DisplayName", "DefaultReload" },
				{ "EWRT_DefaultReload.Name", "EWeaponReloadType::EWRT_DefaultReload" },
				{ "EWRT_MAX.Hidden", "" },
				{ "EWRT_MAX.Name", "EWeaponReloadType::EWRT_MAX" },
				{ "EWRT_ReloadEmpty.DisplayName", "ReloadEmpty" },
				{ "EWRT_ReloadEmpty.Name", "EWeaponReloadType::EWRT_ReloadEmpty" },
				{ "EWRT_ReloadEmptyWithoutMag.DisplayName", "ReloadEmptyWithoutMag" },
				{ "EWRT_ReloadEmptyWithoutMag.Name", "EWeaponReloadType::EWRT_ReloadEmptyWithoutMag" },
				{ "EWRT_ReloadWithoutMag.DisplayName", "ReloadWithoutMag" },
				{ "EWRT_ReloadWithoutMag.Name", "EWeaponReloadType::EWRT_ReloadWithoutMag" },
				{ "ModuleRelativePath", "Public/Library/StorageEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EWeaponReloadType",
				"EWeaponReloadType",
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
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EWeaponType, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EWeaponType_Hash() { return 2004159363U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_InventorySystem_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::EWT_Rifle", (int64)EWeaponType::EWT_Rifle },
				{ "EWeaponType::EWT_Pistol", (int64)EWeaponType::EWT_Pistol },
				{ "EWeaponType::EWT_Shotgun", (int64)EWeaponType::EWT_Shotgun },
				{ "EWeaponType::EWT_GrenadeLauncher", (int64)EWeaponType::EWT_GrenadeLauncher },
				{ "EWeaponType::EWT_MAX", (int64)EWeaponType::EWT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// WEAPON\n////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "EWT_GrenadeLauncher.DisplayName", "GrenadeLauncher" },
				{ "EWT_GrenadeLauncher.Name", "EWeaponType::EWT_GrenadeLauncher" },
				{ "EWT_MAX.Hidden", "" },
				{ "EWT_MAX.Name", "EWeaponType::EWT_MAX" },
				{ "EWT_Pistol.DisplayName", "Pistol" },
				{ "EWT_Pistol.Name", "EWeaponType::EWT_Pistol" },
				{ "EWT_Rifle.DisplayName", "Rifle" },
				{ "EWT_Rifle.Name", "EWeaponType::EWT_Rifle" },
				{ "EWT_Shotgun.DisplayName", "Shotgun" },
				{ "EWT_Shotgun.Name", "EWeaponType::EWT_Shotgun" },
				{ "ModuleRelativePath", "Public/Library/StorageEnumLibrary.h" },
				{ "ToolTip", "WEAPON" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EWeaponType",
				"EWeaponType",
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
	static UEnum* EItemRarity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemRarity, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemRarity"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemRarity>()
	{
		return EItemRarity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemRarity(EItemRarity_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EItemRarity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EItemRarity_Hash() { return 455429196U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EItemRarity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemRarity"), 0, Get_Z_Construct_UEnum_InventorySystem_EItemRarity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemRarity::EIR_Damaged", (int64)EItemRarity::EIR_Damaged },
				{ "EItemRarity::EIR_Common", (int64)EItemRarity::EIR_Common },
				{ "EItemRarity::EIR_Uncommon", (int64)EItemRarity::EIR_Uncommon },
				{ "EItemRarity::EIR_Rare", (int64)EItemRarity::EIR_Rare },
				{ "EItemRarity::EIR_Legendary", (int64)EItemRarity::EIR_Legendary },
				{ "EItemRarity::EIR_MAX", (int64)EItemRarity::EIR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EIR_Common.DisplayName", "Common" },
				{ "EIR_Common.Name", "EItemRarity::EIR_Common" },
				{ "EIR_Damaged.DisplayName", "Damaged" },
				{ "EIR_Damaged.Name", "EItemRarity::EIR_Damaged" },
				{ "EIR_Legendary.DisplayName", "Legendary" },
				{ "EIR_Legendary.Name", "EItemRarity::EIR_Legendary" },
				{ "EIR_MAX.Hidden", "" },
				{ "EIR_MAX.Name", "EItemRarity::EIR_MAX" },
				{ "EIR_Rare.DisplayName", "Rare" },
				{ "EIR_Rare.Name", "EItemRarity::EIR_Rare" },
				{ "EIR_Uncommon.DisplayName", "Uncommon" },
				{ "EIR_Uncommon.Name", "EItemRarity::EIR_Uncommon" },
				{ "ModuleRelativePath", "Public/Library/StorageEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EItemRarity",
				"EItemRarity",
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
	static UEnum* EEquipPart_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EEquipPart, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EEquipPart"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EEquipPart>()
	{
		return EEquipPart_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipPart(EEquipPart_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EEquipPart"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EEquipPart_Hash() { return 705800136U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EEquipPart()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipPart"), 0, Get_Z_Construct_UEnum_InventorySystem_EEquipPart_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquipPart::EEP_Head", (int64)EEquipPart::EEP_Head },
				{ "EEquipPart::EEP_Tors", (int64)EEquipPart::EEP_Tors },
				{ "EEquipPart::EEP_Backpack", (int64)EEquipPart::EEP_Backpack },
				{ "EEquipPart::EEP_MAX", (int64)EEquipPart::EEP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EEP_Backpack.DisplayName", "Backpack" },
				{ "EEP_Backpack.Name", "EEquipPart::EEP_Backpack" },
				{ "EEP_Head.DisplayName", "Head" },
				{ "EEP_Head.Name", "EEquipPart::EEP_Head" },
				{ "EEP_MAX.Hidden", "" },
				{ "EEP_MAX.Name", "EEquipPart::EEP_MAX" },
				{ "EEP_Tors.DisplayName", "Tors" },
				{ "EEP_Tors.Name", "EEquipPart::EEP_Tors" },
				{ "ModuleRelativePath", "Public/Library/StorageEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EEquipPart",
				"EEquipPart",
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
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemType, Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemType"));
		}
		return Singleton;
	}
	template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/InventorySystem"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InventorySystem_EItemType_Hash() { return 153329763U; }
	UEnum* Z_Construct_UEnum_InventorySystem_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InventorySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_InventorySystem_EItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemType::EIT_Default", (int64)EItemType::EIT_Default },
				{ "EItemType::EIT_Weapon", (int64)EItemType::EIT_Weapon },
				{ "EItemType::EIT_Equipment", (int64)EItemType::EIT_Equipment },
				{ "EItemType::EIT_Recipe", (int64)EItemType::EIT_Recipe },
				{ "EItemType::EIT_Money", (int64)EItemType::EIT_Money },
				{ "EItemType::EIT_Modification", (int64)EItemType::EIT_Modification },
				{ "EItemType::EIT_Bullet", (int64)EItemType::EIT_Bullet },
				{ "EItemType::EIT_MAX", (int64)EItemType::EIT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EIT_Bullet.DisplayName", "Bullet" },
				{ "EIT_Bullet.Name", "EItemType::EIT_Bullet" },
				{ "EIT_Default.DisplayName", "Default" },
				{ "EIT_Default.Name", "EItemType::EIT_Default" },
				{ "EIT_Equipment.DisplayName", "Equipment" },
				{ "EIT_Equipment.Name", "EItemType::EIT_Equipment" },
				{ "EIT_MAX.Hidden", "" },
				{ "EIT_MAX.Name", "EItemType::EIT_MAX" },
				{ "EIT_Modification.DisplayName", "Modification" },
				{ "EIT_Modification.Name", "EItemType::EIT_Modification" },
				{ "EIT_Money.DisplayName", "Money" },
				{ "EIT_Money.Name", "EItemType::EIT_Money" },
				{ "EIT_Recipe.DisplayName", "Recipe" },
				{ "EIT_Recipe.Name", "EItemType::EIT_Recipe" },
				{ "EIT_Weapon.DisplayName", "Weapon" },
				{ "EIT_Weapon.Name", "EItemType::EIT_Weapon" },
				{ "ModuleRelativePath", "Public/Library/StorageEnumLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
				nullptr,
				"EItemType",
				"EItemType",
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
