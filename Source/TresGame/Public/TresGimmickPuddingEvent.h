#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickPuddingEvent.generated.h"

class UTresReactorComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickPuddingEvent : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
public:
    ATresGimmickPuddingEvent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropItem();
    
};

