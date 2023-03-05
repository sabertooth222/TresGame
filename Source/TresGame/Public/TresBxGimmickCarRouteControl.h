#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBxCarManagerActor.h"
#include "TresBxCarRouteControlGroupData.h"
#include "TresBxGimmickCarRouteControl.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ATresBxGimmickCarRouteControl : public ATresGimmickBxCarManagerActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBxCarRouteControlGroupData> GroupList;
    
    ATresBxGimmickCarRouteControl();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnedByCar() const;
    
};

