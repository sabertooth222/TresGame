#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_EncloseFlareParam.h"
#include "TresProjectileGenerator_e_ex771_EncloseFlare.generated.h"

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex771_EncloseFlare : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_EncloseFlareParam> m_EncloseFlareParamArray;
    
    ATresProjectileGenerator_e_ex771_EncloseFlare();
};

