#include "BaseStorageComponent.h"

#include "ItemRenderImageActor.h"
#include "Items/BaseStorageItemPDataAsset.h"

UBaseStorageComponent::UBaseStorageComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UBaseStorageComponent::BeginPlay()
{
	Super::BeginPlay();
}

UTextureRenderTarget2D* UBaseStorageComponent::RenderItemImage(UBaseStorageItemPDataAsset* ItemDA)
{
	if(!RenderActor)
	{
		const FVector Location(0.0f, 0.0f, -1000.0f);
		const FRotator Rotation(0.0f, 0.0f, 0.0f);
		RenderActor = GetWorld()->SpawnActor<AItemRenderImageActor>(ItemRenderImageActor, Location, Rotation); 
	}
	return RenderActor->RenderItem(ItemDA);
}

void UBaseStorageComponent::AddItem(FDroppedItem Item, bool& bItemAdded, UBaseStorageItemObject*& AddedItem)
{
	UE_LOG(LogTemp, Display, TEXT("FNAddItemNotConfigured"));
}

void UBaseStorageComponent::RemoveItem(UBaseStorageItemObject* Item, bool& bItemRemoved)
{

}

UBaseStorageItemObject* UBaseStorageComponent::CreateItem(FStorageItem ItemInfo, bool& ItemCreated)
{
	if (!ItemInfo.ItemDataAsset)
	{
		ItemCreated = false;
		return nullptr;
	}
	UBaseStorageItemObject* ObjectItem;
	
	if(ItemInfo.ItemDataAsset->IsStorage)
	{
		ObjectItem = NewObject<UStorage_StorageItemObject>();
	}
	else
	{
		ObjectItem = NewObject<UBaseStorageItemObject>();
	}
	
	//Set Variables In Object
	ObjectItem->ItemParams = ItemInfo;
	ObjectItem->ItemOwner = GetOwner();
	ObjectItem->ItemStorage = this;
	
	ItemCreated = true;
	return ObjectItem;
}


