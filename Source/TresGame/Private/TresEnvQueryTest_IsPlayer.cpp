#include "TresEnvQueryTest_IsPlayer.h"

UTresEnvQueryTest_IsPlayer::UTresEnvQueryTest_IsPlayer() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;

}

