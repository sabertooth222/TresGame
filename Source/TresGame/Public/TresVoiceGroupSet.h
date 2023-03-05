#pragma once
#include "CoreMinimal.h"
#include "TresVoiceGroup.h"
#include "Engine/DataAsset.h"
#include "TresVoiceGroupSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresVoiceGroupSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresVoiceGroup> m_VoiceGroups;
    
public:
    UTresVoiceGroupSet();
};

