#pragma once

#include "CoreMinimal.h"
#include "StorageEnumLibrary.generated.h"

UENUM(BlueprintType)
enum class EItemType :uint8
{
	EIT_Default UMETA(DisplayName = "Default"),
	EIT_Weapon UMETA(DisplayName = "Weapon"),
	EIT_Equipment UMETA(DisplayName = "Equipment"),
	EIT_Recipe UMETA(DisplayName = "Recipe"),
	EIT_Money UMETA(DisplayName = "Money"),
	EIT_Modification UMETA(DisplayName = "Modification"),
	EIT_Bullet UMETA(DisplayName = "Bullet"),

	EIT_MAX UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEquipPart : uint8
{
	EEP_Head UMETA(DisplayName = "Head"),
	EEP_Tors UMETA(DisplayName = "Tors"),
	EEP_Backpack UMETA(DisplayName = "Backpack"),

	EEP_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EItemRarity :uint8
{
	EIR_Damaged UMETA(DisplayName = "Damaged"),
	EIR_Common UMETA(DisplayName = "Common"),
	EIR_Uncommon UMETA(DisplayName = "Uncommon"),
	EIR_Rare UMETA(DisplayName = "Rare"),
	EIR_Legendary UMETA(DisplayName = "Legendary"),

	EIR_MAX UMETA(Hidden)
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// WEAPON
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_Rifle UMETA(DisplayName = "Rifle"),
	EWT_Pistol UMETA(DisplayName = "Pistol"),
	EWT_Shotgun UMETA(DisplayName = "Shotgun"),
	EWT_GrenadeLauncher UMETA(DisplayName = "GrenadeLauncher"),

	EWT_MAX UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWeaponReloadType : uint8
{
	EWRT_DefaultReload UMETA(DisplayName = "DefaultReload"),
	EWRT_ReloadEmpty UMETA(DisplayName = "ReloadEmpty"),
	EWRT_ReloadWithoutMag UMETA(DisplayName = "ReloadWithoutMag"),
	EWRT_ReloadEmptyWithoutMag UMETA(DisplayName = "ReloadEmptyWithoutMag"),

	EWRT_MAX UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWeaponComponentType : uint8
{
	EWCT_Grip UMETA(DisplayName = "Grip"),
	EWCT_Magazine UMETA(DisplayName = "Magazine"),
	EWCT_Muzzle UMETA(DisplayName = "Muzzle"),
	EWCT_Sight UMETA(DisplayName = "Sight"),
	EWCT_Stock UMETA(DisplayName = "Stock"),
	EWCT_Forend UMETA(DisplayName = "Forend"),

	EWCT_MAX UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EFireMode : uint8
{
	EFM_Auto UMETA(DisplayName = "Auto"),
	EFM_Single UMETA(DisplayName = "Single"),

	EFM_MAX UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EActiveWeapon : uint8
{
	EAW_Hand UMETA(DisplayName = "Hand"),
	EAW_Spine UMETA(DisplayName = "Spine"),

	EAW_MAX UMETA(Hidden)
};