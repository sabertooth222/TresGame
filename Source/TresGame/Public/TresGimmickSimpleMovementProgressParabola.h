#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleMovementProgressStraight.h"
#include "TresGimmickSimpleMovementProgressParabola.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresGimmickSimpleMovementProgressParabola : public UTresGimmickSimpleMovementProgressStraight {
    GENERATED_BODY()
public:
    UTresGimmickSimpleMovementProgressParabola();
};

