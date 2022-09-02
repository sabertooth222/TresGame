#pragma once
#include "CoreMinimal.h"
#include "TresBxCarActor.h"
#include "TresBxCar2TyreActor.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresBxCar2TyreActor : public ATresBxCarActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedStaticMeshEx;
    
    ATresBxCar2TyreActor();
};

