#include "TresNpcEnvQueryTest_CureHpCheck.h"

UTresNpcEnvQueryTest_CureHpCheck::UTresNpcEnvQueryTest_CureHpCheck() {
    SetWorkOnFloatValues(false);
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}

