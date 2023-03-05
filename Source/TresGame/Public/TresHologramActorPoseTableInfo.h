#pragma once
#include "CoreMinimal.h"
#include "TresHologramActorPoseTableInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FTresHologramActorPoseTableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<UDataTable> m_pTable;
    
    TRESGAME_API FTresHologramActorPoseTableInfo();
};

