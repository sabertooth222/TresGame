#include "TresTestPawnEnemyShip.h"
#include "TresStaticMeshComponent.h"

ATresTestPawnEnemyShip::ATresTestPawnEnemyShip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Mesh1 = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresShipMesh1"));
    this->m_Mesh2 = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresShipMesh2"));
}

