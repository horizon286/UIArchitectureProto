// Created by Daniel Janák


#include "UI/Interactors/EscapeMenuInteractor.h"
#include "UI/Presenters/EscapeMenuPresenter.h"
#include "UI/DataModels/EscapeMenuDataModel.h"
#include "UI/BaseDataModel.h"

void UEscapeMenuInteractor::InitializeData(FUIParams Parameters)
{
	DataModelObject = NewObject<UEscapeMenuDataModel>(this);

	UEscapeMenuPresenter* presenter = Cast<UEscapeMenuPresenter>(WeakPresenterRef.Get());
	ensure(IsValid(presenter));

	// Params from Outside UI
	FString resumeButtonText;
	Parameters.TryGetStringParam("ResumeText", resumeButtonText);

	presenter->SetResumeTextProperty(resumeButtonText);
}
