#pragma once
#include "CoreMinimal.h"
#include "TresParamDispatcherPostInterpChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresParamDispatcherPostInterpChangeDelegate, FName, ParameterName);

