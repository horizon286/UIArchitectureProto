// Copyright Epic Games, Inc. All Rights Reserved.

#include "UIArchitectureProtoGameMode.h"
#include "UIArchitectureProtoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUIArchitectureProtoGameMode::AUIArchitectureProtoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
