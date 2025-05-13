#include "TresEnvQueryTest_IsTargetingContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UTresEnvQueryTest_IsTargetingContext::UTresEnvQueryTest_IsTargetingContext() {
	
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	this->Context = UEnvQueryContext_Querier::StaticClass();

	
}

