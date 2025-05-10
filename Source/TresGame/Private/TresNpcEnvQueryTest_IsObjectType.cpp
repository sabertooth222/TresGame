#include "TresNpcEnvQueryTest_IsObjectType.h"

UTresNpcEnvQueryTest_IsObjectType::UTresNpcEnvQueryTest_IsObjectType() {
    SetWorkOnFloatValues(false);
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_ObjectType = ESQEX_ObjectType::SQEX_OBJ_TYPE_NONE;
}

