#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresWearformSetUnit.h"
#include "TresWearformSet.generated.h"

UCLASS(Blueprintable)
class UTresWearformSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresWearformSetUnit m_Forms[11];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableColorChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ColorChangeMaterials;
    
public:
    UTresWearformSet();
};

