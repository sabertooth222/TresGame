#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresFloorTestMode.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_FloorHeight.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_FloorHeight : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue FloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue TestHeight;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFloorTestMode::Type> TestMode;
    
    UTresEnvQueryTest_FloorHeight();
};

