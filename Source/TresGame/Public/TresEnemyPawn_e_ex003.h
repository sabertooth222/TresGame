#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemy_e_ex003Effect.h"
#include "TresEnemyPawn_e_ex003.generated.h"

class UParticleSystemComponent;
class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex003 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MeteorMoveSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_FireEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex003Effect> m_FireEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ChangeFlameMaterialTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_DamageFlameModeShiftHp;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_DamageFlameModeShiftProbability[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_NextFlameModeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_WeakTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFlameMode;
    
public:
    ATresEnemyPawn_e_ex003();
    UFUNCTION(BlueprintCallable)
    void SetFlameMode(bool NewIsFlameMode);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsWeak();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsFlameMode();
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsFlameAction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFullBody2BlendRate() const;
    
};

