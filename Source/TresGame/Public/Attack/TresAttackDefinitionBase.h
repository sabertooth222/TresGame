#pragma once
#include "CoreMinimal.h"
#include "TresFNpcAIAttackDefInfo.h"
#include "TresActionDefinitionBase.h"
#include "ETresAttackDefinition.h"
#include "TresAttackDefinitionBase.generated.h"

class UEnvQuery;

UCLASS(Abstract, Blueprintable)
class UTresAttackDefinitionBase : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresAttackDefinition::Type> m_AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_AttackName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bMinDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bMaxDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bMinHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bMaxHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float m_EQSRangeRefinement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDirectPathRequired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bLineOfSightRequired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UEnvQuery* m_ActionEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bTargetRequired: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 m_bSelfInViewport: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bValidateYaw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_YawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_YawTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bValidatePitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PitchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PitchTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEditNpcAIInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresFNpcAIAttackDefInfo m_NpcAIInfo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool m_bIndirectAttack;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName m_AttackerDataID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_AttackedDataID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float m_AttackDuration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool m_bCanMultiHit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float m_SuspendTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float m_MissScore;
    
public:
    UTresAttackDefinitionBase();
};

