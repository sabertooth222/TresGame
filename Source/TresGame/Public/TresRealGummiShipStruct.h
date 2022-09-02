#pragma once
#include "CoreMinimal.h"
#include "TresGummiBaseParam.h"
#include "TresGummiShipPartsStruct.h"
#include "TresRealGummiShipStruct.generated.h"

class USkeletalMesh;
class UTexture2D;
class USkeletalMeshComponent;
class USceneComponent;

USTRUCT(BlueprintType)
struct FTresRealGummiShipStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_pSkeltalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_pSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(EditAnywhere)
    int64 m_nUniqueID;
    
    UPROPERTY(EditAnywhere)
    uint8 m_nMterialID;
    
    UPROPERTY(EditAnywhere)
    uint8 m_nPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiBaseParam m_nPartsParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiBaseParam m_nMaterialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_NormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NormalTexUVIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_AOTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AOTexUVIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 m_nPartsColorIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 m_nMaterialColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateAxisX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateAxisY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateAxisZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UVScrollSpeedU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UVScrollSpeedV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresGummiShipPartsStruct planData;
    
    TRESGAME_API FTresRealGummiShipStruct();
};

