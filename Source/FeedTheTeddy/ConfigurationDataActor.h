// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConfigurationDataActor.generated.h"

UCLASS()
class FEEDTHETEDDY_API AConfigurationDataActor : public AActor
{
	GENERATED_BODY()

private:
	float BurgerMoveSpeed{ 5500.0f };

	float BearDamage{ 50.0f };

	float BearProjectileDamage{ 50.0f };

	float FriesImpulseForce{ 100.0f };

	int PointsForTeddyBear{ 100 };

	float MinBearImpulseForce{ 50.0f };

	float MaxBearImpulseForce{ 100.0f };

	float MinBearShootTimerDuration{ 3.0f };

	float MaxBearShootTimerDuration{ 4.0f };

	int TotalGameSeconds{ 10 };

	int BearHomingDelay{ 2 };
	
public:	
	// Sets default values for this actor's properties
	AConfigurationDataActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetBurgerMoveSpeed();

	float GetBearDamage();

	float GetBearProjectileDamage();

	float GetFriesImpulseForce();

	int GetPointsForTeddyBear();

	float GetMinBearImpulseForce();

	float GetMaxBearImpulseForce();

	float GetMinBearShootTimerDuration();

	float GetMaxBearShootTimerDuration();

	int GetTotalGameSeconds();

	int GetBearHomingDelay();
};
