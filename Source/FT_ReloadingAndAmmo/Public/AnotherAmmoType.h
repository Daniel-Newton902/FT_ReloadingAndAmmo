// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AnotherAmmoType.generated.h"

/**
 * 
 */
UCLASS()
class FT_RELOADINGANDAMMO_API UAnotherAmmoType : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
    FString AmmoName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
    int AmmoCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
    int Damage;
	
};
