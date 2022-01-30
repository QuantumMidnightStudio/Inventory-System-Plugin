#include "DaDStorage.h"

#include "Components/SlateWrapperTypes.h"
#include "UI/Storage/Slot/ItemStorageSlotWidget.h"


void UDaDStorage::DragCancelled_Implementation(const FPointerEvent& PointerEvent)
{
	Super::DragCancelled_Implementation(PointerEvent);
	DropWidget();
}

void UDaDStorage::Drop_Implementation(const FPointerEvent& PointerEvent)
{
	Super::Drop_Implementation(PointerEvent);
	DropWidget();
}

void UDaDStorage::DropWidget()
{
	if(ParentWidget)
	{
		ParentWidget->SetVisibility(ESlateVisibility::Visible);
		ParentWidget->SetRenderOpacity(1.0f);
	}
}
