// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FAWeapon.generated.h"


UCLASS()
class FREEAIM_API AFAWeapon : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AFAWeapon();

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UStaticMeshComponent* WeaponMesh;

};
