#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramEffectInstance.generated.h"

class UParticleSystemComponent;
class ATresPhotoHologramActor;

USTRUCT(BlueprintType)
struct FTresPhotoHologramEffectInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_pPSCList;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresPhotoHologramActor> m_pOwner;
    
public:
    TRESGAME_API FTresPhotoHologramEffectInstance();
};

