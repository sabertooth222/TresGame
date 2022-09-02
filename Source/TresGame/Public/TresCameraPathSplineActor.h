#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "TresCameraPathSplineActor.generated.h"

class ATresCameraPathSplineLinkActor;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraPathSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraPathSplineLinkActor* m_LinkSplineFromActor;
    
    ATresCameraPathSplineActor();
};

