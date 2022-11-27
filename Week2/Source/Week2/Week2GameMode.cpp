// Copyright Epic Games, Inc. All Rights Reserved.

#include "Week2GameMode.h"
#include "Week2Character.h"
#include "UObject/ConstructorHelpers.h"

AWeek2GameMode::AWeek2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
