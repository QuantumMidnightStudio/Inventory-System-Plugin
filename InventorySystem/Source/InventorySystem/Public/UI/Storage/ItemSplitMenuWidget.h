#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Library/StorageStructLibrary.h"
#include "ItemSplitMenuWidget.generated.h"


UCLASS()
class INVENTORYSYSTEM_API UItemSplitMenuWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	
public:
	UPROPERTY(meta = (BindWidget))
	class USlider* SItemCount;
	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TCurrentCount;
	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TMaxCount;

	UPROPERTY(meta = (BindWidget))
	class UButton* BAccept;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* BCancel;

//=================================================================================================================
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplitItem", meta = (ExposeOnSpawn="true"))
	class UBaseStorageItemObject* SplitItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplitItem", meta = (ExposeOnSpawn="true"))
	FItemLocation SecondItemLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplitItem", meta = (ExposeOnSpawn="true"))
	class UStorage_StorageItemObject* SecondItemStorage;

//=================================================================================================================
	
private:
	UFUNCTION()
	void Accept();

	UFUNCTION()
	void Cancel();

	UFUNCTION()
	void UpdateSliderValue(float Value);
};
