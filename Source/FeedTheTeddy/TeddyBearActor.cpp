// Fill out your copyright notice in the Description page of Project Settings.


#include "TeddyBearActor.h"
#include "TeddyBearProjectileActor.h"
#include "ScreenConstants.h"
#include "Kismet/GameplayStatics.h"
#include "ConfigurationDataActor.h"

// Sets default values
ATeddyBearActor::ATeddyBearActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

	// save bounds for actor
	FVector Origin, BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;
	HalfCollisionHeight = BoxExtent.Z;
	
	// find configuration data
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "ConfigurationData", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		ConfigurationData = Cast<AConfigurationDataActor>(TaggedActors[0]);
	}

	// find  static mesh component
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure static mesh is found
	if (StaticMeshComponents.Num() > 0)
	{
		UStaticMeshComponent* StaticMesh = StaticMeshComponents[0];

		// set up delegate for collision on actor begin overlap
		StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ATeddyBearActor::OnOverlapBegin);

		// add random force
		float ImpulseForce = FMath::RandRange(
			ConfigurationData->GetMinBearImpulseForce(),
			ConfigurationData->GetMaxBearImpulseForce());
		FVector Force{ 0 };
		float Angle = FMath::RandRange(0.0f, 2 * PI);
		Force.Y = FMath::Cos(Angle) * ImpulseForce;
		Force.Z = FMath::Sin(Angle) * ImpulseForce;
		StaticMesh->AddImpulse(Force);
	}

	StartShootTimer();
}

// Called every frame
void ATeddyBearActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// wrap it off screen
	if (IsOffScreen())
	{
		FVector Location = GetActorLocation();

		// wrap horizontally
		if (Location.Y < ScreenConstants::Left - HalfCollisionWidth ||
			Location.Y > ScreenConstants::Right + HalfCollisionWidth)
		{
			Location.Y *= -1;
		}

		// wrap vertically
		if (Location.Z > ScreenConstants::Top + HalfCollisionHeight ||
			Location.Z < ScreenConstants::Bottom - HalfCollisionHeight)
		{
			Location.Z *= -1;
		}
	}
}

void ATeddyBearActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// destroy teddy bear projectiles
	if (OtherActor != nullptr && OtherActor->ActorHasTag("TeddyBearProjectile"))
	{
		OtherActor->Destroy();
	}
}

bool ATeddyBearActor::IsOffScreen()
{
	FVector Location = GetActorLocation();
	return Location.Y < ScreenConstants::Left - HalfCollisionWidth ||
		Location.Y > ScreenConstants::Right + HalfCollisionWidth ||
		Location.Z > ScreenConstants::Top + HalfCollisionHeight ||
		Location.Z < ScreenConstants::Bottom - HalfCollisionHeight;
}

void ATeddyBearActor::ShootProjectile()
{
	// spawn projectile
	FVector SpawnLocation = GetActorLocation();
	SpawnLocation.Z -= HalfCollisionHeight + ProjectileOffsetAmount;
	GetWorld()->SpawnActor<ATeddyBearProjectileActor>(UProjectileClass, SpawnLocation, FRotator::ZeroRotator);

	// start timer for next projectile
	StartShootTimer();
}

void ATeddyBearActor::StartShootTimer()
{
	// set random timer duration
	float TimerDuration = FMath::RandRange(
		ConfigurationData->GetMinBearShootTimerDuration(),
		ConfigurationData->GetMaxBearShootTimerDuration());
	FTimerHandle ShootTimerHandle;
	GetWorldTimerManager().SetTimer(ShootTimerHandle, this, &ATeddyBearActor::ShootProjectile, TimerDuration);
}