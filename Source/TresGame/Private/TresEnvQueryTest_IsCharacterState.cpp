#include "TresEnvQueryTest_IsCharacterState.h"

UTresEnvQueryTest_IsCharacterState::UTresEnvQueryTest_IsCharacterState() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = NULL;
    this->m_State = TSID_STATE_EMPTY;
    this->m_bContextStateCheck = true;
}

