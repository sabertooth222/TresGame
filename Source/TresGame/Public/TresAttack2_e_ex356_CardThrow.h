#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresEnemyCardThrow_e_ex356.h"
#include "TresAttack_XIIILB_Base.h"
#include "TresEnemyCardThrowCardMoveParam_e_ex356.h"
#include "TresAttack2_e_ex356_CardThrow.generated.h"

class ATresProjectile_e_ex356_HideAndSeekBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex356_CardThrow : public UTresAttack_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemyCardThrow_e_ex356::Type> m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex356_HideAndSeekBase> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyCardThrowCardMoveParam_e_ex356> m_CardMoveParamList;
    
public:
    UTresAttack2_e_ex356_CardThrow();
};

