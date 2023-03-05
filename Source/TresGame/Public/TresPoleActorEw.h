#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPoleActorEw.generated.h"

class UTresPoleComponent;
class USceneComponent;

UCLASS(Blueprintable, Config=Game)
class ATresPoleActorEw : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* PoleComponentDefault;
    
    ATresPoleActorEw();
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnable() const;
    
};

