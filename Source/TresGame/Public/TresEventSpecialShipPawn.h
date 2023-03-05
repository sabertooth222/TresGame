#pragma once
#include "CoreMinimal.h"
#include "TresEventPawnBase.h"
#include "TresEventSpecialShipPawn.generated.h"

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresEventSpecialShipPawn : public ATresEventPawnBase {
    GENERATED_BODY()
public:
    ATresEventSpecialShipPawn(const FObjectInitializer& ObjectInitializer);
};

