#include "TresEnvQueryTest_FloorHeight.h"

UTresEnvQueryTest_FloorHeight::UTresEnvQueryTest_FloorHeight() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->Operation = EArithmeticKeyOperation::Equal;
    this->TestMode = ETresFloorTestMode::Navmesh;
}

