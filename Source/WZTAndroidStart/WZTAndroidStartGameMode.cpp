// Copyright Epic Games, Inc. All Rights Reserved.

#include "WZTAndroidStartGameMode.h"
#include "WZTAndroidStartCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWZTAndroidStartGameMode::AWZTAndroidStartGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
