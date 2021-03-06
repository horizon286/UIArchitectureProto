// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIParams.h"
#include "BaseInteractor.generated.h"

class UBaseDataModel;
class UBasePresenter;

/**
 * 
 */
UCLASS()
class UIARCHITECTUREPROTO_API UBaseInteractor : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void InitializeInteractor(UBasePresenter* PresenterObject);

	virtual void InitializeData(FUIParams Parameters) PURE_VIRTUAL(UBaseInteractor::InitializeData, );
	
protected:

	TWeakObjectPtr<UBasePresenter> WeakPresenterRef;

};
