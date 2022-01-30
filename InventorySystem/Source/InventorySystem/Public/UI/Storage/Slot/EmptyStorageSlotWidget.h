#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI/Storage/Slot/BaseStorageSlotWidget.h"
#include "EmptyStorageSlotWidget.generated.h"

class UStorageItemObject;
class UStorageWidget;

UCLASS()
class INVENTORYSYSTEM_API UEmptyStorageSlotWidget : public UBaseStorageSlotWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void SelectSlot(bool WrongLocation);

	UFUNCTION()
	void DeselectSlot();
	
protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UBorder* BSelectedSlotBorder;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TPosX;
	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TPosY;

	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	
	virtual void NativeOnDragEnter(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual void NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
};
