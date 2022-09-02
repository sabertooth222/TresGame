#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "ETresNotifyFriendNpc.h"
#include "TresTriggerVolumeFriendNpc.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Game)
class ATresTriggerVolumeFriendNpc : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresNotifyFriendNpc::Type> m_NotifyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_ActionPoint;
    
    ATresTriggerVolumeFriendNpc();
};

