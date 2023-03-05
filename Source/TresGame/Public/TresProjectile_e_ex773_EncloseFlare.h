#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex773_EncloseFlare.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_EncloseFlare : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_PCWarpStEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_PCWarpEndEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AtkColTime;
    
    ATresProjectile_e_ex773_EncloseFlare();
};

