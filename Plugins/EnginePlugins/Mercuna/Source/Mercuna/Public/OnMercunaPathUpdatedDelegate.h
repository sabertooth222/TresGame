#pragma once
#include "CoreMinimal.h"
#include "EMercunaPathEvent.h"
#include "OnMercunaPathUpdatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMercunaPathUpdated, TEnumAsByte<EMercunaPathEvent::Type>, PathEvent);

