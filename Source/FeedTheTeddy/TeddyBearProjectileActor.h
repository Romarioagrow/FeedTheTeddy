// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "HomingActorComponent.h"
#include "HomingActorInterface.h"
#include "ConfigurationDataActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearProjectileActor.generated.h"

UCLASS()
class FEEDTHETEDDY_API ATeddyBearProjectileActor : public AActor
{
	GENERATED_BODY()

private:
	AConfigurationDataActor* ConfigurationData;


public:	
	// Sets default values for this actor's properties
	ATeddyBearProjectileActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetHomingDelay();

};
