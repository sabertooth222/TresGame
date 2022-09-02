#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickBxPuddingManager.generated.h"

class ATresGimmickBxPudding;

UCLASS(Blueprintable)
class ATresGimmickBxPuddingManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmickBxPudding*> m_pPuddings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bEnableLauncher;
    
public:
    ATresGimmickBxPuddingManager();
    UFUNCTION(BlueprintCallable)
    void NotifyStop();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnableLauncher();
    
};

