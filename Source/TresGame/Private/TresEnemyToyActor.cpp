#include "TresEnemyToyActor.h"
#include "AI/Navigation/NavModifierComponent.h"

bool ATresEnemyToyActor::CanUse() const {
    return false;
}

ATresEnemyToyActor::ATresEnemyToyActor() {
    this->MyNavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier0"));
    this->m_ToyKind = TRES_ENEMY_TOY_KIND_UNKNOWN;
}

