// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraShakeBase.h"
#include "CustomPlayerCharacter.generated.h"

UCLASS()
class WEEK10_API ACustomPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACustomPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	APlayerController* PC;

	UPROPERTY(EditAnywhere,Category="Effects")
	TSubclassOf<class UCameraShakeBase>CamShake;

	//TArray<FString> ListOfObjectives;

	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//---coin tracking

	UFUNCTION(Blueprintcallable)
		void HandleItemCollected();

	UFUNCTION(BlueprintImplementableEvent)
		void ItemCollected();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int ItemsCollected = 0;

	// ---- quest tracking
	UFUNCTION(Blueprintcallable)
		void UpdateQuest();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int CurrentObjective = 0;

	UFUNCTION(BlueprintImplementableEvent)
		void ObjectiveComplete();
		//void ObjectiveComplete(FString objective);

	




	//UFUNCTION(BlueprintCallable)
	//	FORCEINLINE FString GetObjective(int32 index) { return ListOfObjectives[index]; }

	
};
