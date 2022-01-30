#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
//#include "Components/Overlay.h"
//#include "Items/BaseStorageItemObject.h"
//#include "UI/Storage/Slot/BaseStorageSlotWidget.h"
#include "Library/StorageStructLibrary.h"
#include "UI/Library/UIEnumLibrary.h"
#include "AdditionalStorageUIsWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAdditioinalUI, class UBaseStorageItemObject*, Item, class UBaseStorageSlotWidget*, SlotWidget, EItemMenuType, Type);

UCLASS()
class INVENTORYSYSTEM_API UAdditionalStorageUIsWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FAdditioinalUI OnOpenAdditionalUI;

	UFUNCTION()
	void OpenAdditionalUI(UBaseStorageItemObject* Item, class UBaseStorageSlotWidget* SlotWidget, EItemMenuType Type);
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	TSubclassOf<class UWindowStorageWidget> WindowStorageWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	TSubclassOf<class UItemSplitMenuWidget> ItemSplitMenuWidget;
	
	UPROPERTY(meta = (BindWidget))
	class UOverlay* OAllContent;

private:
	UFUNCTION()
	void AddWindowStorage(class UStorage_StorageItemObject* Storage);

	UFUNCTION()
	void OpenItemMenu(UBaseStorageItemObject* Item);

	UFUNCTION()
	void ItemSplitMenu(UBaseStorageItemObject* Item, FItemLocation SlotLocation, UStorage_StorageItemObject* SlotStorage);

	UFUNCTION()
	void CloseWindow(UWindowStorageWidget* Widget);

	UPROPERTY()
	TArray<UWindowStorageWidget*> StorageWindows;
};
