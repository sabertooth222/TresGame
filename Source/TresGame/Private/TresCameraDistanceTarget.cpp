#include "TresCameraDistanceTarget.h"

void ATresCameraDistanceTarget::SetDistance(float Distance, float Time) {
}

float ATresCameraDistanceTarget::GetDistance() const {
    return 0.0f;
}

float ATresCameraDistanceTarget::GetDefaultDistance() const {
    return 0.0f;
}

ATresCameraDistanceTarget::ATresCameraDistanceTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Distance = 400.00f;
}

