#pragma once
#include "CoreMinimal.h"
#include "ETresUIWindowWaitType.h"
#include "ETresUIWindowPositionType.h"
#include "UObject/NoExportTypes.h"
#include "TresUIWindowSetting.generated.h"

USTRUCT(BlueprintType)
struct FTresUIWindowSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresUIWindowWaitType> WaitType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresUIWindowPositionType> PositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    TRESGAME_API FTresUIWindowSetting();
};

