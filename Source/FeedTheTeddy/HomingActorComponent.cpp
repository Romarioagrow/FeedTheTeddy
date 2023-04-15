// Fill out your copyright notice in the Description page of Project Settings.

#include "HomingActorComponent.h"

#include "HomingActorInterface.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UHomingActorComponent::UHomingActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UHomingActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// save for efficiency 
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Burger", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		Target = Cast<ABurgerPawn>(TaggedActors[0]);
	}
	
	// save owner info for efficiency
	IHomingActorInterface* Owner = Cast<IHomingActorInterface>(GetOwner());
	StaticMeshComponent = Owner->GetStaticMesh();
	ImpulseForce = Owner->GetImpulseForce();
	HomingDelay = Owner->GetHomingDelay();

	// start homing timer
	StartHomingTimer();
}


// Called every frame
void UHomingActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UHomingActorComponent::StartHomingTimer()
{
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UHomingActorComponent::MoveTowardTarget, HomingDelay);
}

void UHomingActorComponent::MoveTowardTarget()
{
	/*StaticMeshComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
	FVector ForceVector = GetForceVector(GetOwner()->GetActorLocation(), Target->GetActorLocation());
	StaticMeshComponent->AddImpulse(ForceVector);

	StartHomingTimer();*/
}

FVector UHomingActorComponent::GetForceVector(FVector ActorLocation, FVector TargetLocation)
{
	FVector Direction = TargetLocation - ActorLocation;
	Direction.Normalize();
	return Direction * ImpulseForce;
}

