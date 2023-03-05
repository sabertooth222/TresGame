#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "TresNavigationQueryFilter.generated.h"

UCLASS(Blueprintable)
class UTresNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UTresNavigationQueryFilter();
};

