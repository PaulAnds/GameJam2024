// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJam2024GameMode.h"
#include "GameJam2024Character.h"
#include "UObject/ConstructorHelpers.h"

AGameJam2024GameMode::AGameJam2024GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
