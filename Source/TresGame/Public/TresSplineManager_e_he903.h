#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "TresSplineManager_e_he903.generated.h"

class ATresWaterCurrentSplineActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresSplineManager_e_he903 : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
public:
    UTresSplineManager_e_he903();
};

