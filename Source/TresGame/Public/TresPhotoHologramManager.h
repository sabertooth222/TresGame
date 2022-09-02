#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresHologramLocationResetInfo.h"
#include "TresPhotoHologramDebugMenu.h"
#include "TresPhotoHologramManager.generated.h"

class ATresPlayerControllerBase;
class ATresGimmick_HologramVolumn;
class ATresCameraPhotoHologram;
class UDataTable;
class ATresPhotoHologramMapInfoActor;
class ATresPhotoHologramAreaVolume;
class ATresPhotoHologramActor;
class UTresPhotoHologramWeaponAsset;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class UTresPhotoHologramManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresGimmick_HologramVolumn> m_pHologramCtrlVolumn;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UDataTable> m_pHologramDataTable;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UDataTable> m_pWeaponDataTable;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UDataTable> m_pMapDataTable;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UDataTable> m_pCameraEffectDataTable;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresPhotoHologramMapInfoActor> m_pMapInfoActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresPhotoHologramAreaVolume*> m_pAreaVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraPhotoHologram* m_pHologramCamera;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresPlayerControllerBase> m_pPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresPhotoHologramActor*> m_HologramActorList;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresPhotoHologramActor> m_pCurrentActor;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresPhotoHologramActor> m_pLastCreatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pCreateHologramActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresPhotoHologramWeaponAsset*> m_pWeaponAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pSpawnMarkerPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresHologramLocationResetInfo> m_HologramLocationResetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresPhotoHologramDebugMenu m_DebugMenu;
    
public:
    UTresPhotoHologramManager();
};

