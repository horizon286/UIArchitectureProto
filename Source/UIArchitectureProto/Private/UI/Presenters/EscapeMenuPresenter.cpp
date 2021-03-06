// Created by Daniel Janák


#include "UI/Presenters/EscapeMenuPresenter.h"
#include "UI/Views/EscapeMenuView.h"
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include "UI/GameHUD.h"
#include <Components/InputComponent.h>
#include "UI/BasePresenter.h"

void UEscapeMenuPresenter::Initialize(APlayerController* InPlayerController)
{
	Super::Initialize(InPlayerController);

	ensure(IsValid(PlayerController) && IsValid(PlayerController->InputComponent));

	PlayerController->InputComponent->BindKey(EKeys::Escape, IE_Pressed, this, &UEscapeMenuPresenter::ToggleEscapeMenu);
}

void UEscapeMenuPresenter::InitializeBindings()
{
	UEscapeMenuView* view = Cast<UEscapeMenuView>(ViewObject);
	ensure(IsValid(view));

	ensure(IsValid(view->ResumeButton));
	ensure(IsValid(view->SettingsButton));
	ensure(IsValid(view->QuitButton));

	view->ResumeButton->OnClicked.AddDynamic(this, &UEscapeMenuPresenter::OnResumeButtonClicked);
	view->SettingsButton->OnClicked.AddDynamic(this, &UEscapeMenuPresenter::OnSettingsButtonClicked);
	view->QuitButton->OnClicked.AddDynamic(this, &UEscapeMenuPresenter::OnQuitButtonClicked);
}

void UEscapeMenuPresenter::ToggleEscapeMenu()
{
	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));

	if (IsOpened())
	{
		OnResumeButtonClicked();
	}
	else
	{
		FUIParams params;
		params.SetStringParam("ResumeText", "RESUME");

		hud->OpenUIRequest.Broadcast("EscapeMenu", params);
	}
}

void UEscapeMenuPresenter::OnResumeButtonClicked()
{
	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));

	hud->CloseUIRequest.Broadcast("EscapeMenu");
}

void UEscapeMenuPresenter::OnSettingsButtonClicked()
{
	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));

	FUIParams params;
	params.SetStringParam("ConfirmHeader", "SETTINGS");
	params.SetStringParam("ConfirmContent", "Settings are not yet implemented");
	params.SetStringParam("ConfirmYes", "OK");

	hud->ShowConfirmDialog(params, [this](EConfirmChoice Choice) { });
}

void UEscapeMenuPresenter::OnQuitButtonClicked()
{
	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));

	FUIParams params;
	params.SetStringParam("ConfirmHeader", "QUIT GAME");
	params.SetStringParam("ConfirmContent", "Are you sure you want to QUIT?");
	params.SetStringParam("ConfirmYes", "Yes, QUIT");
	params.SetStringParam("ConfirmNo", "No");

	hud->ShowConfirmDialog(params, [this](EConfirmChoice Choice)
		{
			if (Choice == EConfirmChoice::Yes)
			{
				// TMP
				ToggleEscapeMenu();
			}
		});
}

void UEscapeMenuPresenter::SetResumeTextProperty(FString Value)
{
	UEscapeMenuView* view = Cast<UEscapeMenuView>(ViewObject);
	ensure(IsValid(view));

	ensure(IsValid(view->ResumeText));
	view->ResumeText->SetText(FText::FromString(Value));
}

void UEscapeMenuPresenter::GetResumeTextProperty(FString& Result)
{
	UEscapeMenuView* view = Cast<UEscapeMenuView>(ViewObject);
	ensure(IsValid(view));

	ensure(IsValid(view->ResumeText));
	Result = view->ResumeText->GetText().ToString();
}
