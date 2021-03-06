// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UI/BasePresenter.h"
#include "EscapeMenuPresenter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UIARCHITECTUREPROTO_API UEscapeMenuPresenter : public UBasePresenter
{
	GENERATED_BODY()

public: // Resume Text

	UFUNCTION(BlueprintCallable)
	void SetResumeTextProperty(FString Value);

	UFUNCTION(BlueprintCallable)
	void GetResumeTextProperty(FString& Result);
	
public: // Bindings

	virtual void Initialize(APlayerController* InPlayerController) override;

	virtual void InitializeBindings();

public:

	UFUNCTION(BlueprintCallable)
	void OnResumeButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnSettingsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnQuitButtonClicked();
	
	UFUNCTION(BlueprintCallable)
	void ToggleEscapeMenu();


};
