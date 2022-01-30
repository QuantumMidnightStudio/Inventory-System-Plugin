#pragma once

#include "CoreMinimal.h"
#include "UIEnumLibrary.generated.h"

UENUM(BlueprintType)
enum class EUIInput : uint8
{
	EUI_Game UMETA(DisplayName = "Game"),
	EUI_OnlyWidget UMETA(DisplayName = "OnlyWidget"),
	EUI_WidgetAndGame UMETA(DisplayName = "WidgetAndGame"),

	EUI_MAX UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EItemMenuType : uint8
{
	EMT_Window UMETA(DisplayName = "Window"),
	EMT_ActionMenu UMETA(DisplayName = "ActionMenu"),
	EMT_ItemSplitMenu UMETA(DisplayName = "ItemSplitMenu"),

	EMT_MAX UMETA(Hidden)
};