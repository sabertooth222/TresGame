#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SaveInfo_e_ex082.generated.h"

USTRUCT(BlueprintType)
struct FSaveInfo_e_ex082 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    uint8 bInheritParam: 1;
    
    UPROPERTY(SaveGame)
    uint8 bIsModeChangeRegionBreak: 1;
    
    UPROPERTY(SaveGame)
    FVector ModeChangePawnSpawnLocation;
    
    UPROPERTY(SaveGame)
    FRotator ModeChangePawnSpawnRotation;
    
    UPROPERTY(SaveGame)
    int32 ModeChangePawnAppearMode;
    
    TRESGAME_API FSaveInfo_e_ex082();
};

