// Created by Daniel Janák


#include "UI/BaseInteractor.h"
#include "UI/BasePresenter.h"

void UBaseInteractor::InitializeInteractor(UBasePresenter* PresenterObject)
{
	ensure(IsValid(PresenterObject));

	WeakPresenterRef = PresenterObject;
}
