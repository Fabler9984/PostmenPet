// Copyright Epic Games, Inc. All Rights Reserved.

#include "PosementPetGameMode.h"
#include "PosementPetHUD.h"
#include "PosementPetCharacter.h"
#include "UObject/ConstructorHelpers.h"

APosementPetGameMode::APosementPetGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APosementPetHUD::StaticClass();
}
