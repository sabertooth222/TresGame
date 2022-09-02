#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon100Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon100Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    ATresGumiShipSpWeapon100Actor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostShootBullet();
    
};

