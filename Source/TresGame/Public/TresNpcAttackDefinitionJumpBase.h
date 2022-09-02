#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAttackDefinitionJumpBase.generated.h"

UCLASS(HideDropdown, BlueprintType)
class UTresNpcAttackDefinitionJumpBase : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_JumpStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_JumpRiseLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_JumpDownLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_JumpLandAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_JumpAttackUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_JumpAttackDownAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpAttackEnableZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpAttackUpRangeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpAttackDownRangeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpAttackDecelMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpAttackMinMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_JumpHomingSpeedEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpHomingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_JumpHomingYawMaxEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpHomingYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_EnableSpeedCorrectionUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_EnableSpeedCorrectionDown: 1;
    
public:
    UTresNpcAttackDefinitionJumpBase();
};

