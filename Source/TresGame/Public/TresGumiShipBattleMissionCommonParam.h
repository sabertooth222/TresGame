#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBattleMissionCommonParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionCommonParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_udNoDamageBonus;
    
    UPROPERTY(EditAnywhere)
    uint32 m_udBrokePartsBonus;
    
    UPROPERTY(EditAnywhere)
    uint32 m_udDefeatedGroupBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageScoreCoefficient;
    
    UPROPERTY(EditAnywhere)
    float m_fScoreRates[8];
    
    TRESGAME_API FTresGumiShipBattleMissionCommonParam();
};

