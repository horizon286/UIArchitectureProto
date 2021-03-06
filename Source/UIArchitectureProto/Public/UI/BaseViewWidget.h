// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseViewWidget.generated.h"

class UBasePresenter;

UENUM(BlueprintType)
enum class EViewType : uint8
{
	HudElement			UMETA(DisplayName = "HUD"),
	Screen				UMETA(DisplayName = "Screen"),
	Dialog				UMETA(DisplayName = "Dialog")
};

/**
 * 
 */
UCLASS(Blueprintable)
class UIARCHITECTUREPROTO_API UBaseViewWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category="Default Settings")
	bool bDisposableOnClose;

	UPROPERTY(EditDefaultsOnly, Category="Default Settings")
	EViewType ViewType;

public:

	UFUNCTION()
	const bool GetDisposableOnClose();

	UFUNCTION()
	const EViewType GetViewType();

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnOpened();
};
