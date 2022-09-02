#pragma once
#include "CoreMinimal.h"
#include "EEX355_DashRoamDir.h"
#include "EEX355_DashMiddleAction.h"
#include "EX355_DashRoamDir.generated.h"

USTRUCT(BlueprintType)
struct FEX355_DashRoamDir {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEX355_DashRoamDir> m_DashRoamDir;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEX355_DashRoamDir> m_DashAttackDir;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEX355_DashMiddleAction> m_DashMiddleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDashMiddleActionTime;
    
    TRESGAME_API FEX355_DashRoamDir();
};

