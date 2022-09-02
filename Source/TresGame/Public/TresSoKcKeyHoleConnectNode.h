#pragma once
#include "CoreMinimal.h"
#include "TresSoKcKeyHoleConnectNode.generated.h"

class ATresSoKcKeyHoleGimmickActor;

USTRUCT(BlueprintType)
struct FTresSoKcKeyHoleConnectNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresSoKcKeyHoleGimmickActor> ConnectableKeyHole;
    
    TRESGAME_API FTresSoKcKeyHoleConnectNode();
};

