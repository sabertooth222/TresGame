#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEmitterPool.generated.h"

class ATresEmitterPoolChild;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ATresEmitterPool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresEmitterPoolChild* m_pSubActor;
    
public:
    ATresEmitterPool();
};

