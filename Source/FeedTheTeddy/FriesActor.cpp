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

	/*Get the collision component and bind to OnOverlapBegin function*/

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
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "ConfigurationData", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		ConfigurationData = Cast<AConfigurationDataActor>(TaggedActors[0]);
	}

	// find static mesh component
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure the static mesh is found
	if (StaticMeshComponents.Num() > 0)
	{
		// get static mesh component
		UStaticMeshComponent* StaticMeshComponent = StaticMeshComponents[0];
		// set up delegate on actor begin overlap
		//StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AFriesActor::OnOverlapBegin);
		StaticMeshComponent->OnComponentHit.AddDynamic(this, &AFriesActor::OnHit);

		// get mesh moving
		FVector Force{ 0.0f, 0.0f, ConfigurationData->GetFriesImpulseForce() };
		StaticMeshComponent->AddImpulse(Force);
	}
}

// Called every frame
void AFriesActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// destroy if past of screen
	if (GetActorLocation().Z > ScreenConstants::Top + HalfCollisionHeight)
	{
		Destroy();
	}
}

//void AFriesActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	// check for objects taht destroy fires
//	if (OtherActor != nullptr)
//	{
//		// earn points and destroy teddy bear and fries
//		if (OtherActor->ActorHasTag("TeddyBear"))
//		{
//			// add point and destroy teddy bear and fries
//			PointsAddedEvent.Broadcast(ConfigurationData->GetPointsForTeddyBear());
//			OtherActor->Destroy();
//			Destroy();
//		}
//		else if (OtherActor->ActorHasTag("TeddyBearProjectile"))
//		{
//			OtherActor->Destroy();
//			Destroy();
//		}
//	}
//}

void AFriesActor::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// check for objects taht destroy fires
	if (OtherActor != nullptr)
	{
		// earn points and destroy teddy bear and fries
		if (OtherActor->ActorHasTag("TeddyBear"))
		{
			// add point and destroy teddy bear and fries
			PointsAddedEvent.Broadcast(ConfigurationData->GetPointsForTeddyBear());
			OtherActor->Destroy();
			Destroy();
		}
		else if (OtherActor->ActorHasTag("TeddyBearProjectile"))
		{
			OtherActor->Destroy();
			Destroy();
		}
	}
}

void AFriesActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// remove from event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->RemovePointsAddedEventInvoker(this);
	}
}

FPointsAddedEvent& AFriesActor::GetPointsAddedEvent()
{
	// TODO: insert return statement here
	return PointsAddedEvent;
}

