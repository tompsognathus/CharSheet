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

int UAdventurer::CalculateAbilityModifier(int AbilityScore)
{
	float AbilityModifier = (AbilityScore - 10) / 2.0f;
	return FMath::FloorToInt(AbilityModifier);
}

int UAdventurer::CalculatePointBuyValue(int AbilityScore)
{
	if (AbilityScore >= 8 && AbilityScore <= 13)
	{
		return AbilityScore - 8;
	}
	else if (AbilityScore <= 15)
	{
		return (AbilityScore - 13) * 2 + 5;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid Ability Score for Point Buy!"));
		return 27;
	}
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