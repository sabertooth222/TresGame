#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "ETresChrUniqueID.h"
#include "TresEventPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresEventPawnBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAutoChangeSkeletonUpdate: 1;
    
public:
    ATresEventPawnBase();
    UFUNCTION(BlueprintCallable)
    void BP_RestorePropertyToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BP_CopyPropertyFrom(ATresCharPawnBase* InSrcPawn, bool bAnimBlueprintCopy, bool bEquipmentCopy);
    
    UFUNCTION(BlueprintCallable)
    void BP_ApplyChrEquipment(ETresChrUniqueID InChrUniqueID);
    
};

