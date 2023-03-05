#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSnowDepthTailActor.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable, Config=Game)
class ATresSnowDepthTailActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
    ATresSnowDepthTailActor();
};

