#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresCollision.generated.h"

UCLASS(Abstract, Blueprintable, NotPlaceable)
class TRESGAME_API UTresCollision : public UObject {
    GENERATED_BODY()
public:
    UTresCollision();
};

