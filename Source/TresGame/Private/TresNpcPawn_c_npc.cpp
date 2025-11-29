#include "TresNpcPawn_c_npc.h"
#include "TresEquipmentComponent.h"
#include "TresEffectAttachComponent.h"
#include "TresAtkCollComponent.h"
#include "MercunaObstacleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ObjectType -FallbackName=ESQEX_ObjectType

ATresNpcPawn_c_npc::ATresNpcPawn_c_npc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->m_ObjType = ESQEX_ObjectType::SQEX_OBJ_TYPE_AVATAR;
    this->m_bPermissionLockOn = false;
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->MyLockOnSetBoneName = TEXT("atama");
	const UProperty* p_MyAtkColl = GetClass()->FindPropertyByName("MyAtkColl");
	(*p_MyAtkColl->ContainerPtrToValuePtr<UTresAtkCollComponent*>(this))->DestroyComponent();
	(*p_MyAtkColl->ContainerPtrToValuePtr<UTresAtkCollComponent*>(this))->SetActive(false);
    const UProperty* p_MyEquipment = GetClass()->FindPropertyByName("MyEquipment");
    //(*p_MyEquipment->ContainerPtrToValuePtr<UTresEquipmentComponent*>(this)) = NULL;
	(*p_MyEquipment->ContainerPtrToValuePtr<UTresEquipmentComponent*>(this))->DestroyComponent();
	(*p_MyEquipment->ContainerPtrToValuePtr<UTresEquipmentComponent*>(this))->SetActive(false);
    const UProperty* p_MyEffectAtt = GetClass()->FindPropertyByName("MyEffectAtt");
	(*p_MyEffectAtt->ContainerPtrToValuePtr<UTresEffectAttachComponent*>(this))->DestroyComponent();
	(*p_MyEffectAtt->ContainerPtrToValuePtr<UTresEffectAttachComponent*>(this))->SetActive(false);
	/*MyAtkColl->DestroyComponent();
	MyAtkColl->SetActive(false);
	MyEquipment->DestroyComponent();
	MyEquipment->SetActive(false);
	MyEffectAtt->DestroyComponent();
	MyEffectAtt->SetActive(false);*/
    this->MyTeam = ETresTeam::CityNpc;
    this->m_bEnableRegistFootStepEffectGen = false;
    const UProperty* p_ObstacleComponent = GetClass()->FindPropertyByName("ObstacleComponent");
    //(*p_ObstacleComponent->ContainerPtrToValuePtr<UMercunaObstacleComponent*>(this)) = NULL;
	(*p_ObstacleComponent->ContainerPtrToValuePtr<UMercunaObstacleComponent*>(this))->DestroyComponent();
	(*p_ObstacleComponent->ContainerPtrToValuePtr<UMercunaObstacleComponent*>(this))->SetActive(false);
	//p_ObstacleComponent->DestroyComponent();
	//p_ObstacleComponent->SetActive(false);
    this->m_IdleAnimName = TEXT("idleN");
    this->m_BodyColType = 0;
    this->m_PoseGroupType = 0;
    this->m_bBodyImmovable = true;
    this->m_bDisableStagger = true;
    this->m_bEnableBgCave = false;
    this->m_bDisableReactor = false;
    this->m_bDisableBodyCollision = false;
    this->m_bDisableNavModifier = true;
    this->m_bDisableLookAt = false;
    this->m_bUniqueComNpc = false;
    this->m_bForceAddComAction = false;
    this->m_bDisableTurn = false;
    this->m_ReactionType = -1;
    this->m_MatData = NULL;
    this->m_WalkSpeed = 0.00f;
    this->m_RunSpeed = 0.00f;
    this->m_fNearCameraRange = 0.00f;
    this->m_LookAtBoneName = TEXT("atama");
    this->m_FaceEyeBlinkMinTimer = 3.00f;
    this->m_FaceEyeBlinkMaxTimer = 4.00f;
    this->m_IdleBreakMinTimer = 4.00f;
    this->m_IdleBreakMaxTimer = 9.00f;
    this->m_fTurnWaitTimer = 3.00f;
    this->m_fLookAtBlendTime = 0.50f;
    this->m_fMinDegree = 10.00f;
    this->m_fAddYaw = 0.00f;
    this->m_bDispDebugInfo = false;
    this->MyReactor = NULL;
}

void ATresNpcPawn_c_npc::SetSubMeshFacePlay(FName inSubMeshName, FName InLipAnimName, FName inEyeAnimName, float in_fBlendTime) {
}

void ATresNpcPawn_c_npc::SetSnowBallBody(int32 InType, bool inChatMode) {
}

void ATresNpcPawn_c_npc::SetBodyImmovable(bool InOnOff) {
}

bool ATresNpcPawn_c_npc::RemoteEventComNpc(FName inEventName) {
    return false;
}

void ATresNpcPawn_c_npc::PlayLipAnim(const FName& InAnimName, float in_fBlendTime, bool in_bPriortyChange, bool in_bForceChange) {
}

void ATresNpcPawn_c_npc::PlayEyeAnim(const FName& InAnimName, float in_fBlendTime, bool in_bPriortyChange, bool in_bForceChange, bool in_bNoBlink) {
}

bool ATresNpcPawn_c_npc::IsRecordName(FName InName) {
    return false;
}

void ATresNpcPawn_c_npc::ChangeStarMode(float in_fTime) {
}

bool ATresNpcPawn_c_npc::ChangeActionComNpc(FName inActionName) {
    return false;
}

void ATresNpcPawn_c_npc::BP_TalkTurnStart(float InReturnTime) {
}

void ATresNpcPawn_c_npc::BP_TalkTurnDefault() {
}

void ATresNpcPawn_c_npc::BP_SetTalkMotion(FName InAnimStart, FName InAnimLoop, FName InAnimEnd) {
}

void ATresNpcPawn_c_npc::BP_SetMaterial(FName InMaterialName, FName InParamName, float inValue) {
}

FVector ATresNpcPawn_c_npc::BP_SetLookTarget(AActor* inActor, FVector InLocation, float InReturnTime) {
    return FVector{};
}

void ATresNpcPawn_c_npc::BP_SetIdleMotion(FName InAnimName) {
}

void ATresNpcPawn_c_npc::BP_ResetLookAt() {
}

void ATresNpcPawn_c_npc::BP_ReqEndMotion() {
}


