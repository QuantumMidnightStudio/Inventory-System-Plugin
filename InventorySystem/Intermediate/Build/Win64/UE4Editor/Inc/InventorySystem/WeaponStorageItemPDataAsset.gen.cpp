// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Items/Weapon/WeaponStorageItemPDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponStorageItemPDataAsset() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UWeaponStorageItemPDataAsset_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UWeaponStorageItemPDataAsset();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBaseStorageItemPDataAsset();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
	INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EWeaponType();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UWeaponStorageItemPDataAsset::StaticRegisterNativesUWeaponStorageItemPDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UWeaponStorageItemPDataAsset_NoRegister()
	{
		return UWeaponStorageItemPDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSocketForAttach_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThirdPersonSocketForAttach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonSocketForAttach_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FirstPersonSocketForAttach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnHolsterSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UnHolsterSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SemiAuto_MetaData[];
#endif
		static void NewProp_SemiAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SemiAuto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullAuto_MetaData[];
#endif
		static void NewProp_FullAuto_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FullAuto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAfterFire_MetaData[];
#endif
		static void NewProp_ReloadAfterFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReloadAfterFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstMode_MetaData[];
#endif
		static void NewProp_BurstMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BurstMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstMode_NumberOfShorts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BurstMode_NumberOfShorts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SReload_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SReloadEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SReloadEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SHolster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SHolster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SUnHolster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SUnHolster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SNoAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SNoAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SFireSuppressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SFireSuppressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SReloadWithoutMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SReloadWithoutMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SReloadEmptyWithoutMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SReloadEmptyWithoutMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AReadyPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AReadyPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AAimPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AAimPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ACrouchIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ACrouchIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ACrouchReadyPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ACrouchReadyPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ACrouchAimPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ACrouchAimPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AWalk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AWalk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkAnimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AJog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AJog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JogAnimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JogAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ASprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintAnimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASprintImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ASprintImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AFireEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AFireEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AReload_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AReloadEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AReloadEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AReloadWithoutMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AReloadWithoutMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AReloadEmptyWithoutMag_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AReloadEmptyWithoutMag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AHolster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AHolster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AUnHolster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AUnHolster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AInspect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AInspect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AReloadInsert_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AReloadInsert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AReloadOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AReloadOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AReloadClose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AReloadClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AOtherReload_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AOtherReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShellEjectFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShellEjectFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStorageItemPDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Weapon/WeaponStorageItemPDataAsset.h" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "WeaponStorageItemPDataAsset" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, WeaponType), Z_Construct_UEnum_InventorySystem_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WeaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponSettings" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, Damage), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_VerticalRecoil_MetaData[] = {
		{ "Category", "WeaponSettings" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_VerticalRecoil = { "VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, VerticalRecoil), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_VerticalRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_VerticalRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "WeaponSettings" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, HorizontalRecoil), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_HorizontalRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_HorizontalRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "WeaponSettings" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_CameraShake_MetaData[] = {
		{ "Category", "WeaponStorageItemPDataAsset" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_CameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_CameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ThirdPersonSocketForAttach_MetaData[] = {
		{ "Category", "WeaponStorageItemPDataAsset" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ThirdPersonSocketForAttach = { "ThirdPersonSocketForAttach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, ThirdPersonSocketForAttach), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ThirdPersonSocketForAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ThirdPersonSocketForAttach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FirstPersonSocketForAttach_MetaData[] = {
		{ "Category", "WeaponStorageItemPDataAsset" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FirstPersonSocketForAttach = { "FirstPersonSocketForAttach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, FirstPersonSocketForAttach), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FirstPersonSocketForAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FirstPersonSocketForAttach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_UnHolsterSocket_MetaData[] = {
		{ "Category", "WeaponStorageItemPDataAsset" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_UnHolsterSocket = { "UnHolsterSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, UnHolsterSocket), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_UnHolsterSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_UnHolsterSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SemiAuto_MetaData[] = {
		{ "Category", "WeaponSettings|SelectiveFire" },
		{ "Comment", "// WeaponSettings|SelectiveFire\n" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
		{ "ToolTip", "WeaponSettings|SelectiveFire" },
	};
#endif
	void Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SemiAuto_SetBit(void* Obj)
	{
		((UWeaponStorageItemPDataAsset*)Obj)->SemiAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SemiAuto = { "SemiAuto", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponStorageItemPDataAsset), &Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SemiAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SemiAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SemiAuto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FullAuto_MetaData[] = {
		{ "Category", "WeaponSettings|SelectiveFire" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FullAuto_SetBit(void* Obj)
	{
		((UWeaponStorageItemPDataAsset*)Obj)->FullAuto = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FullAuto = { "FullAuto", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponStorageItemPDataAsset), &Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FullAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FullAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FullAuto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ReloadAfterFire_MetaData[] = {
		{ "Category", "WeaponSettings|SelectiveFire" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ReloadAfterFire_SetBit(void* Obj)
	{
		((UWeaponStorageItemPDataAsset*)Obj)->ReloadAfterFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ReloadAfterFire = { "ReloadAfterFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponStorageItemPDataAsset), &Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ReloadAfterFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ReloadAfterFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ReloadAfterFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_MetaData[] = {
		{ "Category", "WeaponSettings|SelectiveFire" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_SetBit(void* Obj)
	{
		((UWeaponStorageItemPDataAsset*)Obj)->BurstMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode = { "BurstMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponStorageItemPDataAsset), &Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_NumberOfShorts_MetaData[] = {
		{ "Category", "WeaponSettings|SelectiveFire" },
		{ "EditCondition", "BurstMode" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_NumberOfShorts = { "BurstMode_NumberOfShorts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, BurstMode_NumberOfShorts), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_NumberOfShorts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_NumberOfShorts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFire_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "Comment", "// WeaponSettings|SFX\n" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
		{ "ToolTip", "WeaponSettings|SFX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFire = { "SFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SFire), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReload_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReload = { "SReload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SReload), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmpty_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmpty = { "SReloadEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SReloadEmpty), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SHolster_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SHolster = { "SHolster", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SHolster), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SHolster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SHolster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SUnHolster_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SUnHolster = { "SUnHolster", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SUnHolster), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SUnHolster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SUnHolster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SNoAmmo_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SNoAmmo = { "SNoAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SNoAmmo), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SNoAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SNoAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFireSuppressed_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFireSuppressed = { "SFireSuppressed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SFireSuppressed), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFireSuppressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFireSuppressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadWithoutMag_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadWithoutMag = { "SReloadWithoutMag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SReloadWithoutMag), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadWithoutMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadWithoutMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmptyWithoutMag_MetaData[] = {
		{ "Category", "WeaponSettings|SFX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmptyWithoutMag = { "SReloadEmptyWithoutMag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SReloadEmptyWithoutMag), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmptyWithoutMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmptyWithoutMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AIdle_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "Comment", "// WeaponSettings|LocomotionAnimations\n" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
		{ "ToolTip", "WeaponSettings|LocomotionAnimations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AIdle = { "AIdle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AIdle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReadyPose_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReadyPose = { "AReadyPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AReadyPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReadyPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReadyPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AAimPose_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AAimPose = { "AAimPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AAimPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AAimPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AAimPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchIdle_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchIdle = { "ACrouchIdle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, ACrouchIdle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchReadyPose_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchReadyPose = { "ACrouchReadyPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, ACrouchReadyPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchReadyPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchReadyPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchAimPose_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchAimPose = { "ACrouchAimPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, ACrouchAimPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchAimPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchAimPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AWalk_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AWalk = { "AWalk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AWalk), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AWalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AWalk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WalkAnimSpeed_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WalkAnimSpeed = { "WalkAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, WalkAnimSpeed), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WalkAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WalkAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AJog_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AJog = { "AJog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AJog), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AJog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AJog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_JogAnimSpeed_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_JogAnimSpeed = { "JogAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, JogAnimSpeed), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_JogAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_JogAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprint_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprint = { "ASprint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, ASprint), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SprintAnimSpeed_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SprintAnimSpeed = { "SprintAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, SprintAnimSpeed), METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SprintAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SprintAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprintImpulse_MetaData[] = {
		{ "Category", "WeaponSettings|LocomotionAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprintImpulse = { "ASprintImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, ASprintImpulse), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprintImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprintImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFire_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "Comment", "// WeaponSettings|Animations\n" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
		{ "ToolTip", "WeaponSettings|Animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFire = { "AFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AFire), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFireEmpty_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFireEmpty = { "AFireEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AFireEmpty), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFireEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFireEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReload_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReload = { "AReload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmpty_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmpty = { "AReloadEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AReloadEmpty), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadWithoutMag_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadWithoutMag = { "AReloadWithoutMag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AReloadWithoutMag), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadWithoutMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadWithoutMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmptyWithoutMag_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmptyWithoutMag = { "AReloadEmptyWithoutMag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AReloadEmptyWithoutMag), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmptyWithoutMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmptyWithoutMag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AHolster_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AHolster = { "AHolster", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AHolster), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AHolster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AHolster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AUnHolster_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AUnHolster = { "AUnHolster", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AUnHolster), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AUnHolster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AUnHolster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AInspect_MetaData[] = {
		{ "Category", "WeaponSettings|Animations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AInspect = { "AInspect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AInspect), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AInspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AInspect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadInsert_MetaData[] = {
		{ "Category", "WeaponSettings|AdditionalAnimations" },
		{ "Comment", "// WeaponSettings|AdditionalAnimations\n" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
		{ "ToolTip", "WeaponSettings|AdditionalAnimations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadInsert = { "AReloadInsert", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AReloadInsert), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadInsert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadInsert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadOpen_MetaData[] = {
		{ "Category", "WeaponSettings|AdditionalAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadOpen = { "AReloadOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AReloadOpen), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadClose_MetaData[] = {
		{ "Category", "WeaponSettings|AdditionalAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadClose = { "AReloadClose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AReloadClose), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AOtherReload_MetaData[] = {
		{ "Category", "WeaponSettings|AdditionalAnimations" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AOtherReload = { "AOtherReload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, AOtherReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AOtherReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AOtherReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_MuzzleFX_MetaData[] = {
		{ "Category", "WeaponSettings|FX" },
		{ "Comment", "// WeaponSettings|FX\n" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
		{ "ToolTip", "WeaponSettings|FX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_MuzzleFX = { "MuzzleFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, MuzzleFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_MuzzleFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_MuzzleFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ShellEjectFX_MetaData[] = {
		{ "Category", "WeaponSettings|FX" },
		{ "ModuleRelativePath", "Public/Items/Weapon/WeaponStorageItemPDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ShellEjectFX = { "ShellEjectFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponStorageItemPDataAsset, ShellEjectFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ShellEjectFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ShellEjectFX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_VerticalRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_HorizontalRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_CameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ThirdPersonSocketForAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FirstPersonSocketForAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_UnHolsterSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SemiAuto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_FullAuto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ReloadAfterFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_BurstMode_NumberOfShorts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SHolster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SUnHolster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SNoAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SFireSuppressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadWithoutMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SReloadEmptyWithoutMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReadyPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AAimPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchReadyPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ACrouchAimPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AWalk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_WalkAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AJog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_JogAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_SprintAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ASprintImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AFireEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadWithoutMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadEmptyWithoutMag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AHolster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AUnHolster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AInspect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadInsert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AReloadClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_AOtherReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_MuzzleFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::NewProp_ShellEjectFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponStorageItemPDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::ClassParams = {
		&UWeaponStorageItemPDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponStorageItemPDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponStorageItemPDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponStorageItemPDataAsset, 1927883999);
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UWeaponStorageItemPDataAsset>()
	{
		return UWeaponStorageItemPDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponStorageItemPDataAsset(Z_Construct_UClass_UWeaponStorageItemPDataAsset, &UWeaponStorageItemPDataAsset::StaticClass, TEXT("/Script/InventorySystem"), TEXT("UWeaponStorageItemPDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponStorageItemPDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
