#pragma once
#include "CoreMinimal.h"
#include "TresNameEntryTextData.generated.h"

USTRUCT(BlueprintType)
struct FTresNameEntryTextData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Text[100];
    
    TRESGAME_API FTresNameEntryTextData();
};

