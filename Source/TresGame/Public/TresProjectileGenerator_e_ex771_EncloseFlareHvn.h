#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_EncloseFlareHvnParam.h"
#include "TresProjectileGenerator_e_ex771_EncloseFlareHvn.generated.h"

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex771_EncloseFlareHvn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_EncloseFlareHvnParam> m_EncloseFlareParamArray;
    
    ATresProjectileGenerator_e_ex771_EncloseFlareHvn();
};

