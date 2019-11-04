// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tunnel.generated.h"

UCLASS()
class GETSETGOMAIN_API ATunnel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATunnel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category="Custom C++")
	void RelocateComponent(USceneComponent* TargetToMove, USceneComponent* TargetDestination, float Distance);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Indexing)
	int32 LastComponentIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Indexing)
	int32 ComponentToMoveIndex;


};
