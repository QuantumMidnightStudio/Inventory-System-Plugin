#include "UI/Storage/AdditionalStorageUIsWidget.h"
#include "UI/Storage/ItemSplitMenuWidget.h"
#include "UI/Storage/WindowStorageWidget.h"
#include "Components/OverlaySlot.h"
#include "UI/Storage/StorageWidget.h"

void UAdditionalStorageUIsWidget::OpenAdditionalUI(UBaseStorageItemObject* Item, UBaseStorageSlotWidget* SlotWidget, EItemMenuType Type)
{
	switch (Type)
	{
	default:
		break;
	case EItemMenuType::EMT_Window:
		AddWindowStorage(Cast<UStorage_StorageItemObject>(Item));
		break;
	case EItemMenuType::EMT_ActionMenu:
		OpenItemMenu(Item);
		break;
	case EItemMenuType::EMT_ItemSplitMenu:
		ItemSplitMenu(Item, SlotWidget->SlotLocation, SlotWidget->ParentStorageWidget->StorageItem);
		break;
	}
}

void UAdditionalStorageUIsWidget::AddWindowStorage(UStorage_StorageItemObject* Storage)
{
	if(!Storage) return;

	for(const UWindowStorageWidget* Window : StorageWindows)
	{
		if(Window->WStorage->StorageItem == Storage) return;
	}
	
	UWindowStorageWidget* CurrentWidget = Cast<UWindowStorageWidget>(CreateWidget<UUserWidget>(GetWorld(), WindowStorageWidget));
	CurrentWidget->OnCloseWindow.AddDynamic(this, &UAdditionalStorageUIsWidget::CloseWindow);
	
	CurrentWidget->WStorage->StorageItem = Storage;
	
	UOverlaySlot* OverlaySlot = OAllContent->AddChildToOverlay(CurrentWidget);
	OverlaySlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
	OverlaySlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Center);
	
	CurrentWidget->WStorage->OnOpenAdditionalUI.AddDynamic(this, &UAdditionalStorageUIsWidget::OpenAdditionalUI);
	StorageWindows.Add(CurrentWidget);
}

void UAdditionalStorageUIsWidget::OpenItemMenu(UBaseStorageItemObject* Item)
{
	
}

void UAdditionalStorageUIsWidget::ItemSplitMenu(UBaseStorageItemObject* Item, FItemLocation SlotLocation, UStorage_StorageItemObject* SlotStorage)
{
	UItemSplitMenuWidget* CurrentWidget = Cast<UItemSplitMenuWidget>(CreateWidget<UUserWidget>(GetWorld(), ItemSplitMenuWidget));

	CurrentWidget->SplitItem = Item;
	CurrentWidget->SecondItemLocation = SlotLocation;
	CurrentWidget->SecondItemStorage = SlotStorage;
	
	UOverlaySlot* OverlaySlot = OAllContent->AddChildToOverlay(CurrentWidget);
	OverlaySlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
	OverlaySlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Fill);
}

void UAdditionalStorageUIsWidget::CloseWindow(UWindowStorageWidget* Widget)
{
	StorageWindows.Remove(Widget);
	Widget->RemoveFromParent();
}
