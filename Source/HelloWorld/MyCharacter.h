// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class HELLOWORLD_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	FVector CurrentVelocity;

	bool bGrowing;

	UPROPERTY(EditAnywhere)
	USceneComponent* OurVisibleComponent;

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);
	
	void StartGrowing();

	void StopGrowing();
};
