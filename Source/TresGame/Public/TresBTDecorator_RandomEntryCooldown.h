#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresRandomEntryCooldownProbabilitySource.h"
#include "TresBTDecorator_RandomEntryCooldown.generated.h"

UCLASS()
class UTresBTDecorator_RandomEntryCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresRandomEntryCooldownProbabilitySource::Type> m_ValueType;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseLiteral: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    float m_LiteralValue;
    
    UPROPERTY(EditAnywhere)
    float m_CooldownTime;
    
    UTresBTDecorator_RandomEntryCooldown();
};

