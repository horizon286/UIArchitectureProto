// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

class UBasePresenter;

struct FUIParams;

UENUM(BlueprintType)
enum class EConfirmChoice : uint8
{
	Yes		UMETA(DisplayName = "Primary Button"),
	No		UMETA(DisplayName = "Secondary Button"),
};

/**
 * 
 */
UCLASS()
class UIARCHITECTUREPROTO_API AGameHUD : public AHUD
{
	GENERATED_BODY()

public: // Class Types
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> OverlayWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UBasePresenter>> PresentersToCreate;

public:

	DECLARE_MULTICAST_DELEGATE_TwoParams(FRequestUIOpen, FString, FUIParams);
	FRequestUIOpen OpenUIRequest;

	DECLARE_MULTICAST_DELEGATE_OneParam(FRequestUIClose, FString);
	FRequestUIClose CloseUIRequest;

public:

	UFUNCTION()
	void CreatePresenters();

	UFUNCTION()
	void RegisterOpenUI(FString Identifier);

	UFUNCTION()
	void UnregisterOpenUI(FString Identifier);

	virtual void BeginPlay() override;
	
protected:

	UPROPERTY(Transient)
	TArray<UBasePresenter*> PresenterObjects;

	UPROPERTY(Transient)
	TArray<FString> OpenUIIdentifiers;

public: // Confirm Dialog

	void ShowConfirmDialog(FUIParams Parameters, TFunction<void(EConfirmChoice Choice)> MyFunctionToCall);

protected:

	void ConfirmChoice(EConfirmChoice MyChoice);

	TFunction<void(EConfirmChoice Choice)> ConfirmFunction;

public:

	friend class UConfirmDialogPresenter;

};
