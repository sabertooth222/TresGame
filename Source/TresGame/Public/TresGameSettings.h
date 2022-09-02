#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "TresGameSettings.generated.h"

UCLASS(Blueprintable, ConfigDoNotCheckDefaults, Config=GameSettings)
class UTresGameSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    uint8 GamePadDecideType;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 GamePadIconType;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 KeyboardDispayType;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 SoundMasterVolume;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 SoundBgmVolume;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 SoundSeVolume;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 SoundVoiceVolume;
    
    UPROPERTY(Config, EditAnywhere)
    int8 DisplayGamma;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 KeyConfigCustom;
    
    UPROPERTY(Config, EditAnywhere)
    int8 MouseSensitivityCustom;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 Version;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DispLanguage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceLanguage;
    
    UPROPERTY(Config, EditAnywhere)
    FKey KeyConfigMain[21];
    
    UPROPERTY(Config, EditAnywhere)
    FKey KeyConfigSub[21];
    
public:
    UTresGameSettings();
};

