#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectileSkeletalMeshBase.generated.h"

class USQEX_ParticleAttachDataAsset;
class UTresSkeletalMeshComponent;
class UTresEffectAttachComponent;

UCLASS(Abstract, Blueprintable)
class ATresProjectileSkeletalMeshBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* m_EffectAttach;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AttachEffectGroupID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_AttachData;
    
public:
    ATresProjectileSkeletalMeshBase();
};

