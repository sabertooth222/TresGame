#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresEncountSubEQSVolume.generated.h"

UCLASS(Blueprintable)
class ATresEncountSubEQSVolume : public ATresVolume {
    GENERATED_BODY()
public:
    ATresEncountSubEQSVolume(const FObjectInitializer& ObjectInitializer);
};

