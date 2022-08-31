#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpcAttackDefinitionCombo.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown, BlueprintType)
class UTresNpcAttackDefinitionCombo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* m_Attack1AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* m_Attack2AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* m_Attack3AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableRootMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableRootMoveAndTraction;
    
public:
    UTresNpcAttackDefinitionCombo();
};

