#include "TresEnvQueryTest_MercunaProjection.h"

UTresEnvQueryTest_MercunaProjection::UTresEnvQueryTest_MercunaProjection() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;

}

