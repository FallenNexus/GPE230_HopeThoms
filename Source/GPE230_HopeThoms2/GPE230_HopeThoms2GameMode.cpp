// Copyright Epic Games, Inc. All Rights Reserved.

#include "GPE230_HopeThoms2GameMode.h"
#include "GPE230_HopeThoms2Character.h"
#include "UObject/ConstructorHelpers.h"

AGPE230_HopeThoms2GameMode::AGPE230_HopeThoms2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
