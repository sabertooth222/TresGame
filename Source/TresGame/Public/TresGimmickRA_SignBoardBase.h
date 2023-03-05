#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleStaticBase.h"
#include "TresGimmickRA_SignBoardBase.generated.h"

class UTresReactorComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickRA_SignBoardBase : public ATresGimmickSimpleStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
public:
    ATresGimmickRA_SignBoardBase();
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleMode(bool bIsBattleMode);
    
};

