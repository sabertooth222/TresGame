#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefFoodstuff.h"
#include "Engine/DataTable.h"
#include "RemyRecipeType.h"
#include "ETresItemDefFood.h"
#include "ETresItemDefAccessory.h"
#include "ETresItemDefBattleItem.h"
#include "TresRemyRewardDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyRewardDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int16 CookingSuccessPoints;
    
    UPROPERTY(EditAnywhere)
    int16 CookingGreatSuccessPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefAccessory Milestone1Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefBattleItem Milestone2Reward;
    
    UPROPERTY(EditAnywhere)
    int16 CircumductionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff CircumductionReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFood CookingFailedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyRecipeType SpecialFoodStuffRecipeType;
    
    TRESGAME_API FTresRemyRewardDataTable();
};

