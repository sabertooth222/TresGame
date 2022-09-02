#pragma once
#include "CoreMinimal.h"
#include "TresCharMovementComponent.h"
#include "Mercuna3DMovementInterface.h"
#include "Mercuna3DMovementProperties.h"
#include "TresAICharMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresAICharMovementComponent : public UTresCharMovementComponent, public IMercuna3DMovementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercuna3DMovementProperties MovementProperties;
    
public:
    UTresAICharMovementComponent();
    
    // Fix for true pure virtual functions not being implemented
};

