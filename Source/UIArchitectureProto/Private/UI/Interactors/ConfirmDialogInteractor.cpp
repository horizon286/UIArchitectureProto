// Created by Daniel Janák


#include "UI/Interactors/ConfirmDialogInteractor.h"
#include "UI/Presenters/ConfirmDialogPresenter.h"

void UConfirmDialogInteractor::InitializeData(FUIParams Parameters)
{
	UConfirmDialogPresenter* presenter = Cast<UConfirmDialogPresenter>(WeakPresenterRef.Get());
	ensure(IsValid(presenter));

	FString headerText;
	FString contentText;
	FString yesText;
	FString noText;

	Parameters.TryGetStringParam("ConfirmHeader", headerText);
	Parameters.TryGetStringParam("ConfirmContent", contentText);
	Parameters.TryGetStringParam("ConfirmYes", yesText);
	Parameters.TryGetStringParam("ConfirmNo", noText);

	presenter->SetHeaderTextProperty(headerText);
	presenter->SetContentTextProperty(contentText);
	presenter->SetYesTextProperty(yesText);
	presenter->SetNoTextProperty(noText);

	presenter->SetNoTextVisibilityProperty(!noText.IsEmpty());
}
