// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BurgerPawn.h"
#include "FriesActor.h"
#include "FeedTheTeddyGameModeBase.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventManagerActor.generated.h"

UCLASS()
class FEEDTHETEDDY_API AEventManagerActor : public AActor
{
	GENERATED_BODY()
	
private:
	// points added event support
	TArray<AFriesActor*> PointsAddedEventInvokers;
	TMap<AFeedTheTeddyGameModeBase*, TMap<AFriesActor*, FDelegateHandle>> PointsAddedEventSubscribers;

	// game over event support
	TArray<ABurgerPawn*> GameOverEventInvokers;
	TMap<AFeedTheTeddyGameModeBase*, TMap<ABurgerPawn*, FDelegateHandle>> GameOverEventSubscribers;

public:	
	// Sets default values for this actor's properties
	AEventManagerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	 * @brief 
	 * @param Invoker 
	*/
	void AddPointsAddedEventInvoker(AFriesActor* Invoker);

	/**
	 * @brief 
	 * @param Invoker 
	*/
	void RemovePointsAddedEventInvoker(AFriesActor* Invoker);

	/**
	 * @brief 
	 * @param Invoker 
	*/
	void AddPointsAddedEventInvoker(AFeedTheTeddyGameModeBase* Invoker);

	/**
	 * @brief 
	 * @param Invoker 
	*/
	void RemoveOintsAddedEventInvoker(AFriesActor* Invoker);

	/**
	 * @brief 
	*/
	void AddPointsAddedEventListener(AFeedTheTeddyGameModeBase* Listener);

	/**
	 * @brief 
	 * @param Listener 
	*/
	void RemovePointsAddedEventListener(AFeedTheTeddyGameModeBase* Listener);

	/**
	 * @brief 
	 * @param Invoker 
	*/
	void AddGameOverEventInvoker(ABurgerPawn* Invoker);

	/**
	 * @brief 
	 * @param Invoker 
	*/
	void RemoveGameOverEventInvoker(ABurgerPawn* Invoker);

	/**
	 * @brief 
	 * @param Listener 
	*/
	void AddGameOverEventListener(AFeedTheTeddyGameModeBase* Listener);

	/**
	 * @brief 
	 * @param Listener 
	*/
	void RemoveGameOverEventListener(AFeedTheTeddyGameModeBase* Listener);
};
