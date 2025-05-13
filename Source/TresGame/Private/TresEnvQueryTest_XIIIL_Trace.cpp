#include "TresEnvQueryTest_XIIIL_Trace.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_XIIIL_Trace::UTresEnvQueryTest_XIIIL_Trace() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->Context = UEnvQueryContext_Querier::StaticClass();
}

