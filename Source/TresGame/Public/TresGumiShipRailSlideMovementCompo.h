#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailSlideMovementCompoBase.h"
#include "TresGumiShipRailSlideMovementCompo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipRailSlideMovementCompo : public UTresGumiShipRailSlideMovementCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipRailSlideMovementCompo();
};

