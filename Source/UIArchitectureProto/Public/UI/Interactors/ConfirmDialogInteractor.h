// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UI/BaseInteractor.h"
#include "ConfirmDialogInteractor.generated.h"

/**
 * 
 */
UCLASS()
class UIARCHITECTUREPROTO_API UConfirmDialogInteractor : public UBaseInteractor
{
	GENERATED_BODY()


public:

	virtual void InitializeData(FUIParams Parameters);
};
