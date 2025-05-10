#include "TresEnvQueryTest_IsFriendNpc.h"

UTresEnvQueryTest_IsFriendNpc::UTresEnvQueryTest_IsFriendNpc() {
	SetWorkOnFloatValues(false);

	this->FilterType = EEnvTestFilterType::Match;
	this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->FriendID = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
}

