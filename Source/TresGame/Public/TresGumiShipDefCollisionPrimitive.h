#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionPrimitive.h"
#include "TresGumiShipDefCollisionPrimitive.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipDefCollisionPrimitive : public UTresGumiShipCollisionPrimitive {
    GENERATED_BODY()
public:
    UTresGumiShipDefCollisionPrimitive();
};

