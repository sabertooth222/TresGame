#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "TresEnvQueryGenerator_Context.generated.h"

class UEnvQueryContext;
class UEnvQueryItemType;

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryGenerator_Context : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> ContextItemType;
    
    UTresEnvQueryGenerator_Context();
};

