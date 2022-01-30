#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI/Storage/Slot/BaseStorageSlotWidget.h"
#include "ItemStorageSlotWidget.generated.h"

class UBaseStorageItemObject;

UCLASS()
class INVENTORYSYSTEM_API UItemStorageSlotWidget : public UBaseStorageSlotWidget
{
	GENERATED_BODY()
public:
	UPROPERTY()
	bool DragWidget = false;

	UPROPERTY()
	UBaseStorageItemObject* Item;
	
	UFUNCTION()
	void UpdateItemLocation();

	UFUNCTION()
	void UpdateRotation(bool Rotation);

	UFUNCTION()
	void UpdateItemCount();

	UPROPERTY()
	bool VisualRotate;
	
protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class USizeBox* SBImage;
	
	UPROPERTY(meta = (BindWidget))
	class UImage* IItemImage;
	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TCount;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TItemName;

private:
	void SetImage(bool Rotation);

	UPROPERTY()
	UMaterialInstanceDynamic* ImageDynamicMaterial;

	UPROPERTY()
	class UDaDStorage* DragAndDropOperation; 
	
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnMouseButtonDoubleClick(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
};
