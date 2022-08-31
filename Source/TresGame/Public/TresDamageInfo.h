#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETresDamageAttribute.h"
#include "ETresCommandKind.h"
#include "ETresPhysDamageForceLevel.h"
#include "ETresAtkHitKnockbackType.h"
#include "ETresShootFlowKind.h"
#include "ETresDamageKind.h"
#include "ETresBadStatusType.h"
#include "TresDamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_AttackDataIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresShootFlowKind> m_ShootFlowKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresDamageKind> m_DamageKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresDamageAttribute m_DamageAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AttackSrcPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DamagePowerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DamageParabolaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DamageMoveLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DamageBrakeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DamageEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresAtkHitKnockbackType m_KnockbackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_KnockbackDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresBadStatusType m_BadStatusKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BadStatusEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BadStatusEffectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ReactionPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ArmorAttackPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_FormPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsMagicAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsFinishAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsKillerAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsIgnoreGuard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsRapidFireAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsCriticalHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsArmorDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsAerialAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsAttractionDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsCounterAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsJustGuardAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsEnableWeakGuardAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsEnableFullMpBurst: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsEnableMagicDraw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsEnableNoReactBodyCorrection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresPhysDamageForceLevel m_PhysForceLv;
    
    TRESGAME_API FTresDamageInfo();
};

