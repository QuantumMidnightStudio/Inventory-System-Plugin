#include "UI/Storage/PlayerStorageWidget.h"

#include "Components/ScrollBox.h"
#include "PlayerStorageComponent.h"
#include "Items/EquipmentStorageItemPDataAsset.h"

void UPlayerStorageWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	UPlayerStorageComponent* StorageComponent = Cast<UPlayerStorageComponent>(GetOwningPlayerPawn()->GetComponentByClass(UPlayerStorageComponent::StaticClass()));
	
	StorageComponent->OnEquipItem.AddDynamic(this, &UPlayerStorageWidget::AddStorageWidget);
	StorageComponent->OnUnEquipItem.AddDynamic(this, &UPlayerStorageWidget::RemoveStorageWidget);
	
	for (const EEquipPart EquipPart : TEnumRange<EEquipPart>())
	{
		UBaseStorageItemObject* ItemToEquip = StorageComponent->GetEquipObjectItem(EquipPart);
		if(ItemToEquip)
		{
			AddStorageWidget(ItemToEquip);
		}
	}
}

void UPlayerStorageWidget::AddStorageWidget(UBaseStorageItemObject* Item)
{
	UStorage_StorageItemObject* Storage = Cast<UStorage_StorageItemObject>(Item);
	if(!Storage) return;
	UStorageWidget* CurrentWidget = Cast<UStorageWidget>(CreateWidget<UUserWidget>(GetWorld(), StorageWidget));

	CurrentWidget->StorageItem = Storage;
	CurrentWidget->OnOpenAdditionalUI.AddDynamic(this, &UPlayerStorageWidget::StorageUIBroadcast);
	
	SBStorages->AddChild(CurrentWidget);
	StoragesWidgets.Add(CurrentWidget);
}

void UPlayerStorageWidget::RemoveStorageWidget(EEquipPart EquipSlot)
{
	for (UStorageWidget* WidgetStorage : StoragesWidgets)
	{
		if(EquipSlot == Cast<UEquipmentStorageItemPDataAsset>(WidgetStorage->StorageItem->ItemParams.ItemDataAsset)->EquipPart)
		{
			StoragesWidgets.Remove(WidgetStorage);
			WidgetStorage->RemoveFromParent();
			return;
		}
	}
}

void UPlayerStorageWidget::StorageUIBroadcast(UBaseStorageItemObject* Item, UBaseStorageSlotWidget* SlotWidget, EItemMenuType Type)
{
	OnOpenAdditionalUI.Broadcast(Item,SlotWidget,Type);
}
