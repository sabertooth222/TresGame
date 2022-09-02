#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "TresGameUserSettings.generated.h"

UCLASS(Blueprintable)
class UTresGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    uint8 VolumetricRenderQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 UICharaRenderQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 SceneCaptureRenderQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 AOQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 AAType;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ShadowResolutionQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 TextureQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 FoliageQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 SSRQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 CharaLODQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 DisableLOD;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 VolumetricFogQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 CapsuleShadowQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 BloomQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 MotionBlurQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 LensFlareQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 DepthOfFieldQuality;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 DisableFog;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ResolutionScaleBase;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFPS;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 EnableFPSSettingToCutscene;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 EnableShadowSettingToCutscene;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 EnableHDR;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRBloomBoost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRSceneColorBoost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRUIBrightness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDRUIGamma;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ColorVisionDeficiencyType;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ColorVisionDeficiencySeverity;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ColorVisionDeficiencyCorrect;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 ColorVisionDeficiencyShowCorrection;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 GraphicsPreset;
    
    UPROPERTY(Config, EditAnywhere)
    int8 HDRBrightness;
    
public:
    UTresGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ApplyNonResolutionSettings();
    
};

