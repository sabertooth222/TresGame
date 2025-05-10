#include "TresEnvQueryTest_OverlapContext.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_OverlapContext::UTresEnvQueryTest_OverlapContext() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->Context = UEnvQueryContext_Querier::StaticClass();
}

