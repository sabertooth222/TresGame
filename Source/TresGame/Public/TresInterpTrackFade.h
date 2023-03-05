#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFade.h"
#include "ETresFadeTrack_TheaterMode.h"
#include "TresInterpTrackFadeKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ScreenFadeLayer -FallbackName=ESQEX_ScreenFadeLayer
#include "TresInterpTrackFade.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackFade : public UInterpTrackFade {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFadeTrack_TheaterMode> m_TheaterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackFadeKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_ScreenFadeLayer> m_FadeLayer;
    
    UTresInterpTrackFade();
};

