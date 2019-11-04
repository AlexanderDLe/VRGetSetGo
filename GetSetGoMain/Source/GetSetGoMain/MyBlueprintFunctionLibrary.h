// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GETSETGOMAIN_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Custom C++")
	static void PrintTest(FString text);
	
	UFUNCTION(BlueprintCallable, Category="Custom C++")
	static void IncrementAndSetIndexCode(UPARAM(ref) int& IndexToSet, int MaxIndex);


};
