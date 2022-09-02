#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "TresRaPuddingSplineActor.generated.h"

UCLASS(Blueprintable)
class ATresRaPuddingSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PointID;
    
    ATresRaPuddingSplineActor();
};

