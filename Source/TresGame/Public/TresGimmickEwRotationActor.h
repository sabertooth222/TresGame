#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickEwRotationActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ATresGimmickEwRotationActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
public:
    ATresGimmickEwRotationActor();
    UFUNCTION(BlueprintCallable)
    void SetRotationEx(const FRotator& Rotator);
    
    UFUNCTION(BlueprintCallable)
    void DisableUpdateMoveNavOctTree();
    
};

