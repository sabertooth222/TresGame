#include "TresGimmickEwRotationActor.h"
#include "Components/SceneComponent.h"

void ATresGimmickEwRotationActor::SetRotationEx(const FRotator& Rotator) {
}

void ATresGimmickEwRotationActor::DisableUpdateMoveNavOctTree() {
}

ATresGimmickEwRotationActor::ATresGimmickEwRotationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
}

