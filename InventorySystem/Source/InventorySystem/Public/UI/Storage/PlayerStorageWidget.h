#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI/Storage/StorageWidget.h"
#include "PlayerStorageWidget.generated.h"


class UBaseStorageItemObject;
class UStorageWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAdditioinalUIStage2, UBaseStorageItemObject*, Item, UBaseStorageSlotWidget*, SlotWidget, EItemMenuType, Type);

UCLASS()
class INVENTORYSYSTEM_API UPlayerStorageWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintAssignable)
	FAdditioinalUIStage2 OnOpenAdditionalUI;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	TSubclassOf<UStorageWidget> StorageWidget;
protected:
	UPROPERTY(meta = (BindWidget))
	class UScrollBox* SBStorages;

private:
	UFUNCTION()
	void StorageUIBroadcast(UBaseStorageItemObject* Item, UBaseStorageSlotWidget* SlotWidget, EItemMenuType Type);
	
	UFUNCTION()
	void AddStorageWidget(UBaseStorageItemObject* Item);

	UFUNCTION()
	void RemoveStorageWidget(EEquipPart EquipSlot);

	UPROPERTY()
	TArray<UStorageWidget*> StoragesWidgets;
};
