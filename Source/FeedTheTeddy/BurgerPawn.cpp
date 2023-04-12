// Fill out your copyright notice in the Description page of Project Settings.


#include "BurgerPawn.h"
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
		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ABurgerPawn::OnOverlapBegin);
	}

	// add to event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->AddGameOverEventInvoker(this);
	}
	
}

// Called every frame
void ABurgerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABurgerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABurgerPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void ABurgerPawn::MoveHorizontaly(float moveScale)
{
}

void ABurgerPawn::MoveVertically(float moveScale)
{
}

void ABurgerPawn::Shoot()
{
}

void ABurgerPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
}

FGameOverEvent& ABurgerPawn::GetGameOverEvent()
{
	// TODO: insert return statement here
	return GameOverEvent;
}

void ABurgerPawn::CheckGameOver()
{
}

