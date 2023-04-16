// Fill out your copyright notice in the Description page of Project Settings.

#include "DelegateDeclarations.h"
#include "EventManagerActor.h"

// Sets default values
AEventManagerActor::AEventManagerActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEventManagerActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEventManagerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEventManagerActor::AddPointsAddedEventInvoker(AFriesActor* Invoker)
{
	PointsAddedInvokers.Add(Invoker);
	for (auto& Element : PointsAddedListeners)
	{
		FDelegateHandle DelegateHandle = Element.Key->AddToPointsAddedEvent(Invoker->GetPointsAddedEvent());
		Element.Value.Add(Invoker, DelegateHandle);
		UE_LOG(LogTemp, Warning, TEXT("Adding Invoker to EventManager"));

	}
}

void AEventManagerActor::RemovePointsAddedEventInvoker(AFriesActor* Invoker)
{
	for (auto& Element : PointsAddedListeners)
	{
		if (Element.Value.Contains(Invoker))
		{
			Invoker->GetPointsAddedEvent().Remove(Element.Value[Invoker]);
			Element.Value.Remove(Invoker);
		}
	}
}

void AEventManagerActor::AddPointsAddedEventListener(AFeedTheTeddyGameModeBase* Listener)
{
	PointsAddedListeners.Add(Listener);
	for (auto& Element : PointsAddedInvokers)
	{
		FDelegateHandle DelegateHandle = Listener->AddToPointsAddedEvent(Element->GetPointsAddedEvent());
		PointsAddedListeners[Listener].Add(Element, DelegateHandle);
		UE_LOG(LogTemp, Warning, TEXT("Adding Listener to EventManager"));
	}
}

void AEventManagerActor::RemovePointsAddedEventListener(AFeedTheTeddyGameModeBase* Listener)
{
	for (auto* Element : PointsAddedInvokers)
	{
		if (PointsAddedListeners[Listener].Contains(Element))
		{
			Element->GetPointsAddedEvent().Remove(PointsAddedListeners[Listener][Element]);
		}
	}
}

//void AEventManagerActor::AddPointsAddedEventInvoker(AFriesActor* Invoker)
//{
//    PointsAddedEventInvokers.Add(Invoker);
//    for (auto& Element : PointsAddedEventSubscribers)
//    {
//        FDelegateHandle DelegateHandle = Element.Key->AddToPointsAddedEvent(Invoker->GetPointsAddedEvent());
//        Element.Value.Add(Invoker, DelegateHandle);
//    }
//}
//
//void AEventManagerActor::RemovePointsAddedEventInvoker(AFriesActor* Invoker)
//{
//    for (auto& Element : PointsAddedEventSubscribers)
//    {
//        if (Element.Value.Contains(Invoker))
//        {
//            Invoker->GetPointsAddedEvent().Remove(Element.Value[Invoker]);
//            Element.Value.Remove(Invoker);
//        }
//    }
//}
//
//void AEventManagerActor::AddPointsAddedEventListener(AFeedTheTeddyGameModeBase* Listener)
//{
//    PointsAddedEventSubscribers.Add(Listener);
//    for (auto& Element : PointsAddedEventInvokers)
//    {
//        FDelegateHandle DelegateHandle = Listener->AddToPointsAddedEvent(Element->GetPointsAddedEvent());
//        PointsAddedEventSubscribers[Listener].Add(Element, DelegateHandle);
//    }
//}
//
//void AEventManagerActor::RemovePointsAddedEventListener(AFeedTheTeddyGameModeBase* Listener)
//{
//    for (auto* Element : PointsAddedEventInvokers)
//    {
//        if (PointsAddedEventSubscribers[Listener].Contains(Element))
//        {
//            Element->GetPointsAddedEvent().Remove(PointsAddedEventSubscribers[Listener][Element]);
//        }
//    }
//}

void AEventManagerActor::AddGameOverEventInvoker(ABurgerPawn* Invoker)
{
    /*GameOverEventInvokers.Add(Invoker);
    for (auto& Element : GameOverEventSubscribers)
    {
        FDelegateHandle DelegateHandle = Element.Key->AddToGameOverEvent(Invoker->GetGameOverEvent());
        Element.Value.Add(Invoker, DelegateHandle);
    }*/
}

void AEventManagerActor::RemoveGameOverEventInvoker(ABurgerPawn* Invoker)
{
    for (auto& Element : GameOverEventSubscribers)
    {
        if (Element.Value.Contains(Invoker))
        {
            Invoker->GetGameOverEvent().Remove(Element.Value[Invoker]);
            Element.Value.Remove(Invoker);
        }
    }
}

void AEventManagerActor::AddGameOverEventListener(AFeedTheTeddyGameModeBase* Listener)
{
    /*GameOverEventSubscribers.Add(Listener);
    for (auto& Element : GameOverEventInvokers)
    {
        FDelegateHandle DelegateHandle = Listener->AddToGameOverEvent(Element->GetGameOverEvent());
        GameOverEventSubscribers[Listener].Add(Element, DelegateHandle);
    }*/
}

void AEventManagerActor::RemoveGameOverEventListener(AFeedTheTeddyGameModeBase* Listener)
{
    for (auto* Element : GameOverEventInvokers)
    {
        if (GameOverEventSubscribers[Listener].Contains(Element))
        {
            Element->GetGameOverEvent().Remove(GameOverEventSubscribers[Listener][Element]);
        }
    }
}

