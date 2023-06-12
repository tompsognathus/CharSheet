// Fill out your copyright notice in the Description page of Project Settings.


#include "Adventurer.h"

// Sets default values for this component's properties
UAdventurer::UAdventurer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UAdventurer::BeginPlay()
{
	Super::BeginPlay();

	
	
}


// Called every frame
void UAdventurer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);	
}

void UAdventurer::SetAdventurerName(FString NewName)
{
	Name = NewName;
}

void UAdventurer::SetAdventurerPronounHe(FString NewPronoun)
{
	PronounHe = NewPronoun;
}

void UAdventurer::SetAdventurerPronounHim(FString NewPronoun)
{
	PronounHim = NewPronoun;
}

void UAdventurer::SetAdventurerPronounHis(FString NewPronoun)
{
	PronounHis = NewPronoun;
}