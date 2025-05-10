#include "TresEnvQueryTest_IsContextActor.h"

UTresEnvQueryTest_IsContextActor::UTresEnvQueryTest_IsContextActor() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->Context = NULL;
}

