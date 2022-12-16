// Fill out your copyright notice in the Description page of Project Settings.
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include"Engine/TriggerBox.h"
#include"Engine/World.h"
#include "ObjectiveWorldSubSystem.h"
#include "ReachedExitComponent.h"

// Sets default values for this component's properties
UReachedExitComponent::UReachedExitComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UReachedExitComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UReachedExitComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (TriggerBox && GetWorld() && GetWorld()->GetFirstLocalPlayerFromController())
	{
		APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
		if (PlayerPawn && TriggerBox->IsOverlappingActor(PlayerPawn))
		{
			ExitReached();
		}

	}
}

void UReachedExitComponent::ExitReached()
{
	UObjectiveComponent* ObjectiveComponent = GetOwner()->FindComponentByClass<UObjectiveComponent>();
	if (ObjectiveComponent)
	{
		ObjectiveComponent->SetState(EObjectiveState::OS_Completed);
	}
}

