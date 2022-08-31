#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLoadAsset.h"
#include "UObject/NoExportTypes.h"
#include "ETresItemDefWeapon.h"
#include "TresGameModeLoadAsset.generated.h"

class UTresEnemyCommonParam;
class ATresPrizeBox;
class UTresFriendData;
class ATresAICoordinator;
class ATresPrize;
class UTresDamageCommonParam;
class UDataTable;
class UParticleSystem;
class ATresItemMognetMedal;
class UTresPhysMatEffectAsset;
class USQEX_ParticleAttachDataAsset;
class UBlueprint;
class ATresKHShaderController;
class ATresAdhereObjBase;
class UTresDamageType;

UCLASS(Blueprintable)
class UTresGameModeLoadAsset : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_HpPrizeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_HpPrizeL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_MpPrizeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_MpPrizeL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_MunnyPrizeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_MunnyPrizeM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_MunnyPrizeL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_FocusPrizeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_FocusPrizeL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_CrabPrize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_MovableCrabPrize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_LightPrizeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrize> m_LightPrizeL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrizeBox> m_HealPrizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrizeBox> m_MatePrizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrizeBox> m_FstfPrizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresPrizeBox> m_RarePrizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTresEnemyCommonParam> EnemyCommonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* m_EnemyBaseStatusListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* m_EnemyShipBaseStatusListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTresDamageCommonParam> m_FriendDamageCommonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTresFriendData* m_FriendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTresDamageCommonParam> m_PlayerDamageCommonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresItemMognetMedal> m_MognetMedalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnCriticalHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnGuardReflectEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnStaggerReflectEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnInvincibleHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnArmorHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnIgnoreGuardHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEX_ParticleAttachDataAsset* m_CmnPlayerDeadEffectEad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnGameOverHeartEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_CmnGameOverHeartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnGameOverLightEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_CmnGameOverLightLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnMissionFailedLightEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_CmnMissionFailedLightLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USQEX_ParticleAttachDataAsset*> m_CmnParticleAttachDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlueprint* m_GameOverKHSBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresKHShaderController> m_GameOverKHS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTresPhysMatEffectAsset* m_CmnPhysMatEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_CmnSnowTailAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresAICoordinator> m_AICoordinatorClass_Beginner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresAICoordinator> m_AICoordinatorClass_Standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresAICoordinator> m_AICoordinatorClass_Proud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresAICoordinator> m_AICoordinatorClass_Critical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresAdhereObjBase> m_BadStatCloudClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresAdhereObjBase> m_BadStatDischargeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresAdhereObjBase> m_BadStatSneezeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATresAdhereObjBase> m_BadStatHoneyClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresDamageType> m_PhysDamageTypeClass[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_remyMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_remyPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* m_remyRecipeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_remyTwilightTownMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_remyTwilightTownPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_remyWorldMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_remyWorldMapAreaMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_remyWorldMapPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_remyTwilightTownFinalMilestoneRewardPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresItemDefWeapon m_finalMilestoneReward;
    
    UTresGameModeLoadAsset();
};

