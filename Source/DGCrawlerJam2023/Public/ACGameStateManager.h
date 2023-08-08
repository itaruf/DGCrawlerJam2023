// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/GameState.h"

#include "ACGameStateManager.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DGCRAWLERJAM2023_API UACGameStateManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UACGameStateManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void ChangeGameState(AGameStateBase* newGameState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void SetGameState(AGameStateBase* newGameState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		AGameStateBase* GetGameState() const;
public :
	AGameStateBase* currentGameState = nullptr;
};
