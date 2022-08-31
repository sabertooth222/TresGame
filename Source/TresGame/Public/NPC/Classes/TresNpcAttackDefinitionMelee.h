#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionMelee.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionMelee : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bHitTractionXYStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bHitTractionZUpStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bHitTractionZDownStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_EffectGroup;
    
public:
    UTresNpcAttackDefinitionMelee();
};

