// Fill out your copyright notice in the Description page of Project Settings.


#include "Wizard_Player.h"

// Sets default values
AWizard_Player::AWizard_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWizard_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWizard_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWizard_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

