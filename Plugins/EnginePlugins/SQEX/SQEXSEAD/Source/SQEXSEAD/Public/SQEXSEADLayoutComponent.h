#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SQEXSEADLayoutInfo.h"
#include "SQEXSEADLayoutComponent.generated.h"

class USoundBase;
class USQEXSEADLayoutAudioComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADLayoutComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FSQEXSEADLayoutInfo LayoutInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bIgnoreObstruction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bOverrideInteriorFactor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float InteriorFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float FadeTime;
    
private:
    UPROPERTY(Export, Transient)
    USQEXSEADLayoutAudioComponent* AudioComponent;
    
public:
    USQEXSEADLayoutComponent();
};

