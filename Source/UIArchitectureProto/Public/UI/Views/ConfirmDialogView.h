// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UI/BaseViewWidget.h"
#include "ConfirmDialogView.generated.h"

class UTextBlock;
class UButton;

/**
 * 
 */
UCLASS()
class UIARCHITECTUREPROTO_API UConfirmDialogView : public UBaseViewWidget
{
	GENERATED_BODY()
	
public: // Texts

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* HeaderText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* ContentText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* YesText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* NoText;

public: // Buttons

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* YesButton;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* NoButton;

};
