#include "TresNpcEnvQueryTest_IsEnableLockOn.h"

UTresNpcEnvQueryTest_IsEnableLockOn::UTresNpcEnvQueryTest_IsEnableLockOn() {
    SetWorkOnFloatValues(false);
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}

