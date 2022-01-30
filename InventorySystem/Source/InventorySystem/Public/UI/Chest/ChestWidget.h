#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChestWidget.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UChestWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	
public:
	UPROPERTY(meta = (BindWidget))
	class UStorageWidget* ChestStorageWidget;

	UPROPERTY(meta = (BindWidget))
	class UPlayerStorageWidget* PlayerStorageWidget;

	UPROPERTY(meta = (BindWidget))
	class UAdditionalStorageUIsWidget* AdditionalStorageMenu;

	UFUNCTION()
	void UpdateChestWidget(class AChestActor* Chest);
};
