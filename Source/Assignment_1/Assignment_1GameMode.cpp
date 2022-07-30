// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assignment_1GameMode.h"
#include "Assignment_1Character.h"
#include "UObject/ConstructorHelpers.h"

AAssignment_1GameMode::AAssignment_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
