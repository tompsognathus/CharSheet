// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Adventurer.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CHARSHEET_API UAdventurer : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAdventurer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="Adventurer")
	void SetAdventurerName(FString NewName);

	UFUNCTION(BlueprintCallable, Category = "Adventurer")
		void SetAdventurerPronounHe(FString NewName);

	UFUNCTION(BlueprintCallable, Category = "Adventurer")
		void SetAdventurerPronounHim(FString NewName);

	UFUNCTION(BlueprintCallable, Category = "Adventurer")
		void SetAdventurerPronounHis(FString NewName);

	UPROPERTY(BlueprintReadOnly)
	int PointsRemaining = 27;

private:
	UPROPERTY(EditAnywhere)
	FString Name = "";

	UPROPERTY(EditAnywhere)
	FString PronounHe = "";

	UPROPERTY(EditAnywhere)
	FString PronounHim = "";

	UPROPERTY(EditAnywhere)
	FString PronounHis = "";


	UPROPERTY(EditAnywhere)
	int Level = 1;

	UPROPERTY(EditAnywhere)
	int Xp = 0;

};
