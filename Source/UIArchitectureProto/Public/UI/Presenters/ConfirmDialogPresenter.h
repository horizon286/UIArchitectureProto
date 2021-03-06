// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UI/BasePresenter.h"
#include "ConfirmDialogPresenter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UIARCHITECTUREPROTO_API UConfirmDialogPresenter : public UBasePresenter
{
	GENERATED_BODY()

public: // Setters

	UFUNCTION(BlueprintCallable)
	void SetHeaderTextProperty(FString Value);

	UFUNCTION(BlueprintCallable)
	void SetContentTextProperty(FString Value);

	UFUNCTION(BlueprintCallable)
	void SetYesTextProperty(FString Value);

	UFUNCTION(BlueprintCallable)
	void SetNoTextProperty(FString Value);


public: // Bindings

	virtual void InitializeBindings();

public:

	UFUNCTION(BlueprintCallable)
	void OnYesClicked();

	UFUNCTION(BlueprintCallable)
	void OnNoClicked();

	void SetNoTextVisibilityProperty(bool Visible);
};
