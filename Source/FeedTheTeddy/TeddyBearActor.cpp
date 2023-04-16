// Fill out your copyright notice in the Description page of Project Settings.


#include "TeddyBearActor.h"

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
		StaticMeshComponent = StaticMeshComponents[0];

		// set up delegate for collision on actor hit
		StaticMeshComponent->OnComponentHit.AddDynamic(this, &ATeddyBearActor::OnHit);

		// add random force
		ImpulseForce = FMath::RandRange(
			ConfigurationData->GetMinBearImpulseForce(),
			ConfigurationData->GetMaxBearImpulseForce());
		FVector Force{ 0 };
		float Angle = FMath::RandRange(0.0f, 2 * PI);
		Force.Y = FMath::Cos(Angle) * ImpulseForce;
		Force.Z = FMath::Sin(Angle) * ImpulseForce;
		StaticMeshComponent->AddImpulse(Force);
	}

	StartShootTimer();

	// add, check and register homing component
	HomingComponent = NewObject<UHomingActorComponent>(this);
	check(HomingComponent != nullptr);
	HomingComponent->RegisterComponent();
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

		// Set the new location for the actor
		SetActorLocation(Location);
	}
}

void ATeddyBearActor::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// destroy teddy bear projectiles
	if (OtherActor != nullptr && OtherActor->ActorHasTag("FriesProjectile"))
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

UStaticMeshComponent* ATeddyBearActor::GetStaticMesh()
{
	return StaticMeshComponent;
}

float ATeddyBearActor::GetImpulseForce()
{
	return ImpulseForce;
}

float ATeddyBearActor::GetHomingDelay()
{
	return ConfigurationData->GetBearHomingDelay();
}