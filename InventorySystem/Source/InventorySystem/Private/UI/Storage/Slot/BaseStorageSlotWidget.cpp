#include "UI/Storage/Slot/BaseStorageSlotWidget.h"
#include "Components/SizeBox.h"

void UBaseStorageSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	SBSlotSize->SetWidthOverride(SlotSize);
	SBSlotSize->SetHeightOverride(SlotSize);
}
