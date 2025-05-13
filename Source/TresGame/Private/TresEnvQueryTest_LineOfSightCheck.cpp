#include "TresEnvQueryTest_LineOfSightCheck.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_LineOfSightCheck::UTresEnvQueryTest_LineOfSightCheck() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->TargetActorContext = UEnvQueryContext_Querier::StaticClass();
}

