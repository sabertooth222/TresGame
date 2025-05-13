#include "TresEnvQueryTest_MercunaWallDistance.h"

UTresEnvQueryTest_MercunaWallDistance::UTresEnvQueryTest_MercunaWallDistance() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
	
	this->m_Dir = ETresEnvQueryTest_MercunaWallDistanceDir::Side;
}

