#include "TresGumiShipGimmickCannon.h"

ATresGumiShipGimmickCannon::ATresGumiShipGimmickCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PrizeCount = 1;
    this->m_fRotationSpeed = 0.50f;
    this->m_fMovementLimit = 100.00f;
    this->m_fMovementSpeed = 0.50f;
}

