#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "TresEnvQueryTest_IsTargetingContext.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UTresEnvQueryTest_IsTargetingContext : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UTresEnvQueryTest_IsTargetingContext();
};

