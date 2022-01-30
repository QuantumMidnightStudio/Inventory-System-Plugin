#include "UI/Storage/WindowStorageWidget.h"
#include "Components/Button.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/TextBlock.h"
#include "Items/BaseStorageItemPDataAsset.h"
#include "UI/Storage/StorageWidget.h"

void UWindowStorageWidget::NativeConstruct()
{
	Super::NativeConstruct();
	TStorageName->SetText(WStorage->StorageItem->ItemParams.ItemDataAsset->ItemName);
	CloseWindowButton->OnClicked.AddDynamic(this, &UWindowStorageWidget::CloseWindow);
}

FReply UWindowStorageWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	MouseBtnDown = true;
	ClickLoc = InGeometry.AbsoluteToLocal(InMouseEvent.GetScreenSpacePosition());
	FEventReply DragIfPressedEvent = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
	FEventReply CaptureMouseEvent = UWidgetBlueprintLibrary::CaptureMouse(DragIfPressedEvent, this);
	return CaptureMouseEvent.NativeReply;
}

FReply UWindowStorageWidget::NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	MouseBtnDown = false;
	FEventReply DragIfPressedEvent = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
	FEventReply ReleaseMouseEvent = UWidgetBlueprintLibrary::ReleaseMouseCapture(DragIfPressedEvent);
	
	return ReleaseMouseEvent.NativeReply;
}

FReply UWindowStorageWidget::NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if(!MouseBtnDown) return Super::NativeOnMouseMove(InGeometry, InMouseEvent);
	const FVector2D InLoc =
		(GetParent()->GetTickSpaceGeometry().AbsoluteToLocal(InMouseEvent.GetScreenSpacePosition()) - GetParent()->GetTickSpaceGeometry().GetLocalSize() / 2.0f) - (ClickLoc - GetDesiredSize() / 2.0f);
	
	const auto LocalSize = GetParent()->GetTickSpaceGeometry().GetLocalSize();
	const FVector2D Min = ((LocalSize / 2.0f) - (GetDesiredSize() / 2.0f)) * -1.0f;
	const FVector2D Max = LocalSize - ((Min * -1.0f) + GetDesiredSize());
	const FVector2D Loc = {FMath::Clamp(InLoc.X, Min.X, Max.X), FMath::Clamp(InLoc.Y, Min.Y, Max.Y)};
	
	SetRenderTranslation(Loc);
	return Super::NativeOnMouseMove(InGeometry, InMouseEvent);
}

void UWindowStorageWidget::CloseWindow()
{
	OnCloseWindow.Broadcast(this);
}
