#include "Items/BaseStorageItemObject.h"

#include "Items/BaseStorageItemPDataAsset.h"
#include "Items/Storage_StorageItemObject.h"

void UBaseStorageItemObject::GetItemLocation(FItemLocation& StartItemLocation, FItemLocation& EndItemLocation)
{
	StartItemLocation = ItemParams.Location;

	const int32 SizeX = ItemParams.ItemDataAsset->ItemSizeX-1;
	const int32 SizeY = ItemParams.ItemDataAsset->ItemSizeY-1;

	if(ItemParams.Rotate)
	{
		EndItemLocation = {StartItemLocation.RowX + SizeY, StartItemLocation.ColumnY + SizeX};
	}
	else
	{
		EndItemLocation = {StartItemLocation.RowX + SizeX, StartItemLocation.ColumnY + SizeY};
	}
}

void UBaseStorageItemObject::AddCount(int32 Count)
{
	ItemParams.Count += Count;
	ItemParams.ParentStorage->OnItemCountUpdated.Broadcast(this);
}

void UBaseStorageItemObject::RemoveCount(int32 Count)
{
	ItemParams.Count -= Count;
	ItemParams.ParentStorage->OnItemCountUpdated.Broadcast(this);
}
