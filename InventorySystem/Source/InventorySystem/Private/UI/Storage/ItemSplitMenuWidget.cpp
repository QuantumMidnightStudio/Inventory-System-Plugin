#include "UI/Storage/ItemSplitMenuWidget.h"

#include "PlayerStorageComponent.h"
#include "Components/Button.h"
#include "Components/Slider.h"
#include "Components/TextBlock.h"


void UItemSplitMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BAccept->OnClicked.AddDynamic(this, &UItemSplitMenuWidget::Accept);
	BCancel->OnClicked.AddDynamic(this, &UItemSplitMenuWidget::Cancel);
	SItemCount->OnValueChanged.AddDynamic(this, &UItemSplitMenuWidget::UpdateSliderValue);
	
	TMaxCount->SetText(FText::FromString(FString::FromInt(SplitItem->ItemParams.Count)));
	TCurrentCount->SetText(TMaxCount->GetText());
	SItemCount->SetValue((float)SplitItem->ItemParams.Count);
	SItemCount->SetMaxValue((float)SplitItem->ItemParams.Count);
}

void UItemSplitMenuWidget::Accept()
{
	UPlayerStorageComponent* StorageComponent = Cast<UPlayerStorageComponent>(GetOwningPlayerPawn()->GetComponentByClass(UPlayerStorageComponent::StaticClass()));
	if(!StorageComponent) return;
	
	bool ItemAdded;
	StorageComponent->SplitItem(SplitItem, (int32)SItemCount->GetValue(), SecondItemLocation, SecondItemStorage, ItemAdded);
	Cancel();
}

void UItemSplitMenuWidget::Cancel()
{
	RemoveFromParent();
}

void UItemSplitMenuWidget::UpdateSliderValue(float Value)
{
	//TCurrentCount->SetText(FText::FromString(FString::SanitizeFloat(FMath::GridSnap(Value, 1.0f))));
	TCurrentCount->SetText(FText::FromString(FString::FromInt((int32)Value)));
}
