#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickStaticBase.generated.h"

class UTresRootComponent;
class UTresStaticMeshComponent;
class UTresEffectAttachComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickStaticBase : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
public:
    ATresGimmickStaticBase();
    UFUNCTION(BlueprintCallable)
    void SetCanEverAffectNavigation(bool bRelevant);
    
};

