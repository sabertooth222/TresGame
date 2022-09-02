#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresCommandKind.h"
#include "TresSubCommandData.generated.h"

USTRUCT(BlueprintType)
struct FTresSubCommandData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand6;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand7;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand8;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> SubCommand9;
    
    TRESGAME_API FTresSubCommandData();
};

