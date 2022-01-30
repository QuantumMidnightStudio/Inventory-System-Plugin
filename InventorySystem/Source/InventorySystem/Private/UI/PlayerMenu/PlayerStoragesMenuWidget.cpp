#include "UI/PlayerMenu/PlayerStoragesMenuWidget.h"
#include "UI/Storage/PlayerStorageWidget.h"
#include "UI/Storage/AdditionalStorageUIsWidget.h"

void UPlayerStoragesMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerStorages->OnOpenAdditionalUI.AddDynamic(AdditionalStorageMenu, &UAdditionalStorageUIsWidget::OpenAdditionalUI);
}
