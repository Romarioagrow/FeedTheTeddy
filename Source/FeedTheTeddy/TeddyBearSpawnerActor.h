// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "TeddyBearActor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearSpawnerActor.generated.h"

UCLASS()
class FEEDTHETEDDY_API ATeddyBearSpawnerActor : public AActor
{
	GENERATED_BODY()
	
private:
	float SpawnDelay{ 1.0f };

public:	
	// Sets default values for this actor's properties
	ATeddyBearSpawnerActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TeddyBearClass")
		TSubclassOf<ATeddyBearActor> TeddyBearClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void StartSpawner();

private:
	void SpawnBear();

};
