#include "UI/Chest/ChestWidget.h"

#include "Chest/ChestActor.h"
#include "UI/Storage/AdditionalStorageUIsWidget.h"
#include "UI/Storage/PlayerStorageWidget.h"
#include "UI/Storage/StorageWidget.h"

void UChestWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	ChestStorageWidget->OnOpenAdditionalUI.AddDynamic(AdditionalStorageMenu, &UAdditionalStorageUIsWidget::OpenAdditionalUI);
	PlayerStorageWidget->OnOpenAdditionalUI.AddDynamic(AdditionalStorageMenu, &UAdditionalStorageUIsWidget::OpenAdditionalUI);
	
	const auto PlayerStorage = Cast<UPlayerStorageComponent>(GetOwningPlayerPawn()->GetComponentByClass(UPlayerStorageComponent::StaticClass()));
	if(!PlayerStorage) return;
	PlayerStorage->OnChangeInteractedChest.AddDynamic(this, &UChestWidget::UpdateChestWidget);
	if(PlayerStorage->InteractedChest)
	{
		UpdateChestWidget(PlayerStorage->InteractedChest);
	}
}

void UChestWidget::UpdateChestWidget(AChestActor* Chest)
{
	if(ChestStorageWidget->StorageItem == Chest->Inventory->StorageItemObject) return;
	
	ChestStorageWidget->StorageItem = Chest->Inventory->StorageItemObject;
	ChestStorageWidget->SetInfo();
}
