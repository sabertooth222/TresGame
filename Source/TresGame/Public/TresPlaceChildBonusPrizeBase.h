#pragma once
#include "CoreMinimal.h"
#include "TresPlacePrizeBase.h"
#include "TresGeneratorInterface.h"
#include "TresPlaceChildBonusPrizeBase.generated.h"

class UTres1dChainActorComponent;

UCLASS(Abstract, Blueprintable)
class ATresPlaceChildBonusPrizeBase : public ATresPlacePrizeBase, public ITresGeneratorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTres1dChainActorComponent* DebugTres1dChainActorComponent;
    
    ATresPlaceChildBonusPrizeBase();
    
    // Fix for true pure virtual functions not being implemented
};

