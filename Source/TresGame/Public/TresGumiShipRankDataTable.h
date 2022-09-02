#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefGumiEtc.h"
#include "TresGumiShipRankDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipRankDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nPrize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nNextPrize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nGummiShipCostAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nTinyShipCostAdd;
    
    UPROPERTY(EditAnywhere)
    int16 m_nAbilityPointAdd;
    
    UPROPERTY(EditAnywhere)
    int8 m_nTinyUseAdd;
    
    UPROPERTY(EditAnywhere)
    int8 m_nFormationAdd;
    
    UPROPERTY(EditAnywhere)
    ETresItemDefGumiEtc m_nAbilityKind[5];
    
    TRESGAME_API FTresGumiShipRankDataTable();
};

