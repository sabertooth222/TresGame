#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex302_FreezeShot.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex302_FreezeShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ChargeEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ChargeEffectCmp;
    
    ATresProjectile_e_ex302_FreezeShot();
};

