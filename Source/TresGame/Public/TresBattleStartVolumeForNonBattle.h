#pragma once
#include "CoreMinimal.h"
#include "TresBattleStartVolume.h"
#include "TresBattleStartVolumeForNonBattle.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class TRESGAME_API ADEPRECATED_TresBattleStartVolumeForNonBattle : public ATresBattleStartVolume {
    GENERATED_BODY()
public:
    ADEPRECATED_TresBattleStartVolumeForNonBattle(const FObjectInitializer& ObjectInitializer);
};

