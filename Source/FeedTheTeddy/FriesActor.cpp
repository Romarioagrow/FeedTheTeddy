// Fill out your copyright notice in the Description page of Project Settings.


#include "FriesActor.h"

#include <Kismet/GameplayStatics.h>
#include "ScreenConstants.h"
#include "EventManagerActor.h"

// Sets default values
AFriesActor::AFriesActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFriesActor::BeginPlay()
{
	Super::BeginPlay();

	// Get the collision component and bind to OnOverlapBegin function

	// save half collision height
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionHeight = BoxExtent.Z;

	// add to event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->AddPointsAddedEventInvoker(this);
	}

	// save for efficiency 

}

// Called every frame
void AFriesActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFriesActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AFriesActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
}

FPointsAddedEvent& AFriesActor::GetPointsAddedEvent()
{
	// TODO: insert return statement here
	return PointsAddedEvent;
}

