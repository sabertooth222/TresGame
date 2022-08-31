#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionInterface.h"
#include "TresNpcTractionParam.h"
#include "TresNpcAttackDefinitionBase.generated.h"

class AActor;

UCLASS(HideDropdown, Blueprintable)
class UTresNpcAttackDefinitionBase : public UTresAttackDefinitionBase, public ITresNpcAttackDefinitionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bFlyingMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bSwimAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bEnablePitchTurnSwim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bOnShotAbilityUsed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bStartVelocityClear: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bEnableStartYawMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StartYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresNpcTractionParam m_AnimNotifyTractionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bWeaponVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bUsedTractionLimitAngle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TractionLimitAngleJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bTractionPitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TractionPitchUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bTractionDecel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TractionDecelMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TractionMinMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> m_AssignTarget;
    
public:
    UTresNpcAttackDefinitionBase();
    
    // Fix for true pure virtual functions not being implemented
};

