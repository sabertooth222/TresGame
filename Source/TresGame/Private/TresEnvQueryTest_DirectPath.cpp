#include "TresEnvQueryTest_DirectPath.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_DirectPath::UTresEnvQueryTest_DirectPath() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->Context = UEnvQueryContext_Querier::StaticClass();
}

