// Fill out your copyright notice in the Description page of Project Settings.


#include "TeddyBearSpawnerActor.h"

// Sets default values
ATeddyBearSpawnerActor::ATeddyBearSpawnerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeddyBearSpawnerActor::BeginPlay()
{
	Super::BeginPlay();
	
	StartSpawner();
}

// Called every frame
void ATeddyBearSpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATeddyBearSpawnerActor::StartSpawner()
{
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATeddyBearSpawnerActor::SpawnBear, SpawnDelay, true);
}

void ATeddyBearSpawnerActor::SpawnBear()
{
	FVector SpawnLocation{0.0f, FMath::RandRange(-128.0f, 128.0f), FMath::RandRange(-128.0f, 128.0f) };
	FRotator SpawnRotation = GetActorRotation();
	GetWorld()->SpawnActor<ATeddyBearActor>(TeddyBearClass, SpawnLocation, SpawnRotation);
}

