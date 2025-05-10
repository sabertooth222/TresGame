#include "TresEnvQueryTest_OceanHeight.h"

UTresEnvQueryTest_OceanHeight::UTresEnvQueryTest_OceanHeight() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;

}

