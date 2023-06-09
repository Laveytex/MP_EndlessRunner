// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunnerCharacter.generated.h"

UCLASS()
class MP_ENDLESSRUNNER_API ARunnerCharacter : public ACharacter
{
	GENERATED_BODY()
	

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* CharViewCamera;
public:
	// Sets default values for this character's properties
	ARunnerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	void MoveRight(float value);

	UCameraComponent* GetCharViuwCamera();

	void RestartLevel();

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
		class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	float zPosition;
	FVector tempPos = FVector();

	bool CanMove;
	
	
};
