#pragma once
#include "CoreMinimal.h"
#include "ETresGummiMissionReleaseCondition.generated.h"

UENUM(BlueprintType)
enum class ETresGummiMissionReleaseCondition : uint8 {
    RELEASE_NON,
    RELEASE_FIRST,
    RELEASE_AFTER_TRAVELER,
    RELEASE_AFTER_MASTER_TRAVELER,
    RELEASE_AFTER_WORLD_SEEKER,
    RELEASE_AFTER_MASTER_WORLD_SEEKER,
    RELEASE_CLEAR_TT,
    RELEASE_CLEAR_TS_RA,
    RELEASE_CLEAR_MI_FZ,
    RELEASE_CLEAR_BX_CA,
    RELEASE_AFTER_HEARTLESS_HUNT_BEGINNER,
    RELEASE_AFTER_HEARTLESS_HUNT_NOVIS,
    RELEASE_AFTER_HEARTLESS_HUNT_MIDDLE,
    RELEASE_AFTER_HEARTLESS_HUNT_EXPERT,
    RELEASE_AFTER_SWEAPON_COLLECT_BEGINNER,
    RELEASE_AFTER_SWEAPON_COLLECT_NOVIS,
    RELEASE_AFTER_SWEAPON_COLLECT_MIDDLE,
    RELEASE_AFTER_SWEAPON_COLLECT_EXPERT,
    RELEASE_AFTER_TREASURE_HUNT_BEGINNER,
    RELEASE_AFTER_TREASURE_HUNT_NOVIS,
    RELEASE_AFTER_TREASURE_HUNT_MIDDLE,
    RELEASE_AFTER_TREASURE_HUNT_EXPERT,
    RARITY_MAX UMETA(Hidden),
};

