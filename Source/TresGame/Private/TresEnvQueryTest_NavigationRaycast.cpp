#include "TresEnvQueryTest_NavigationRaycast.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_NavigationRaycast::UTresEnvQueryTest_NavigationRaycast() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->Context = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}

