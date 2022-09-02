#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_bx901_DarkCubeMineJoint.generated.h"

class UParticleSystemComponent;
class AActor;
class UTresAtkCollPrimitive;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_bx901_DarkCubeMineJoint : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_JointParticleComp;
    
    UPROPERTY(EditAnywhere)
    uint16 m_BoolArray[10];
    
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> m_StartActor;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> m_EndActor;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTresAtkCollPrimitive> m_AtkCollPrim;
    
public:
    ATresProjectile_e_bx901_DarkCubeMineJoint();
};

