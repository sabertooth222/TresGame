#include "TresEnvQueryTest_IsSwimmingUnderWater.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_IsSwimmingUnderWater::UTresEnvQueryTest_IsSwimmingUnderWater() {
	this->TestPurpose = EEnvTestPurpose::Filter;
	
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->bQuerierCheck = false;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

