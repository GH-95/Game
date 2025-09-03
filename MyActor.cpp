// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	int32 X = 0;
	int32 Y = 0;

	UE_LOG(LogTemp, Error, TEXT("Start : % d, % d"), X, Y);

	for (int32 i = 1; i <= 10; i++)
	{
		int32 Random1 = FMath::RandRange(0, 1);
		int32 Random2 = FMath::RandRange(0, 1);

		X += Random1;
		Y += Random2;

		UE_LOG(LogTemp, Error, TEXT("Move %d : %d, %d"), i, X, Y);
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

