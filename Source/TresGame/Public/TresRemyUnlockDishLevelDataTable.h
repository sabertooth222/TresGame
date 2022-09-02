#pragma once
#include "CoreMinimal.h"
#include "RemyDishLevel.h"
#include "Engine/DataTable.h"
#include "TresRemyUnlockDishLevelDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyUnlockDishLevelDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int16 EarnUnlockDishLevelPointsWhenSuccess;
    
    UPROPERTY(EditAnywhere)
    int16 EarnUnlockDishLevelPointsWhenGreatSuccess;
    
    UPROPERTY(EditAnywhere)
    int16 EarnUnlockDishLevelPointsWhenFail;
    
    UPROPERTY(EditAnywhere)
    TMap<RemyDishLevel, int16> UnlockDishLevelPoints;
    
    TRESGAME_API FTresRemyUnlockDishLevelDataTable();
};

