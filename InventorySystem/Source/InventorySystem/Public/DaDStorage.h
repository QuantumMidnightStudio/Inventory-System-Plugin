#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "UI/Storage/Slot/EmptyStorageSlotWidget.h"
#include "DaDStorage.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UDaDStorage : public UDragDropOperation
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Default", meta = (ExposeOnSpawn="true"))
	class UBaseStorageItemObject* Item;

	UPROPERTY(BlueprintReadOnly, Category = "Default", meta = (ExposeOnSpawn="true"))
	class UItemStorageSlotWidget* ParentWidget;

	UPROPERTY(BlueprintReadOnly, Category = "Default", meta = (ExposeOnSpawn="true"))
	class UItemStorageSlotWidget* DaDWidget;

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	class UEmptyStorageSlotWidget* EmptySlotTheMouseHoveringOver;
	
	virtual void DragCancelled_Implementation(const FPointerEvent& PointerEvent) override;
	virtual void Drop_Implementation(const FPointerEvent& PointerEvent) override;
	
	UFUNCTION()
	void DropWidget();
};
