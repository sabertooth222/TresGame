#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolumeData.h"
#include "TresLevelEntityControlVolumeData_Float.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntityControlVolumeData_Float : public UTresLevelEntityControlVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_Float[4];
    
    UTresLevelEntityControlVolumeData_Float();
};

