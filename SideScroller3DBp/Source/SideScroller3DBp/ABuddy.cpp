// Fill out your copyright notice in the Description page of Project Settings.

#include "ABuddy.h"


// Sets default values
AABuddy::AABuddy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABuddy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABuddy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

