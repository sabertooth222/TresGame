#include "TresFRSnowCoverSwingTree.h"
#include "TresAtkCollComponent.h"

ATresFRSnowCoverSwingTree::ATresFRSnowCoverSwingTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_NavModifierVolumeBP = NULL;
    this->MyAtkColl = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresAtkColl0"));
}

