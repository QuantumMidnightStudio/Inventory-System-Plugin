#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

UENUM(BlueprintType)
enum class EInteractType : uint8
{
	EIT_Item UMETA(DisplayName = "Item"),
	EIT_Chest UMETA(DisplayName = "Chest"),
	EIT_Bot UMETA(DisplayName = "Bot"),

	EIT_MAX UMETA(Hidden)
}; 

class INVENTORYSYSTEM_API IInteractInterface
{
	GENERATED_BODY()

public:
	virtual bool Interactable(EInteractType& InteractType);
};
