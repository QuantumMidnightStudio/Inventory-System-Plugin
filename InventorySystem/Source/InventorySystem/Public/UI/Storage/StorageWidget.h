#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Overlay.h"
#include "PlayerStorageComponent.h"
#include "Slot/BaseStorageSlotWidget.h"
#include "UI/Library/UIEnumLibrary.h"
#include "StorageWidget.generated.h"

class UEmptyStorageSlotWidget;
class UStorageItemWidget;
class UStorage_StorageItemObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAdditioinalUIStage1, UBaseStorageItemObject*, Item, UBaseStorageSlotWidget*, SlotWidget, EItemMenuType, Type);

UCLASS()
class INVENTORYSYSTEM_API UStorageWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	
public:
	UPROPERTY(BlueprintAssignable)
	FAdditioinalUIStage1 OnOpenAdditionalUI;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	TSubclassOf<class UItemStorageSlotWidget> StorageItemWidget;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	TSubclassOf<class UEmptyStorageSlotWidget> EmptyStorageSlotWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	float StorageSlotSize = 100.0f;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Default", meta = (ExposeOnSpawn="true"))
	UStorage_StorageItemObject* StorageItem;

	UFUNCTION()
	void SetInfo();

	/* Visual */
	UFUNCTION()
	void SelectOccupiedSlots(UDaDStorage* DaD, FItemLocation Location);

	UFUNCTION()
	void DeselectSlots();

private:
	UPROPERTY()
	TArray<UEmptyStorageSlotWidget*> SelectedSlots;
	//==============================================================================
	
protected:
	UPROPERTY(meta = (BindWidget))
	UOverlay* OStorage;
	
	UPROPERTY(meta = (BindWidget))
	class UUniformGridPanel* GPStorageSlots;

	UPROPERTY(meta = (BindWidget))
	UOverlay* OItems;

private:
	UFUNCTION()
	UItemStorageSlotWidget* SearchWidgetByItem(UBaseStorageItemObject* Item);
	
	UFUNCTION()
	void CreateStorage(const int32 SizeX, const int32 SizeY);

	UPROPERTY()
	TArray<UEmptyStorageSlotWidget*> EmptyStorageSlots;

	UPROPERTY()
	TArray<UItemStorageSlotWidget*> StorageItemWidgets;

	UFUNCTION()
	void AddItem(UBaseStorageItemObject* Item);

	UFUNCTION()
	void RelocateItem(UBaseStorageItemObject* Item);

	UFUNCTION()
	void RemoveItem(UBaseStorageItemObject* Item);

	UFUNCTION()
	void ChangeCountItem(UBaseStorageItemObject* Item);

	UPROPERTY()
	UPlayerStorageComponent* StorageComponent;
};
