#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ETresRandomDistributionType.h"
#include "ETresControlledRandomPeriod.h"
#include "TresBTComposite_Random.generated.h"

UCLASS(Blueprintable)
class UTresBTComposite_Random : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFailOnAll: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresRandomDistributionType::Type> Distribution;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresControlledRandomPeriod::Type> Randomness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCustomPeriod: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Weights;
    
    UTresBTComposite_Random();
};

