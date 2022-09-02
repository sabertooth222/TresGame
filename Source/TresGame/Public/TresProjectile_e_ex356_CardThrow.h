#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex356_HideAndSeekBase.h"
#include "TresProjectile_e_ex356_CardThrow.generated.h"

UCLASS(Blueprintable)
class ATresProjectile_e_ex356_CardThrow : public ATresProjectile_e_ex356_HideAndSeekBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex356_CardThrow();
private:
    UFUNCTION(BlueprintCallable)
    void MoveUpdate(float InDeltaTime);
    
};

