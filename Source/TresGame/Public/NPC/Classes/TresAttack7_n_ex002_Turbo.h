#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack7_n_ex002_Turbo.generated.h"

UCLASS(HideDropdown, Blueprintable)
class UTresAttack7_n_ex002_Turbo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAccelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSlalomTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FallHeight;
    
    UTresAttack7_n_ex002_Turbo();
};

