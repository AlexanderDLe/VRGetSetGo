// Fill out your copyright notice in the Description page of Project Settings.


#include "Tunnel.h"

// Sets default values
ATunnel::ATunnel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	LastComponentIndex = 0;
	ComponentToMoveIndex = 0;
}

// Called when the game starts or when spawned
void ATunnel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATunnel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATunnel::RelocateComponent(USceneComponent* TargetToMove, USceneComponent* TargetDestination, float Distance)
{
	FVector DestinationVector = TargetDestination->RelativeLocation;
	float DestinationY = DestinationVector.Y + Distance;
	FVector NewDestination = { 0, DestinationY, 0 };

	TargetToMove->SetRelativeLocation(NewDestination);
}