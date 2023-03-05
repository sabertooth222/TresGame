#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectileGenerator_e_ex361_DarkMine.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex361_DarkMine : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_DarkMineArray;
    
    ATresProjectileGenerator_e_ex361_DarkMine();
};

