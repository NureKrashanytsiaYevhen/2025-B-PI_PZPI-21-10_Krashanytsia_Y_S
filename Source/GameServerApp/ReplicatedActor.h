// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReplicatedActor.generated.h"

UCLASS()
class GAMESERVERAPP_API AReplicatedActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AReplicatedActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Setup", Replicated)
	UStaticMeshComponent* MeshComponent;

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetMesh(UStaticMesh* NewMesh);

};
