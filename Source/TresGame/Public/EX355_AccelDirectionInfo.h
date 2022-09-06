#pragma once
#include "CoreMinimal.h"
#include "EEX355_AccelDir.h"
#include "EX355_AccelDirectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_AccelDirectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX355_AccelDir> Direction;
    
    TRESGAME_API FEX355_AccelDirectionInfo();
};

