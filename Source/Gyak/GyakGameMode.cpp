// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GyakGameMode.h"
#include "GyakCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGyakGameMode::AGyakGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
