// Created by Daniel Janák


#include "UI/Interactors/EscapeMenuInteractor.h"
#include "UI/Presenters/EscapeMenuPresenter.h"

void UEscapeMenuInteractor::InitializeData(FUIParams Parameters)
{
	UEscapeMenuPresenter* presenter = Cast<UEscapeMenuPresenter>(WeakPresenterRef.Get());
	ensure(IsValid(presenter));

	// Params from Outside UI
	FString resumeButtonText;
	Parameters.TryGetStringParam("ResumeText", resumeButtonText);

	presenter->SetResumeTextProperty(resumeButtonText);
}
