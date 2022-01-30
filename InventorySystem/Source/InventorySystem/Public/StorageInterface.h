#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Library/StorageStructLibrary.h"
#include "Items/Storage_StorageItemObject.h"
#include "StorageInterface.generated.h"


UINTERFACE(MinimalAPI)
class UStorageInterface : public UInterface
{
	GENERATED_BODY()
};

class INVENTORYSYSTEM_API IStorageInterface
{
	GENERATED_BODY()

public:
	virtual void AddItem(FDroppedItem Item, bool& ItemAdded, UBaseStorageItemObject*& AddedItem);
	virtual void RemoveItem(UBaseStorageItemObject* Item, bool& ItemRemoved);
};
