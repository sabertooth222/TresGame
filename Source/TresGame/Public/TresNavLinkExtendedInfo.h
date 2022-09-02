#pragma once
#include "CoreMinimal.h"
#include "TresNavLinkExtendedInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresNavLinkExtendedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ElementSize;
    
    UPROPERTY(EditAnywhere)
    uint32 Version;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Data;
    
    TRESGAME_API FTresNavLinkExtendedInfo();
};

