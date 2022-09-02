#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramActor.h"
#include "TresPhotoHologramEffectData.h"
#include "TresPhotoHologramDecoration.generated.h"

class UTresStaticMeshComponent;

UCLASS(Blueprintable)
class ATresPhotoHologramDecoration : public ATresPhotoHologramActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresPhotoHologramEffectData> EffectDataList;
    
public:
    ATresPhotoHologramDecoration();
    UFUNCTION(BlueprintCallable)
    void RequestRemoveHologram();
    
};

