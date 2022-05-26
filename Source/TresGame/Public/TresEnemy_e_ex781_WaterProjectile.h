#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex781_WaterProjectile.generated.h"

class ATresCharPawnBase;

UCLASS()
class ATresEnemy_e_ex781_WaterProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_LookAheadTime;
    
private:
    UPROPERTY()
    ATresCharPawnBase* m_MyTarget;
    
public:
    ATresEnemy_e_ex781_WaterProjectile();
};

