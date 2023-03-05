#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresStaticEQSItemActor.generated.h"

UCLASS(Blueprintable)
class ATresStaticEQSItemActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemOverlapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector VoxelNum;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> StaticEQSItemHashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GeneratedItemPos;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StaticEQSItemBits;
    
    UPROPERTY(EditAnywhere)
    uint32 StaticEQSItemBitNum;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> StaticEQSItemSubBitsIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<uint16> StaticEQSItemSubSplitPlane;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StaticEQSItemSubBits;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 Version;
    
    ATresStaticEQSItemActor();
};

