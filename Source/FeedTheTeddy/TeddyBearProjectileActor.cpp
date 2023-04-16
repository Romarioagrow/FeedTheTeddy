// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"

#include "TeddyBearProjectileActor.h"
#include "ScreenConstants.h"

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
	
	// save bounds for actor
	FVector Origin, BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;
	HalfCollisionHeight = BoxExtent.Z;

	// save for efficiency
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "ConfigurationData", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		ConfigurationData = Cast<AConfigurationDataActor>(TaggedActors[0]);
	}

	// Получить ссылку на пешку игрока
	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (PlayerPawn != nullptr)
	{
		// Получить позицию пешки игрока
		FVector PlayerPawnLocation = PlayerPawn->GetActorLocation();

		// Вычислить направление от текущей позиции актора к пешке игрока
		FVector Direction = PlayerPawnLocation - GetActorLocation();
		Direction.X = 0;

		// Нормализовать направление и умножить на желаемую силу импульса
		float ImpulseStrength = 100.0f;
		FVector ImpulseForce = Direction.GetSafeNormal() * ImpulseStrength;

		// Применить импульс к компоненту StaticMeshComponent актора
		
		// find static mesh component
		TArray<UStaticMeshComponent*> StaticMeshComponents;
		GetComponents(StaticMeshComponents);

		// make sure the static mesh is found
		if (StaticMeshComponents.Num() > 0)
		{
			// get static mesh component
			UStaticMeshComponent* StaticMeshComponent = StaticMeshComponents[0];
			StaticMeshComponent->OnComponentHit.AddDynamic(this, &ATeddyBearProjectileActor::OnHit);
			StaticMeshComponent->AddImpulse(ImpulseForce);
		}
	}

}

// Called every frame
void ATeddyBearProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// wrap it off screen
	if (IsOffScreen())
	{
		Destroy();
	}
}

bool ATeddyBearProjectileActor::IsOffScreen()
{
	FVector Location = GetActorLocation();
	return Location.Y < ScreenConstants::Left - HalfCollisionWidth ||
		Location.Y > ScreenConstants::Right + HalfCollisionWidth ||
		Location.Z > ScreenConstants::Top + HalfCollisionHeight ||
		Location.Z < ScreenConstants::Bottom - HalfCollisionHeight;
}

float ATeddyBearProjectileActor::GetHomingDelay()
{
	return ConfigurationData->GetBearProjectileDamage();
}

void ATeddyBearProjectileActor::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// destroy teddy bear projectiles
	if (OtherActor != nullptr && OtherActor->ActorHasTag("FriesProjectile"))
	{
		Destroy();
		OtherActor->Destroy();
	}
}

