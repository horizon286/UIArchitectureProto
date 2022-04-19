// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/GameHUD.h"
#include "UI/BasePresenter.h"

void AGameHUD::CreatePresenters()
{
	for (TSubclassOf<UBasePresenter> presenterClass : PresentersToCreate)
	{
		UBasePresenter* presenter = NewObject<UBasePresenter>(this, presenterClass);

		ensure(IsValid(presenter));

		PresenterObjects.Add(presenter);

		presenter->Initialize(PlayerOwner);
	}
}

void AGameHUD::RegisterOpenUI(FString Identifier)
{
	OpenUIIdentifiers.AddUnique(Identifier);

	PlayerOwner->SetInputMode(FInputModeGameAndUI());
	PlayerOwner->SetShowMouseCursor(true);
}

void AGameHUD::UnregisterOpenUI(FString Identifier)
{
	OpenUIIdentifiers.Remove(Identifier);

	if (OpenUIIdentifiers.Num() == 0)
	{
		PlayerOwner->SetInputMode(FInputModeGameOnly());
		PlayerOwner->SetShowMouseCursor(false);
	}
}

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

	CreatePresenters();
}

void AGameHUD::ShowConfirmDialog(FUIParams Parameters, TFunction<void(EConfirmChoice Choice)> MyFunctionToCall)
{
	ConfirmFunction = MyFunctionToCall;
	OpenUIRequest.Broadcast("ConfirmDialog", Parameters);
}

void AGameHUD::ConfirmChoice(EConfirmChoice MyChoice)
{
	if (ConfirmFunction != nullptr)
	{
		CloseUIRequest.Broadcast("ConfirmDialog");
		ConfirmFunction(MyChoice);
		ConfirmFunction = nullptr;
	}
}