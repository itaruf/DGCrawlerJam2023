// Fill out your copyright notice in the Description page of Project Settings.


#include "ACGameStateManager.h"

// Sets default values for this component's properties
UACGameStateManager::UACGameStateManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UACGameStateManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UACGameStateManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UACGameStateManager::ChangeGameState_Implementation(AGameStateBase* newGameState)
{
	if (!newGameState)
		return;

	//Don't update the same game state
	if (GetGameState_Implementation() == newGameState)
		return;

	currentGameState = newGameState;
}

void UACGameStateManager::SetGameState_Implementation(AGameStateBase* newGameState)
{
	if (!newGameState)
		return;

	currentGameState = newGameState;
}

AGameStateBase* UACGameStateManager::GetGameState_Implementation() const
{
	return currentGameState;
}

