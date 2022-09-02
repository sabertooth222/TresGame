#pragma once
#include "CoreMinimal.h"
#include "TresDeathSentenceParam_e_ex357.h"
#include "TresAction_e_ex357_Base.h"
#include "TresAction4_e_ex357_DeathSentence.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction4_e_ex357_DeathSentence : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDeathSentenceParam_e_ex357> m_ParamList;
    
public:
    UTresAction4_e_ex357_DeathSentence();
};

