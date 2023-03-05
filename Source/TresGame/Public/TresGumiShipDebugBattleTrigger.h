#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipDebugBattleTrigger.generated.h"

class ATresGumiShipActualRailSlideArrangement;
class USphereComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresGumiShipDebugBattleTrigger : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipActualRailSlideArrangement* m_pArrangement;
    
public:
    ATresGumiShipDebugBattleTrigger();
    UFUNCTION(BlueprintCallable)
    void _BeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
};

