// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DelegateDeclarations.h"
#include "ConfigurationDataActor.h"
          
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FriesActor.generated.h"

UCLASS()
class FEEDTHETEDDY_API AFriesActor : public AActor
{
	GENERATED_BODY()
	
private:
	float HalfCollisionHeight;

	// points added event support
	FPointsAddedEvent PointsAddedEvent;

	// saved data
	AConfigurationDataActor* ConfigurationData;

public:	
	// Sets default values for this actor's properties
	AFriesActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	 * @brief called when the fries actor overlaps with another actor
	 * @param OverlappedComp 
	 * @param OtherActor 
	 * @param OtherComp 
	 * @param OtherBodyIndex 
	 * @param bFromSweep 
	 * @param SweepResult 
	*/
	/*UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, 
			class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);*/

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	/**
	 * @brief when actor removed from level
	 * @param EndPlayReason 
	*/
	UFUNCTION()
		virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	FPointsAddedEvent& GetPointsAddedEvent();
};
