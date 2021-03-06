// Created by Daniel Janák


#include "UI/Presenters/ConfirmDialogPresenter.h"
#include "UI/GameHUD.h"
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include "UI/Views/ConfirmDialogView.h"

void UConfirmDialogPresenter::SetHeaderTextProperty(FString Value)
{
	UConfirmDialogView* view = Cast<UConfirmDialogView>(ViewObject);
	ensure(IsValid(view));

	ensure(IsValid(view->HeaderText));
	view->HeaderText->SetText(FText::FromString(Value));
}

void UConfirmDialogPresenter::SetContentTextProperty(FString Value)
{
	UConfirmDialogView* view = Cast<UConfirmDialogView>(ViewObject);
	ensure(IsValid(view));

	ensure(IsValid(view->ContentText));
	view->ContentText->SetText(FText::FromString(Value));
}

void UConfirmDialogPresenter::SetYesTextProperty(FString Value)
{
	UConfirmDialogView* view = Cast<UConfirmDialogView>(ViewObject);
	ensure(IsValid(view));

	ensure(IsValid(view->YesText));
	view->YesText->SetText(FText::FromString(Value));
}

void UConfirmDialogPresenter::SetNoTextProperty(FString Value)
{
	UConfirmDialogView* view = Cast<UConfirmDialogView>(ViewObject);
	ensure(IsValid(view));

	ensure(IsValid(view->NoText));
	view->NoText->SetText(FText::FromString(Value));
}

void UConfirmDialogPresenter::InitializeBindings()
{
	UConfirmDialogView* view = Cast<UConfirmDialogView>(ViewObject);
	
	ensure(IsValid(view));
	ensure(IsValid(view->YesButton));
	ensure(IsValid(view->NoButton));

	view->YesButton->OnClicked.AddDynamic(this, &UConfirmDialogPresenter::OnYesClicked);
	view->NoButton->OnClicked.AddDynamic(this, &UConfirmDialogPresenter::OnNoClicked);
}

void UConfirmDialogPresenter::OnYesClicked()
{
	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));

	hud->ConfirmChoice(EConfirmChoice::Yes);
}

void UConfirmDialogPresenter::OnNoClicked()
{
	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));

	hud->ConfirmChoice(EConfirmChoice::No);
}

void UConfirmDialogPresenter::SetNoTextVisibilityProperty(bool Visible)
{
	UConfirmDialogView* view = Cast<UConfirmDialogView>(ViewObject);
	ensure(IsValid(view));

	ensure(IsValid(view->NoButton));
	view->NoButton->SetVisibility(Visible ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
}
