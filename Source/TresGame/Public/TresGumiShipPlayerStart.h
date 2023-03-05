#pragma once
#include "CoreMinimal.h"
#include "TresPlayerStart.h"
#include "TresGumiShipPlayerStart.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATresGumiShipPlayerStart : public ATresPlayerStart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> m_pConnectedActor;
    
public:
    ATresGumiShipPlayerStart();
};

