#include "TresCameraDiving.h"
#include "Templates/SubclassOf.h"

class ATresCameraDiving;
class UObject;

ATresCameraDiving* ATresCameraDiving::BP_SpawnTresCameraDiving(UObject* WorldContextObject, TSubclassOf<ATresCameraDiving> CameraClass, const FName CameraName) {
    return NULL;
}

ATresCameraDiving::ATresCameraDiving(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_LerpBehindTime = 0.00f;
}

