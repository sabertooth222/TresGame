#pragma once
#include "CoreMinimal.h"
#include "TresGimmickRecordChangePlayingSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGimmickRecordChangePlayingSignature, bool, Playing);

