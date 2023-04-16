// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "HomingActorComponent.h"
#include "HomingActorInterface.h"
#include "TeddyBearProjectileActor.h"
#include "Sound/SoundCue.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearActor.generated.h"

UCLASS()
class FEEDTHETEDDY_API ATeddyBearActor : public AActor, public IHomingActorInterface
{
	GENERATED_BODY()

private:
	// saved data
	AConfigurationDataActor* ConfigurationData;

	float HalfCollisionHeight, HalfCollisionWidth;

	float ProjectileOffsetAmount{ 10 };

	// saved for efficiency
	//AConfigurationDataActor* ConfigurationData;

	// saved for interface implementation
	UStaticMeshComponent* StaticMeshComponent;

	float ImpulseForce;

	// homing support
	UHomingActorComponent* HomingComponent;

	void StartShootTimer();

	bool IsOffScreen();

	void ShootProjectile();

public:	
	// Sets default values for this actor's properties
	ATeddyBearActor();

	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Projectile"),
		Category = "Components")
		TSubclassOf<ATeddyBearProjectileActor> UProjectileClass;

	UStaticMeshComponent* GetStaticMesh() override;

	float GetImpulseForce() override;

	float GetHomingDelay() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/*UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, 
						class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
						int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);*/
};
