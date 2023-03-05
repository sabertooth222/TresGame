#include "TresCameraDMBase.h"

ATresCameraDMBase::ATresCameraDMBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_JumpRate = 1.00f;
    this->m_bJumpEndPitchReset = false;
    this->m_JumpEndResetTime = 0.50f;
    this->m_JumpLookRate = 1.00f;
}

