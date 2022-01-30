#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "Library/StorageStructLibrary.h"
#include "Items/BaseStorageItemObject.h"
#include "EquipmentSlotWidget.generated.h"

UCLASS()
class INVENTORYSYSTEM_API UEquipmentSlotWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	EEquipPart EquipPart = EEquipPart::EEP_Head;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn="true"))
	UTexture2D* EmptySlotImage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DaD", meta = (ExposeOnSpawn="true"))
	TSubclassOf<class UItemStorageSlotWidget> StorageItemWidgetForDaD;
	
	UPROPERTY()
	UBaseStorageItemObject* ItemInSlot;

	UPROPERTY(meta = (BindWidget))
	USizeBox* SBSlotSize;
	
	UPROPERTY(meta = (BindWidget))
	USizeBox* SBImageBox;
	
	UPROPERTY(meta = (BindWidget))
	USizeBox* SBItemImage;

	UPROPERTY(meta = (BindWidget))
	UImage* IItemImage;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TItemName;

private:
	UPROPERTY()
	UMaterialInstanceDynamic* ImageDynamicMaterial;
	
	UFUNCTION()
	void UpdateItem(UBaseStorageItemObject* Item);

	UFUNCTION()
	void UnEquipItem(EEquipPart EquipSlot);

	UFUNCTION()
	void SetDefaultText();
	
	UFUNCTION()
	void SetImage();

	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
};
