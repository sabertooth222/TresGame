#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNpcAINpcModeFreeWalkArea.generated.h"

class ATresNpcAINpcModeFreeWalkWayPoint;

UCLASS(Blueprintable)
class TRESGAME_API ATresNpcAINpcModeFreeWalkArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<ATresNpcAINpcModeFreeWalkWayPoint>> m_FreeWalkWayPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNotMoveToHeightDifference;
    
    ATresNpcAINpcModeFreeWalkArea();
    UFUNCTION(BlueprintCallable)
    void SetAreaRadius(float InRadius);
    
};

