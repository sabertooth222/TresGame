#pragma once
#include "CoreMinimal.h"
#include "TresHologramActorPoseTableInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FTresHologramActorPoseTableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UDataTable> m_pTable;
    
    TRESGAME_API FTresHologramActorPoseTableInfo();
};

