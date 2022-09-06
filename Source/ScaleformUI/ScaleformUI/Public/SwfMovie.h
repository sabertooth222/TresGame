#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlashTextureRescale.h"
#include "SwfMovie.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class USwfMovie : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bUseGFxExport: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bOptimizeForMobiles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bSetSRGBOnImportedTextures: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bPackTextures: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 PackTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bForceSquarePacking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<FlashTextureRescale> TextureRescale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FString TextureFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bReplaceImages: 1;
    
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    FString SourceFile;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> FontMappings;
    
    UPROPERTY(VisibleAnywhere)
    FString SourceFileTimestamp;
    
    UPROPERTY(Transient)
    uint64 ImportTimeStamp;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> RawData;
    
    UPROPERTY()
    TArray<FString> ReferencedAssetNames;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UObject*> References;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<UObject*> UserReferences;
    
    USwfMovie();
};

