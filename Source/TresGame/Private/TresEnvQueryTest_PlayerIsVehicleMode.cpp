#include "TresEnvQueryTest_PlayerIsVehicleMode.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_PlayerIsVehicleMode::UTresEnvQueryTest_PlayerIsVehicleMode() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->TargetActorContext = UEnvQueryContext_Querier::StaticClass();
}

