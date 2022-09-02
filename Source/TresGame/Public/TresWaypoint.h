#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresWaypointKind.h"
#include "TresWaypoint.generated.h"

class ATresWaypoint;

UCLASS(Blueprintable)
class ATresWaypoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresWaypointKind::Type> MyWaypointKind;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresWaypoint> NextWaypoint;
    
    ATresWaypoint();
};

