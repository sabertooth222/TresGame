#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "ETresEnemyToyKind.h"
#include "TresEnemyToyActor.generated.h"

class UNavModifierComponent;

UCLASS(Abstract, Blueprintable)
class ATresEnemyToyActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* MyNavModifierComponent;
    
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemyToyKind> m_ToyKind;
    
public:
    ATresEnemyToyActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUse() const;
    
};

