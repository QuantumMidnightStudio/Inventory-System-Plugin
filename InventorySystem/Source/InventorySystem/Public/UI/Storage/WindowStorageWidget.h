#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WindowStorageWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCloseWindow, class UWindowStorageWidget*, Widget);

UCLASS()
class INVENTORYSYSTEM_API UWindowStorageWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	
public:
	UPROPERTY(BlueprintAssignable)
	FCloseWindow OnCloseWindow;
	
	UPROPERTY(meta = (BindWidget))
	class UStorageWidget* WStorage;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TStorageName;
	
protected:
	UPROPERTY(meta = (BindWidget))
	class UButton* CloseWindowButton;
	
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	
private:
	bool MouseBtnDown = false;
	FVector2D ClickLoc;

	UFUNCTION()
	void CloseWindow();
};
