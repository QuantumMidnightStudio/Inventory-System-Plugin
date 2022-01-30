#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStoragesMenuWidget.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UPlayerStoragesMenuWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	
protected:
	UPROPERTY(meta = (BindWidget))
	class UPlayerStorageWidget* PlayerStorages;

	UPROPERTY(meta = (BindWidget))
	class UAdditionalStorageUIsWidget* AdditionalStorageMenu;
};
