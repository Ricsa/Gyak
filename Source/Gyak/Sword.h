// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sword.generated.h"

UCLASS()
class GYAK_API ASword : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASword();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapons")
	UStaticMeshComponent* Sword = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapons")
	UStaticMeshComponent* Handle = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapons")
	UStaticMeshComponent* Blade = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapons")
	UStaticMeshComponent* Pommel = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapons")
	UStaticMeshComponent* Guard = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:

};
