// Created by Daniel Janák


#include "UI/BasePresenter.h"
#include "UI/BaseInteractor.h"
#include "UI/BaseViewWidget.h"
#include "UI/UIParams.h"
#include "UI/GameHUD.h"
#include <GameFramework/PlayerController.h>

void UBasePresenter::CreateViewObject()
{
	if (!IsValid(ViewObject))
	{
		ViewObject = NewObject<UBaseViewWidget>(this, ViewClassType);
		ensure(IsValid(ViewObject));

		ViewObject->SetVisibility(ESlateVisibility::Collapsed);
		ViewObject->AddToViewport((int32)(ViewObject->GetViewType()));
		
		InitializeBindings();
	}
}

void UBasePresenter::CreateInteractorObject()
{
	if (!IsValid(InteractorObject))
	{
		InteractorObject = NewObject<UBaseInteractor>(this, InteractorClassType);
		ensure(IsValid(InteractorObject));
	}

	InteractorObject->InitializeInteractor(this);
}

void UBasePresenter::OnOpenRequest(FString Identifier, FUIParams Parameters)
{
	if (Identifier == UIIdentifier)
	{
		OpenView(Parameters);
	}
}

void UBasePresenter::OnCloseRequest(FString Identifier)
{
	if (Identifier == UIIdentifier)
	{
		CloseView();
	}
}

void UBasePresenter::OpenView(FUIParams Parameters)
{
	CreateViewObject();
	
	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));
	
	ensure(IsValid(ViewObject));
	if (ViewObject->GetViewType() != EViewType::HudElement)
	{
		hud->RegisterOpenUI(UIIdentifier);
	}

	CreateInteractorObject();

	InteractorObject->InitializeData(Parameters);

	ViewObject->SetVisibility(ESlateVisibility::Visible);
	ViewObject->OnOpened();
}

void UBasePresenter::CloseView()
{
	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));
	ensure(IsValid(ViewObject));

	if (ViewObject->GetViewType() != EViewType::HudElement)
	{
		hud->UnregisterOpenUI(UIIdentifier);
	}
	
	if (!IsValid(ViewObject)) return;

	InteractorObject = nullptr;

	if (ViewObject->GetDisposableOnClose())
	{
		ViewObject->RemoveFromParent();
		ViewObject = nullptr;
	}
	else
	{
		ViewObject->SetVisibility(ESlateVisibility::Collapsed);
	}

}

bool UBasePresenter::IsOpened()
{
	if (IsValid(ViewObject)
	 && ViewObject->GetVisibility() == ESlateVisibility::Visible)
	{
		return true;
	}

	return false;
}

void UBasePresenter::Initialize(APlayerController* InPlayerController)
{
	ensure(IsValid(InPlayerController));
	PlayerController = InPlayerController;

	AGameHUD* hud = GetHUD();
	ensure(IsValid(hud));

	OnOpenHandle = hud->OpenUIRequest.AddUObject(this, &UBasePresenter::OnOpenRequest);
	OnCloseHandle = hud->CloseUIRequest.AddUObject(this, &UBasePresenter::OnCloseRequest);
}

void UBasePresenter::Deinitialize()
{
	AGameHUD* hud = GetHUD();

	if (!IsValid(hud)) return;

	if (OnOpenHandle.IsValid())
	{
		hud->OpenUIRequest.Remove(OnOpenHandle);
	}

	if (OnCloseHandle.IsValid())
	{
		hud->CloseUIRequest.Remove(OnCloseHandle);
	}
}

AGameHUD* UBasePresenter::GetHUD()
{
	if (IsValid(PlayerController) 
	 && PlayerController->GetHUD())
	{
		return Cast<AGameHUD>(PlayerController->GetHUD());
	}

	return nullptr;
}
