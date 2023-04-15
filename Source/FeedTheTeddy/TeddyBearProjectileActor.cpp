// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"

#include "TeddyBearProjectileActor.h"

// Sets default values
ATeddyBearProjectileActor::ATeddyBearProjectileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeddyBearProjectileActor::BeginPlay()
{
	Super::BeginPlay();
	
	// save for efficiency
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "ConfigurationData", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		ConfigurationData = Cast<AConfigurationDataActor>(TaggedActors[0]);
	}

	// �������� ������ �� ����� ������
	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (PlayerPawn != nullptr)
	{
		// �������� ������� ����� ������
		FVector PlayerPawnLocation = PlayerPawn->GetActorLocation();

		// ��������� ����������� �� ������� ������� ������ � ����� ������
		FVector Direction = PlayerPawnLocation - GetActorLocation();

		// ������������� ����������� � �������� �� �������� ���� ��������
		float ImpulseStrength = 100.0f;
		FVector ImpulseForce = Direction.GetSafeNormal() * ImpulseStrength;

		// ��������� ������� � ���������� StaticMeshComponent ������
		
		// find static mesh component
		TArray<UStaticMeshComponent*> StaticMeshComponents;
		GetComponents(StaticMeshComponents);

		// make sure the static mesh is found
		if (StaticMeshComponents.Num() > 0)
		{
			// get static mesh component
			UStaticMeshComponent* StaticMeshComponent = StaticMeshComponents[0];
			StaticMeshComponent->AddImpulse(ImpulseForce);
		}
	}

}

// Called every frame
void ATeddyBearProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ATeddyBearProjectileActor::GetHomingDelay()
{
	return ConfigurationData->GetBearProjectileDamage();
}

