#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionRanged.generated.h"

UCLASS(HideDropdown, BlueprintType)
class UTresNpcAttackDefinitionRanged : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bPitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PitchToleranceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PitchToleranceDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ShotPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ShotPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ShotYawMinMax;
    
public:
    UTresNpcAttackDefinitionRanged();
};

