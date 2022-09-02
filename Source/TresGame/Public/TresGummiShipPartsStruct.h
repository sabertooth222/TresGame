#pragma once
#include "CoreMinimal.h"
#include "ETresGummiType.h"
#include "TresGummiShipPartsStruct.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipPartsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 m_indexX;
    
    UPROPERTY(EditAnywhere)
    int8 m_indexY;
    
    UPROPERTY(EditAnywhere)
    int8 m_indexZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGummiType m_gummiKind;
    
    UPROPERTY(EditAnywhere)
    uint8 m_gummiID;
    
    UPROPERTY(EditAnywhere)
    uint8 m_sizeX;
    
    UPROPERTY(EditAnywhere)
    uint8 m_sizeY;
    
    UPROPERTY(EditAnywhere)
    uint8 m_sizeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rotX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rotY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rotZ;
    
    UPROPERTY(EditAnywhere)
    uint8 m_pointX;
    
    UPROPERTY(EditAnywhere)
    uint8 m_pointY;
    
    UPROPERTY(EditAnywhere)
    uint8 m_pointZ;
    
    UPROPERTY(EditAnywhere)
    uint8 m_materialID;
    
    UPROPERTY(EditAnywhere)
    uint8 m_patternID;
    
    UPROPERTY(EditAnywhere)
    uint8 m_baseColor;
    
    UPROPERTY(EditAnywhere)
    uint8 m_materilColor;
    
    UPROPERTY(EditAnywhere)
    int8 m_flipX;
    
    UPROPERTY(EditAnywhere)
    int8 m_flipY;
    
    UPROPERTY(EditAnywhere)
    int8 m_flipZ;
    
    UPROPERTY(EditAnywhere)
    int8 m_Offset;
    
    TRESGAME_API FTresGummiShipPartsStruct();
};

