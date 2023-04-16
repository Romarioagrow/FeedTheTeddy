// Fill out your copyright notice in the Description page of Project Settings.


#include "BurgerPawn.h"

#include "ScreenConstants.h"
#include "EventManagerActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABurgerPawn::ABurgerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABurgerPawn::BeginPlay()
{
	Super::BeginPlay();

	// save bounds for pawn
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;
	HalfCollisionHeight = BoxExtent.Z;

	// find static mesh component
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure the static mesh is found
	if (StaticMeshComponents.Num() > 0)
	{
		// get static mesh component
		UStaticMeshComponent* StaticMeshComponent = StaticMeshComponents[0];

		// set up delegate on actor begin overlap
		//StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ABurgerPawn::OnOverlapBegin);
		StaticMeshComponent->OnComponentHit.AddDynamic(this, &ABurgerPawn::OnHit);

	}

	// add to event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->AddGameOverEventInvoker(this);
	}

	// save for efficiency
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "ConfigurationData", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		ConfigurationData = Cast<AConfigurationDataActor>(TaggedActors[0]);
	}
}

// Called every frame
void ABurgerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.Y != 0 ||
		PendingMovementInput.Z != 0)
	{
		float MoveAmountPerSecond = ConfigurationData->GetBurgerMoveSpeed() * DeltaTime;
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += PendingMovementInput.Y * MoveAmountPerSecond * DeltaTime;
		NewLocation.Y = FMath::Clamp(NewLocation.Y, 
			ScreenConstants::Left + HalfCollisionWidth,
			ScreenConstants::Right - HalfCollisionWidth);
		NewLocation.Z += PendingMovementInput.Z * MoveAmountPerSecond * DeltaTime;
		NewLocation.Z = FMath::Clamp(NewLocation.Z,
						ScreenConstants::Bottom + HalfCollisionHeight,
						ScreenConstants::Top - HalfCollisionHeight - TopClampKludgeAmount);
		SetActorLocation(NewLocation);
	}
}

// Called to bind functionality to input
void ABurgerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ABurgerPawn::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("OnHit"));
	if (OtherActor != nullptr)
	{
		if (OtherActor->ActorHasTag("TeddyBear"))
		{
			Health -= ConfigurationData->GetBearDamage();
			HealthPercent = StaticCast<float>(Health) / MaxHealth;
			OtherActor->Destroy();
			CheckGameOver();
		}
		else if (OtherActor->ActorHasTag("TeddyBearProjectile"))
		{
			Health -= ConfigurationData->GetBearProjectileDamage();
			HealthPercent = StaticCast<float>(Health) / MaxHealth;
			OtherActor->Destroy();
			CheckGameOver();
		}
	}
}

//void ABurgerPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor != nullptr)
//	{
//		if (OtherActor->ActorHasTag("TeddyBear"))
//		{
//			Health -= ConfigurationData->GetBearDamage();
//			HealthPercent = StaticCast<float>(Health) / MaxHealth;
//			OtherActor->Destroy();
//			CheckGameOver();
//		}
//		else if (OtherActor->ActorHasTag("TeddyBearProjectile"))
//		{
//			Health -= ConfigurationData->GetBearProjectileDamage();
//			HealthPercent = StaticCast<float>(Health) / MaxHealth;
//			OtherActor->Destroy();
//			CheckGameOver();
//		}
//	}
//}

void ABurgerPawn::MoveHorizontally(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorRightVector(), moveScale);
}

void ABurgerPawn::MoveVertically(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorUpVector(), moveScale);
}

void ABurgerPawn::Shoot()
{
	// spawn projectile
	FVector SpawnLocation = GetActorLocation();
	SpawnLocation.Z += HalfCollisionHeight;
	GetWorld()->SpawnActor<AFriesActor>(UFries, SpawnLocation, FRotator::ZeroRotator);
}

void ABurgerPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// remove from event manager
	TArray<AActor*>	TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->RemoveGameOverEventInvoker(this);
	}
}

FGameOverEvent& ABurgerPawn::GetGameOverEvent()
{
	// TODO: insert return statement here
	return GameOverEvent;
}

void ABurgerPawn::CheckGameOver()
{
	if (Health <= 0)
	{
		GameOverEvent.Broadcast();
	}
}

