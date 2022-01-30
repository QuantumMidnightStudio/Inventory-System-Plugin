#pragma once

#include "CoreMinimal.h"
#include "UI/Library/UIEnumLibrary.h"
#include "Engine/DataTable.h"
#include "UIStructLibrary.generated.h"

USTRUCT(BlueprintType)
struct FDT_Widget : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID = -1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> Widget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUIInput Input;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseLock;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool LockMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideHUD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideOtherWidgets;
};

USTRUCT(BlueprintType)
struct FCreatedWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UUserWidget* Widget;
};