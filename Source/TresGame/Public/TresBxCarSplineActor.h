#pragma once
#include "CoreMinimal.h"
#include "EGimmickBX_CarSplineBlinker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "TresBxCarSplineActor.generated.h"

UCLASS(Blueprintable)
class ATresBxCarSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGimmickBX_CarSplineBlinker> m_eBlinkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNoRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHighSpeed;
    
    ATresBxCarSplineActor();
};

