#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Library/StorageStructLibrary.h"
#include "BaseStorageSlotWidget.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UBaseStorageSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float SlotSize = 100.0f;

	UPROPERTY()
	class UStorageWidget* ParentStorageWidget;
	
	UPROPERTY()
	FItemLocation SlotLocation = {0,0};

protected:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class USizeBox* SBSlotSize;
};
