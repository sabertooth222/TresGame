#include "TresGumiShipPlayerRailSlideActorWithCamera.h"
#include "GameFramework/SpringArmComponent.h"
#include "TresGumiShipDirectSpeedCompo.h"

ATresGumiShipPlayerRailSlideActorWithCamera::ATresGumiShipPlayerRailSlideActorWithCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pSplingArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
    this->m_pDirect = CreateDefaultSubobject<UTresGumiShipDirectSpeedCompo>(TEXT("Direct"));
}

