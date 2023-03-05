#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresStateID.h"
#include "TresActionDefinitionBase.generated.h"

class AActor;
class USceneComponent;

UCLASS(Abstract, NotPlaceable, BlueprintType)
class UTresActionDefinitionBase : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector m_Destination;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Export)
    TWeakObjectPtr<USceneComponent> m_LockonTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<ETresStateID>> m_ViableStates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_bActionAbortPermission: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 m_SubStep;
    
public:
    UTresActionDefinitionBase();
};

