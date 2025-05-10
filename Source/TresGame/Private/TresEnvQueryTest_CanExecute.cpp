#include "TresEnvQueryTest_CanExecute.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_CanExecute::UTresEnvQueryTest_CanExecute() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->Target = UEnvQueryContext_Querier::StaticClass();
}

