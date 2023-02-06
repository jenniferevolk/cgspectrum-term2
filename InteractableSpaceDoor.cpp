// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableSpaceDoor.h"
#include "SpaceDoorInteractorComponent.h"

// Sets default values
AInteractableSpaceDoor::AInteractableSpaceDoor()
{
	SpaceDoorInteractorComponent = CreateDefaultSubobject<USpaceDoorInteractorComponent>(TEXT("SpaceDoorInteractorComponent"));
}

