#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon050Actor.generated.h"

class ATresGumiShipProjectileBase;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon050Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    ATresGumiShipSpWeapon050Actor();
    UFUNCTION(BlueprintCallable)
    bool SetTarget(ATresGumiShipProjectileBase* pProjectile);
    
};

