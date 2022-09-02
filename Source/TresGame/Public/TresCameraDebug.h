#pragma once
#include "CoreMinimal.h"
#include "TresCameraBase.h"
#include "TresCameraDebug.generated.h"

class UDrawFrustumComponent;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraDebug : public ATresCameraBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDrawFrustumComponent* DrawFrustum;
    
public:
    ATresCameraDebug();
};

