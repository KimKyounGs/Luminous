// Copyright Epic Games, Inc. All Rights Reserved.

#include "LuminousGameMode.h"
#include "LuminousCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALuminousGameMode::ALuminousGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
