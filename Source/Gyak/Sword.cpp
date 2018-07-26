// Fill out your copyright notice in the Description page of Project Settings.

#include "Sword.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASword::ASword()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sword = CreateDefaultSubobject<UStaticMeshComponent>(FName("Sword"));
	SetRootComponent(Sword);

	Handle = CreateDefaultSubobject<UStaticMeshComponent>(FName("Handle"));
	Handle->SetupAttachment(Sword);

	Blade = CreateDefaultSubobject<UStaticMeshComponent>(FName("Blade"));
	Blade->SetupAttachment(Sword);

	Guard = CreateDefaultSubobject<UStaticMeshComponent>(FName("Guard"));
	Guard->SetupAttachment(Sword);

	Pommel = CreateDefaultSubobject<UStaticMeshComponent>(FName("Pommel"));
	Pommel->SetupAttachment(Sword);
}

// Called when the game starts or when spawned
void ASword::BeginPlay()
{
	Super::BeginPlay();
	
	if (!GetAttachParentActor()) { return; }
}

// Called every frame
void ASword::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

