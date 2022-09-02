#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex072.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex072 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_ex072();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShotHit() const;
    
};

