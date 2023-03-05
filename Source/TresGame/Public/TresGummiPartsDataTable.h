#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiPartsDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiPartsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_nSkeltalMeshName;
    
    UPROPERTY(EditAnywhere)
    uint8 m_nGetMax;
    
    UPROPERTY(EditAnywhere)
    uint8 m_nSizeX;
    
    UPROPERTY(EditAnywhere)
    uint8 m_nSizeY;
    
    UPROPERTY(EditAnywhere)
    uint8 m_nSizeZ;
    
    UPROPERTY(EditAnywhere)
    int16 m_nCost;
    
    UPROPERTY(EditAnywhere)
    int16 m_nHP;
    
    UPROPERTY(EditAnywhere)
    int16 m_nSpeed;
    
    UPROPERTY(EditAnywhere)
    int16 m_nPower;
    
    UPROPERTY(EditAnywhere)
    int16 m_nRoll;
    
    UPROPERTY(EditAnywhere)
    int16 m_nAttack;
    
    UPROPERTY(EditAnywhere)
    int16 m_nTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isColorChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isUVAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreviewScale;
    
    TRESGAME_API FTresGummiPartsDataTable();
};

