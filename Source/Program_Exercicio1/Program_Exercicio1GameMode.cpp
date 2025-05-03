// Copyright Epic Games, Inc. All Rights Reserved.

#include "Program_Exercicio1GameMode.h"
#include "Program_Exercicio1Character.h"
#include "UObject/ConstructorHelpers.h"

AProgram_Exercicio1GameMode::AProgram_Exercicio1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
