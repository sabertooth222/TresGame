#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresCommandKindData.generated.h"

USTRUCT(BlueprintType)
struct FTresCommandKindData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere)
    uint8 Type;
    
    UPROPERTY(EditAnywhere)
    uint8 Cate;
    
    UPROPERTY(EditAnywhere)
    uint8 Old;
    
    UPROPERTY(EditAnywhere)
    uint8 Attr;
    
    UPROPERTY(EditAnywhere)
    uint8 Local;
    
    UPROPERTY(EditAnywhere)
    uint8 Flag;
    
    UPROPERTY(EditAnywhere)
    uint8 Sp;
    
    UPROPERTY(EditAnywhere)
    uint8 Mp;
    
    UPROPERTY(EditAnywhere)
    uint8 Fp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocKey;
    
    TRESGAME_API FTresCommandKindData();
};

