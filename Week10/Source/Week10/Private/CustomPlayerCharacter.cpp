// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerCharacter.h"

// Sets default values
ACustomPlayerCharacter::ACustomPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	PC = GetWorld()->GetFirstPlayerController();
	/*
	ListOfObjectives = { 
		"Go through the door",
		"ride the risers to the upper level",
		"get past the pushers",
		"cross the gap",
		"go through the door",
		"mission complete"
	};
	*/

}

// Called every frame
void ACustomPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACustomPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACustomPlayerCharacter::HandleItemCollected()
{
	ItemsCollected++;
	//play effects here
	PC->PlayerCameraManager->StartCameraShake(CamShake, 1.0f);

	ItemCollected();
}
void ACustomPlayerCharacter::UpdateQuest()
{

	CurrentObjective++;
	ObjectiveComplete();

}
