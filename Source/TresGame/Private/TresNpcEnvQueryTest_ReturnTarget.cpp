#include "TresNpcEnvQueryTest_ReturnTarget.h"

UTresNpcEnvQueryTest_ReturnTarget::UTresNpcEnvQueryTest_ReturnTarget() {
    SetWorkOnFloatValues(false);
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}

