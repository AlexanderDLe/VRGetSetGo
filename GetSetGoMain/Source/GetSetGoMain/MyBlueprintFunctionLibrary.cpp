// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"
#include "Engine/World.h"
#include "Engine.h"

void UMyBlueprintFunctionLibrary::PrintTest(FString text)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Green, TEXT("Screen Message Test."));
	}

}

void UMyBlueprintFunctionLibrary::IncrementAndSetIndexCode(UPARAM(ref) int& IndexToSet, int MaxIndex)
{
	if (IndexToSet == MaxIndex)
	{
		IndexToSet = 0;
	}
	else {
		IndexToSet = IndexToSet + 1;
	}
}

