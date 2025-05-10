#include "TresNpcEnvQueryTest_DirectTargetEnemy.h"

UTresNpcEnvQueryTest_DirectTargetEnemy::UTresNpcEnvQueryTest_DirectTargetEnemy() {
    SetWorkOnFloatValues(false);
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_EnemyUID = ETresEnemyUniqueID::TRES_ENEMY_UID_UNKNOWN;
}

