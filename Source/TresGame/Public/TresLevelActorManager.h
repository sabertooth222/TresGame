#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLevelActorManager.generated.h"

class USceneComponent;

UCLASS(Blueprintable, Config=Game)
class ATresLevelActorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* TresRootComponent;
    
    ATresLevelActorManager();
};

