// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UI/BaseViewWidget.h"
#include "EscapeMenuView.generated.h"

class UTextBlock;
class UButton;

/**
 * 
 */
UCLASS()
class UIARCHITECTUREPROTO_API UEscapeMenuView : public UBaseViewWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* ResumeText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* ResumeButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* SettingsButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* QuitButton;
};
