#pragma once
#include "CoreMinimal.h"
#include "TresEx304HitEffectManager.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEx304HitEffectManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_LaserEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SparkEffectCmp;
    
public:
    TRESGAME_API FTresEx304HitEffectManager();
};

