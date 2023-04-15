// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BurgerPawn.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HomingActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FEEDTHETEDDY_API UHomingActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHomingActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	ABurgerPawn* Target;

	// save owner info for efficiency 
	UStaticMeshComponent* StaticMeshComponent;

	float ImpulseForce{ 0 };

	float HomingDelay{ 0 };

	/**
	 * @brief 
	*/
	void StartHomingTimer();

public:
	/**
	 * @brief 
	*/
	void MoveTowardTarget();

private:
	/**
	 * @brief 
	 * @param ActorLocation 
	 * @param TargetLocation 
	 * @return 
	*/
	FVector GetForceVector(FVector ActorLocation, FVector TargetLocation);
};
