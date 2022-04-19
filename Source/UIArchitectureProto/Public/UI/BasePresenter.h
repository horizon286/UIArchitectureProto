// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIParams.h"
#include "BasePresenter.generated.h"

class UBaseViewWidget;
class UBaseInteractor;
class APlayerController;
class AGameHUD;

/**
 * 
 */
UCLASS(Abstract)
class UIARCHITECTUREPROTO_API UBasePresenter : public UObject
{
	GENERATED_BODY()

public: // Class Types to Instantiate

	UPROPERTY(EditDefaultsOnly, Category="Subclasses")
	TSubclassOf<UBaseViewWidget> ViewClassType;

	UPROPERTY(EditDefaultsOnly, Category = "Subclasses")
	TSubclassOf<UBaseInteractor> InteractorClassType;

public: // Default Setup

	UPROPERTY(EditDefaultsOnly, Category="Setup")
	FString UIIdentifier;

protected: // Instantiated Objects

	UPROPERTY(Transient)
	UBaseViewWidget* ViewObject;

	UPROPERTY(Transient)
	UBaseInteractor* InteractorObject;

protected:

	/// <summary>
	/// Instantiates View of this UI if necessary and adds it to viewport with Collapsed visibility
	/// </summary>
	UFUNCTION()
	void CreateViewObject();

	/// <summary>
	/// Instantiates Interactor for this UI
	/// </summary>
	UFUNCTION()
	void CreateInteractorObject();

public: // Handlers

	void OnOpenRequest(FString Identifier, FUIParams Parameters);

	void OnCloseRequest(FString Identifier);

protected:

	UFUNCTION()
	void OpenView(FUIParams Parameters);

	UFUNCTION()
	void CloseView();

	UFUNCTION()
	bool IsOpened();
	
public:

	virtual void Initialize(APlayerController* InPlayerController);

	virtual void InitializeBindings() PURE_VIRTUAL(UBasePresenter::InitializeBindings, );

	void Deinitialize();

protected:

	AGameHUD* GetHUD();

protected:

	UPROPERTY(BlueprintReadOnly)
	APlayerController* PlayerController;

protected:

	FDelegateHandle OnOpenHandle;

	FDelegateHandle OnCloseHandle;
};
