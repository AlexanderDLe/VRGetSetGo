// Fill out your copyright notice in the Description page of Project Settings.


#include "TunnelComponent.h"

// Sets default values
ATunnelComponent::ATunnelComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATunnelComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATunnelComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

