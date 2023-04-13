// Fill out your copyright notice in the Description page of Project Settings.


#include "ConfigurationDataActor.h"

// Sets default values
AConfigurationDataActor::AConfigurationDataActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AConfigurationDataActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AConfigurationDataActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

float AConfigurationDataActor::GetBurgerMoveSpeed()
{
	return BurgerMoveSpeed;
}

float AConfigurationDataActor::GetBearDamage()
{
	return BearDamage;
}

float AConfigurationDataActor::GetBearProjectileDamage()
{
	return BearProjectileDamage;
}

float AConfigurationDataActor::GetFriesImpulseForce()
{
	return FriesImpulseForce;
}

int AConfigurationDataActor::GetPointsForTeddyBear()
{
	return PointsForTeddyBear;
}

float AConfigurationDataActor::GetMinBearImpulseForce()
{
	return MinBearImpulseForce;
}

float AConfigurationDataActor::GetMaxBearImpulseForce()
{
	return MaxBearImpulseForce;
}

float AConfigurationDataActor::GetMinBearShootTimerDuration()
{
	return MinBearShootTimerDuration;
}

float AConfigurationDataActor::GetMaxBearShootTimerDuration()
{
	return MaxBearShootTimerDuration;
}

int AConfigurationDataActor::GetTotalGameSeconds()
{
	return TotalGameSeconds;
}

