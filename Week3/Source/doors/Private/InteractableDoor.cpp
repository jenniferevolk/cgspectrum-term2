// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"
#include "DoorInteractorComponent.h"

AInteractableDoor::AInteractableDoor()
{
	DoorInteractorComponent =CreateDefaultSubobject<UDoorInteractorComponent>(TEXT("DoorInteractorComponent"));
}

