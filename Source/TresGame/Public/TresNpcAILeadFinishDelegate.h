#pragma once
#include "CoreMinimal.h"
#include "TresNpcAILeadFinishDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresNpcAILeadFinish, FName, LeadID);

