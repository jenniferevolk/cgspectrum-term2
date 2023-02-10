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
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ACustomPlayerCharacter::RandomlyShakeThingsUp, 3.0f, true, 0.0f);
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
	


	ItemCollected();
}
void ACustomPlayerCharacter::UpdateQuest()
{

	CurrentObjective++;
	ObjectiveComplete();

}
void ACustomPlayerCharacter::RandomlyShakeThingsUp()
{
	int32 chance = FMath::RandRange(1, 10);
	
	UE_LOG(LogTemp, Warning, TEXT("check if shake: %d"), chance);
	if (chance <=3)
	{
		int32 duration = FMath::RandRange(1, 2);
		int32 intensity = FMath::RandRange(.1f, 1.0f);
		for (int i = 0; i < duration; i++)
		{
			PC->PlayerCameraManager->StartCameraShake(CamShake, 0.5f);
		}
	}
}
