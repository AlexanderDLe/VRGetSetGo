// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Engine.h"

void UMyBlueprintFunctionLibrary::PrintTest(FString text)
{

	UE_LOG(LogTemp, Warning, TEXT("This is a test log."));
}