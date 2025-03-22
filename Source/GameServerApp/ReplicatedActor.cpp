// Fill out your copyright notice in the Description page of Project Settings.


#include "ReplicatedActor.h"

AReplicatedActor::AReplicatedActor()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
	MeshComponent->SetIsReplicated(true); 
}

// Called when the game starts or when spawned
void AReplicatedActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AReplicatedActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

}

// Called every frame
void AReplicatedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AReplicatedActor::SetMesh(UStaticMesh* NewMesh)
{
	if (MeshComponent && NewMesh)
	{
		MeshComponent->SetStaticMesh(NewMesh);
	}
}

