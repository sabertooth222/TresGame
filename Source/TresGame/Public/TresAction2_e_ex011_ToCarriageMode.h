#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex011_Base.h"
#include "TresAction2_e_ex011_ToCarriageMode.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex011_ToCarriageMode : public UTresAction_e_ex011_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UAnimSequenceBase* m_AnimDataList[3];
    
public:
    UTresAction2_e_ex011_ToCarriageMode();
};

