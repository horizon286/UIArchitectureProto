// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UI/BaseInteractor.h"
#include "EscapeMenuInteractor.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UIARCHITECTUREPROTO_API UEscapeMenuInteractor : public UBaseInteractor
{
	GENERATED_BODY()
	
public:

	virtual void InitializeData(FUIParams Parameters);

};
