#pragma once

#include "CoreMinimal.h"
#include "Items/BaseStorageItemPDataAsset.h"
#include "WeaponStorageItemPDataAsset.generated.h"

class USoundCue;
class UAnimMontage;

UCLASS()
class INVENTORYSYSTEM_API UWeaponStorageItemPDataAsset : public UBaseStorageItemPDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWeaponType WeaponType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings")
	float Damage = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings")
	float VerticalRecoil = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings")
	float HorizontalRecoil = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings")
	float RateOfFire = 0.2f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraShakeBase* CameraShake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ThirdPersonSocketForAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FirstPersonSocketForAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName UnHolsterSocket;

// WeaponSettings|SelectiveFire
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SelectiveFire")
	bool SemiAuto;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SelectiveFire")
	bool FullAuto;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SelectiveFire")
	bool ReloadAfterFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SelectiveFire")
	bool BurstMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SelectiveFire", meta = (EditCondition = "BurstMode"))
	int32 BurstMode_NumberOfShorts = 2;

	// WeaponSettings|SFX

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SReload;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SReloadEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SHolster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SUnHolster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SNoAmmo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SFireSuppressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SReloadWithoutMag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|SFX")
	USoundCue* SReloadEmptyWithoutMag;

// WeaponSettings|LocomotionAnimations

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* AIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* AReadyPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* AAimPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* ACrouchIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* ACrouchReadyPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* ACrouchAimPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* AWalk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	float WalkAnimSpeed = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* AJog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	float JogAnimSpeed = 450.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* ASprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	float SprintAnimSpeed = 600.0f;;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|LocomotionAnimations")
	UAnimSequence* ASprintImpulse;

// WeaponSettings|Animations

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AFireEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AReload;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AReloadEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AReloadWithoutMag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AReloadEmptyWithoutMag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AHolster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AUnHolster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|Animations")
	UAnimMontage* AInspect;

// WeaponSettings|AdditionalAnimations
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|AdditionalAnimations")
	UAnimMontage* AReloadInsert;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|AdditionalAnimations")
	UAnimMontage* AReloadOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|AdditionalAnimations")
	UAnimMontage* AReloadClose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|AdditionalAnimations")
	UAnimMontage* AOtherReload;

// WeaponSettings|FX
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|FX")
	UParticleSystem* MuzzleFX;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponSettings|FX")
	UParticleSystem* ShellEjectFX;
};
