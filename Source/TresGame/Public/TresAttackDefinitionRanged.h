#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttackDefinitionRanged.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttackDefinitionRanged : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    class UAnimSequenceBase* m_AttackAnimData;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_NumberOfAttacks;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<class ATresProjectileBase> m_Projectile;
};

