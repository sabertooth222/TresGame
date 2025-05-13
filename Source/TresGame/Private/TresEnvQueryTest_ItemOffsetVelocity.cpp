#include "TresEnvQueryTest_ItemOffsetVelocity.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_ItemOffsetVelocity::UTresEnvQueryTest_ItemOffsetVelocity() {
    
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	this->Context = UEnvQueryContext_Querier::StaticClass();
    this->bEnableUseMovedVelocity = true;
}

