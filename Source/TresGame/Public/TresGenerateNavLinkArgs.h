#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGenerateNavLinkArgs.generated.h"

USTRUCT(BlueprintType)
struct FTresGenerateNavLinkArgs {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FFloatInterval Height;
    
    UPROPERTY(Config, EditAnywhere)
    FFloatInterval Length;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SamplingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSearchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerSearchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SamplingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPathLengthReductionPercentage;
    
    TRESGAME_API FTresGenerateNavLinkArgs();
};

