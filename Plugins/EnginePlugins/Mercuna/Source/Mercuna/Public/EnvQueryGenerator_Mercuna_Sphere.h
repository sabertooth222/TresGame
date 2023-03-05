#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMercunaPointDistribution.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_Mercuna_Sphere.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_Sphere : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FAIDataProviderIntValue NumberOfShells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FAIDataProviderIntValue PointsPerShell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    EMercunaPointDistribution Distribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TSubclassOf<UEnvQueryContext> center;
    
    UEnvQueryGenerator_Mercuna_Sphere();
};

