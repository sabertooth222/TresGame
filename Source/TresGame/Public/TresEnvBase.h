#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnvBase.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresEnvBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    ATresEnvBase();
    UFUNCTION(BlueprintCallable)
    void RegistAllTickFunction(bool Enable, bool allComponent);
    
};

