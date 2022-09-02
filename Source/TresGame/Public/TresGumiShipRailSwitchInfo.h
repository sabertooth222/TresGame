#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailSwitchInfo.generated.h"

class ATresRailSlideActor;

USTRUCT(BlueprintType)
struct FTresGumiShipRailSwitchInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresRailSlideActor> m_pDefaultOnRail;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresRailSlideActor> m_pDefaultOffRail;
    
public:
    TRESGAME_API FTresGumiShipRailSwitchInfo();
};

