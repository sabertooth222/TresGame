#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresCarriageJumpActor_e_ex035.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ATresCarriageJumpActor_e_ex035 : public AActor {
    GENERATED_BODY()
public:
    ATresCarriageJumpActor_e_ex035();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsOccupied() const;
    
};

