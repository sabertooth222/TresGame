#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresNpcState_n_dw003_FRMickeyAqua.generated.h"

class UTresLockonTargetComponent;

UCLASS(Blueprintable)
class UTresNpcState_n_dw003_FRMickeyAqua : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_LockonTarget;
    
    UTresNpcState_n_dw003_FRMickeyAqua();
};

