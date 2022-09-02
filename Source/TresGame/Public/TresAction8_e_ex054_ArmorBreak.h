#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemy_e_ex054_BattleStyle.h"
#include "TresAction8_e_ex054_ArmorBreak.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction8_e_ex054_ArmorBreak : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemy_e_ex054_BattleStyle> m_pro_BattleStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_StunTime;
    
    UTresAction8_e_ex054_ArmorBreak();
};

