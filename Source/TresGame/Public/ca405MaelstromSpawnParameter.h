#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyShipCoreSpawnData.h"
#include "UObject/NoExportTypes.h"
#include "ca405MaelstromSpawnParameter.generated.h"

USTRUCT(BlueprintType)
struct Fca405MaelstromSpawnParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatInterval m_YawRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_YawLimitRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_RadiusRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_DepthRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyShipCoreSpawnData> m_CoreParamArray;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval m_SpawnCoreNumRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SelectWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DamageAmount;
    
    TRESGAME_API Fca405MaelstromSpawnParameter();
};

