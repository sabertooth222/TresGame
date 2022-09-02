#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresUICustomizeCommand.generated.h"

USTRUCT(BlueprintType)
struct FTresUICustomizeCommand {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCommandKind> CommandKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HelpTextNamespaceKey;
    
    TRESGAME_API FTresUICustomizeCommand();
};

