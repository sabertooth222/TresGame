#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpWeapon230Actor.h"
#include "TresGumiShipSpWeapon210Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon210Actor : public ATresGumiShipSpWeapon230Actor {
    GENERATED_BODY()
public:
    ATresGumiShipSpWeapon210Actor(const FObjectInitializer& ObjectInitializer);
};

