#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresDropItemID.h"
#include "TresGimmickCA_PrizeReactor.generated.h"

class UTresReactorComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickCA_PrizeReactor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_ReactorComp;
    
public:
    ATresGimmickCA_PrizeReactor();
    UFUNCTION(BlueprintCallable)
    void GetPrizeItem(ETresDropItemID dropID);
    
};

