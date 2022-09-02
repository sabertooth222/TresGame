#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemyToyActorRespawnBox.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ATresEnemyToyActorRespawnBox : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* MyBox;
    
public:
    ATresEnemyToyActorRespawnBox();
private:
    UFUNCTION(BlueprintCallable)
    void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

