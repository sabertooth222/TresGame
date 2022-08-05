#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "TresGameCheatManager.generated.h"

class ATresCharPawnBase;
class ATresEnemyPawnBase;

UCLASS()
class UTresGameCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UTresGameCheatManager();
    UFUNCTION(Exec, BlueprintCallable)
    void UnlockAllPhotoHologram();
    
    UFUNCTION(Exec, BlueprintCallable)
    void TresTeleport(FName InTag, bool bResetCamera, bool bStateClear);
    
    UFUNCTION(Exec, BlueprintCallable)
    void TresSceneCapture(bool InIsEnableInvGamma);
    
    UFUNCTION(Exec, BlueprintCallable)
    void ToggleHitchProfilerSmartphoneScreenshot();
    
    UFUNCTION(Exec, BlueprintCallable)
    void ToggleHitchProfilerDebugScreenshot();
    
    UFUNCTION(Exec, BlueprintCallable)
    void ShowOctreeDebugDraw(int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void ShowNavigationGroup(int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void ShowInfluenceMap(bool bEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void ShowInfluenceEmitter(bool bEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void ShowDebugAIBodyCollision(bool bEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void SetPhotoHologramUseDebugMenu(bool bUse);
    
    UFUNCTION(Exec, BlueprintCallable)
    void SetPhotoHologramEnableStopActorMeshBonamik(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void SetPhotoHologramEnableKeepActorMeshBonamikInEdit(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void SetPhotoHologramEnableInputPoseOffsetSupport(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void SetPhotoHologramDebugInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void SetPhotoHologramActorDebugInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void SetDebugShowDetectMarkerInfoFlag(int32 Type);
    
    UFUNCTION(Exec, BlueprintCallable)
    void SetDebugShowDanceInfoFlag(int32 Type);
    
    UFUNCTION(Exec, BlueprintCallable)
    void RemyMakeAllRecipeSuccess();
    
    UFUNCTION(Exec, BlueprintCallable)
    void RemyMakeAllRecipeGreatSuccess();
    
    UFUNCTION(Exec, BlueprintCallable)
    void PhotoHologramSetInverseRotationInput(bool bInverse);
    
    UFUNCTION(Exec, BlueprintCallable)
    void PhotoHologramSetInverseRollInput(bool bInverse);
    
    UFUNCTION(Exec, BlueprintCallable)
    void PhotoHologramSetInversePitchInput(bool bInverse);
    
    UFUNCTION(Exec, BlueprintCallable)
    void PhotoHologramResetDataTableNewMarkIndex(int32 Type);
    
    UFUNCTION(Exec, BlueprintCallable)
    void PhotoHologramAutoInputDataTableNewMarkIndex(int32 Type);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVerumRexSetSec(float sec);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVerumRexSetScore(int32 Score);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVerumRexSetRank(int32 Rank);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVerumRexSetContinuousChain(bool Enable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVerumRexSetChain(int32 chain);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVehicleSpecialShipStockMax(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVehicleSpecialShipDisableOsc(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVehicleSpecialShipCompDebugDisp(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVehicleSpecialShipCheckMode(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVehicleSpecialShipCannonTrack(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVehicleGigasLifeTimeLimit(float InTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVehicleGigasEnemyGaugeDisp(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugVehicleGigasBoostMax(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIWipe(bool bOut, const FString& World);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIUnlockMenu(FName Name, bool Flag);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIUnloadAllUI();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIUnderWater(bool IntoWater);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIUltimaLock(int32 Command, float fGauge);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIStopFullscreenVideo();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISituationTimerInfinity(bool IsInfinity);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISimplexActionCommand(int32 nAction, int32 nKind, float fTimer);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIShowNaviMapInfo(bool bShow);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIShowMoviePlayerList(bool bShow);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIShowHudCommandSituation(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIShowAutoSave(bool IsShow);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIShowAllHud();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleTargetStatus(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleSubtitle(bool Visible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleSRideHud(int32 nVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleSpecialShipHud(int32 nVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleSpecialShipGoalMarker(int32 nVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleSpecialShipGoalArrow(int32 nVisibleL, int32 nVisibleR);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleSpecialShipCannonScope(int32 nVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisiblePusuButton(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisiblePlayerStatus(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleOperationGuide(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleMapName(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleKairiCounter(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleInformation(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleGigasHudParts(int32 nVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleGigasHud(int32 nVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleBxMarker(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleBxLiveFeed(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetVisibleButtonNotice(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetTargetEnemy(bool onoff, bool IsTargetFix);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSubCommandCount(int32 Type, int32 count);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetStylePointGauge(float StylePointGauge);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSRideHud(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSpecialShipScopeType(int32 nType);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSpecialShipRestrictCommand(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSpecialShipHud(int32 nAction, int32 nMode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSpecialShipGoalMarker(int32 nPosX, int32 nPosY, int32 nDistance);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSpecialShipGoalArrow(int32 nDistance);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSpecialShipCannonScopePosition(float fPosX, float fPosY);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSpecialShipAlert(int32 nAlert);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSpecialShipActionCommand(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetShortcutPage2(int32 Page, int32 Slot, const FString& KindName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetShortcutPage(int32 Page, int32 Slot, int32 Kind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetShortcutCommand(FName Key, int32 ShortcutType);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetScoreHud(int32 nAction, int32 nKind, int32 nNum, int32 nRecord);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetScoreChainBonus(float fRate, int32 nCounter);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetScore(int32 nScore);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSaixStatus(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSaixHud(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetSaixGauge(float fGauge);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetRailScopeTargetPosition(float fPosX, float fPosY);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetRailScopeHud(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetPushCommand(int32 nAction, int32 nType, int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetPuddingStartCountDown(int32 nCount);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetPuddingFinishCountDown(int32 nCount);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetPowerUpWindow(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetPlatform(const FString& Platform);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetPlaneMissileCursor(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetPlaneHud(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetPlaneBossHud(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetOperationHud(int32 nAction, int32 nType);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetOperationGuide(int32 nType);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetNauticalChart(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetMainCommandRightIcon();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetMagicSubCommand(FName Key);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetLuxord(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetLinkSubCommand(FName Key);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetLinkCommandNone(bool isNone);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetKairiCounter(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetItemSubCommand(FName Key);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudRightAll(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudRalphBlockStock(int32 SlotIndex, int32 Stock);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudLeftAll(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudDrawDeubg(bool IsEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudCommandSneeze(int32 nMode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudCommandRestrictFinish(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudCommandRestrict(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudCommandExWorkshop(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudCommandExBaymax(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHudCommandAttack(int32 nMode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHpGigasHud(int32 nMode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHitCountHud(int32 nAction, int32 nRecord);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetHitCount(int32 nHit);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetGigasHud(int32 nAction, int32 nId);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetEnableGigasHudCharaMarkerLimitTypeAll(bool Enable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetEnableGigasHudCharaMarkerLimitNum(int32 Num);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetEnableGigasHudCharaMarkerFriend(bool Enable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetEnableGigasHudCharaMarkerEnemy(bool Enable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetEnableFloatTexture(bool IsEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetEnableCommandEx(int32 nIndex, int32 nEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDisplayScore(int32 nMode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDisplayHitCount(int32 nMode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDisableShootFlowCommandText(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDisableDraw(bool DisableDraw);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDanceResult(int32 nAction, int32 nRank);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDanceRapunzel(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDanceHud(int32 nAction, int32 nRevisit, int32 nScore, int32 nChain);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDanceGauge(int32 nGauge, int32 nMax);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDanceChain(int32 nChain, int32 nRapunzel);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDanceAddedTime(float fTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDanceActionCommandMission(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetDanceActionCommand(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetCrabWindow(int32 nAction, int32 nNum);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetCommandMagic(int32 Kind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetButtonCount(float Time);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetBlackPearlChaseMeter(float fMeter, int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetBlackPearlChaseHud(int32 nAction, float fStart, float fGoal);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetBaymaxScore(int32 nScore);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetBaymaxResult(int32 nAction, int32 nRank);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetBaymaxLiveFeed(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetBaymaxHud(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetBaymaxCountDown(int32 nCount);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetBasicShortcut();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetAllHudCommand(FName Key);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISetActionCommand(int32 Num);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUISelectHudRalphBlockSlot(int32 SlotIndex);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIScreenFilter(bool IsShow, int32 Type);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIResetUIPartsProfileTime();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIResetPadBtnText();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIPushButtonMark(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIPlayFullscreenVideo(const FString& MovieFilePath);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIPCConfigSetting(FName ConfigName, float Value);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIPauseActionCommandTimer(bool IsOn);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenTimer(int32 nPos);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenStreamingLoadScreen();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenSPCamera(int32 _mode, bool _bBlur);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenShootLockResult();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenShootLock();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenSaveMenu();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenPushCommand();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenPlayerSelectLR(const FString& NameL, const FString& NameR);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenNormalLoadScreen();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenNextLv(int32 Exp);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenMissionGage(FName dataTableKey);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenLoadMenu();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenLevelUp(int32 ParamNum, int32 Num);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenInfomation();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenHundredGame();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenHudUx();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenHudRightAll(int32 nAction);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenHudRalph();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenHudLeftAll();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenGetMunny(int32 munny);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenGetItem();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenGetBonus(int32 ParamNum, int32 Num);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenGameOverGumi(int32 HintIndex);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenGameOver(int32 HintIndex);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenGameHelp(int32 GameHelpID);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenExtraLoadScreen(int32 _index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenEventItem(int32 ItemIDInt);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenConfigScreenMenu();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenConfigBrightnessMenu();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenClearDataSaveMenu();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenCampMenu();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIOpenButtonCount(float Time);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUINaviMapMarkerTest(int32 MapMarkerType, int32 PosX, int32 PosY);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUINaviMapMarkerPcStart(bool IsSet);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIMoviePlayerInvokeLog(bool bShowLog, int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUILuckyMarkMenuDebugMode(bool _debug);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUILStickInput(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUILSIButtonSetGameMode(int32 GameModeType, uint8 GameModeIndex);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUILSIButtonSet(uint8 LSIGameItemIDIndex, bool bClose);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUILoadNaviMap(FName MapName, bool OverwriteMap);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIKeyHole(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIHudXehanort(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIHudCommandTimeBreak(float fBreakTimer);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIHideHudCommandSituation(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIHideAllHud();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIGameHelpFlag(bool Enable, int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIForceUnlockSaveTopMenu(bool IsForceUnlock);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIForceShowNaviMap(bool bShow);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIForceScaleformGC();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIForceExtraLoadScreen(bool _force);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIFixFocusLabel();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIEnableSubtitleSkip(bool IsEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIEnableInvoke(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIDisplayNaviMap(int32 DataTableIndex);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIDeleteTargetCursor(const FString& TargetActorFName, int32 CursorType, bool bDecision);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIDeleteActionCommand();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICreateUIParts(const FString& AssetPath);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIConfigSetting(FName ConfigName, int32 Value);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICodeMenu(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseTimer(int32 nPos);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseStreamingLoadScreen();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseSPCamera();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseShootLock();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIClosePushCommand();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseNormalLoadScreen();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseInfomation();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseHundredGame();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseHudUx();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseHudRightAll();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseHudRalph();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseHudLeftAll();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseExtraLoadScreen();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICloseButtonCount(bool IsCancel);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUICheatAchievement(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIChangeWorldHudCommand(const FString& strWorld);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIChangeGigasHudCommandText(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIChallengeScore(int32 nKind);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUIAddTargetCursor(const FString& TargetActorName, int32 CursorType);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugTsPuddingSpawn(const int32 PuddingType);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugTsPuddingSetSpawnLimit(const int32 Num);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugTsPuddingDisplayNum(const bool bDisplay);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugTsPuddingDisableTickManager(const bool bDisable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugTsPuddingDisableRemove(const bool bDisable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugTsPuddingAddRemove(const int32 AddNum);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugTresToolLevelActorOnlyVisible();
    
    UFUNCTION(Exec, BlueprintCallable)
    ATresCharPawnBase* DebugSpawnVehicle(int32 nId, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSnowCurlingSetSec(float sec);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSnowCurlingSetScore(int32 Score);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSmartphonePCShadowOff(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    ATresEnemyPawnBase* DebugSimpleEnemySet_MaterialReduction(FName EnemyID, FName MaterialIdx, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec, BlueprintCallable)
    ATresEnemyPawnBase* DebugSimpleEnemySet_DifferentSet(FName EnemyID, int32 SetIdx, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec, BlueprintCallable)
    ATresEnemyPawnBase* DebugSimpleEnemySet_DifferentKindSet(FName EnemyID, FName Kind, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec, BlueprintCallable)
    ATresEnemyPawnBase* DebugSimpleEnemySet(FName EnemyID, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowValidNavmeshDebug(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowStaticEQSItemDebug(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowSpecialPerformActorAttachInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowSmartphoneDebugInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowSevenPrincessInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowPhotoSaveInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowPhotoMissionInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowNpcSmartphoneReactionInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowNavigationBuildTime(bool bEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowGameplayDebugger(int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowExistencePrizeNum(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowEQSDebug(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowEnemyParam(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowEmitterPool(bool bEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowDetectMarkerInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCoopDebug(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCinematicStopAIDebug(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCharacter(bool bEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowBackground(bool bEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowAttackPermissionDebug(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowAIDebug(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetVisibleDebugTextRender(bool IsVisible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetUsePS4OutputRestrict(bool bUse);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetSmartphoneHLODOff(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetRaPuddingGrade(int32 grade);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetRaPuddingForceMissionContinue(bool bContinue);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetPhotoMissionRecordedByID(int32 missionID);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetPhotoJpegCompressQuality(int32 Quality);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetPhotoExport(bool IsExport);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetLuckyMarkRecordedByID(int32 markID);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetLuckyMarkRecordedByCount(int32 count);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetEnemyHitPointRate(float InRate);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetEnemyHitPoint(int32 InHitPoint);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetEnableR2PadTriggerDownMode(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDefaultPawnNameBTAllSet(const FString& PawnName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDefaultPawnNameBT(const FString& PawnName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDefaultBT(FName ID);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDanceEffectColorMode(int32 mode);
    
private:
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraLocation(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    
public:
    UFUNCTION(Exec, BlueprintCallable)
    void DebugRaycastDisp(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugR2Damage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugR2BadStat(int32 TgtNo, int32 BadStatNo);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugR2AndPadUpDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugR2AndPadRightDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugR2AndPadLeftDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugR2AndPadDownDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPuddingStopGameTimer(const bool bStop);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPuddingSetScore(const int32 Score);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPuddingFinishGame();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPuddingDisplayScore(const bool bDisplay);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPuddingDisableGameFinish(const bool bDisable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPuddingAddScore(const int32 Score);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugOutputLogTaskList();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugNpcSwitchBT(FName NpcID, const FString& BTFileName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugNpcSwitchAIBT(FName NpcID, const FString& BTFileName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugNpcAIStyleBattleAll(int32 Style);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugMiRxSwitchDispDebugInfo();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugMiRxChangeEnemyState(const int32 dID, const bool bIsLoop);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugMiPuddingDisplayKillNum(const bool bDisplay);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugMiPuddingDisableAttack(const bool bDisable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLoadLevelLoop(int32 loopNum, float WaitTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetZeroRelZ(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetRxRushRate(float InRate);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetRxAttackRate(float InRate);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetPhase(int32 InPhase);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetExecuteIndex(int32 InIndex);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetDispLine(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetDispInfoPart(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetDispInfoAll(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetDisableSpecificAction(bool bDisable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetDebugPad(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLgRxSetCmdAutoPopup(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestStopGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestStopedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestStartGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestStartedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestResetGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestForceStopedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestForceStartedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestForceDestroyedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestDestroyGimmickFromLevelName(const FName& LevelName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestDestroyGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestDestroyedGimmickFromLevelName(const FName& LevelName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelRequestDestroyedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelGimmickDamageCheckFree(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelActorVisibleOnly(const FName& LevelName, int32 NO);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugLevelActorVisible(const FName& LevelName, int32 NO, bool Visible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugHePuddingSpeedUpDown(const bool bUp);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugHePuddingDisplayNum(const bool bDisplay);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugHePuddingDisableSpeedDown(const bool bDisable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFzPuddingDisplayKillNum(const bool bDisplay);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFullPathSwitchPawnNameBTAllSet(const FString& PawnName, const FString& BTFilePath);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFullPathSwitchPawnNameBT(const FString& PawnName, const FString& BTFilePath);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFullPathSwitchClassNameBTAllSet(const FString& ClassName, const FString& BTFilePath);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFullPathSwitchBT(FName ID, const FString& BTFilePath);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendWarpHome(bool bAdjustCameraBack);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendStopAI(bool bStop);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendPlayCameraAnim(FName ID, const FString& BTFilePath, int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendLinkPointMax(int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendLinkPointLine(int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendLinkPoint(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendHpKeep(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendDispSmartphoneCamera(FName FriendID, bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendDispPrizeRange(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendDispLineAndSphere(FName FriendID, bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendDispLine(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendDispInfo(FName FriendID, bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendDispAnimInfo(FName FriendID, bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugForceUnlockBattlePortalRewardActions(int32 clearCount);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugForceRaPuddingReload();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugForceFestivalDanceClear();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFlashTracerSetSec(float sec);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFlashTracerSetScore(int32 Score);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFlashTracerSetRank(int32 Rank);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFlashTracerForceFinish();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFestivalDanceSetTimerStop(bool bStop);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFestivalDanceSetChainCount(int32 chainCount);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFestivalDanceForceSpecialPerform();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFestivalDanceForceRapunzelDance();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFestivalDanceEnableInfiniteChain(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugExistEnemyAnnihilation();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEQSQueryItemNumList(const FString& FileName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyWallHitTest(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyWallHitReactionTest(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemySwitchBT(FName EnemyID, const FString& BTFileName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemySwitchAIBT(FName EnemyID, const FString& BTFileName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyStrongPointZero(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyRespawn(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyRalphBindTestIdx(int32 Idx);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyPadControlEnable(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyHpKeep(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyBlowRevenge(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyBlowDeath(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyAnnihilation();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy_He001a_ShowHpInfo();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy_He001a_ShowCollision(int32 DispType);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy_He001a_ShowAction();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy_Gigas_GimmickGigasOff();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy_dw407_ShowSpawnProjectileLocation(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy_dw401_WaveScrollTest(bool bScroll);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy_dw401_StartMickeyRide();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy_dw401_CameraCollTest(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy711TornadoInvolveTest(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemy711ObjectTest(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableItemEvaluation(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableFriendLinkPoint(int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableCutSceneLights(bool bEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableAbilityBattlePhotographer(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEEX771SetDebrisBlowNum(int32 Num);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDropItem(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDrawTresLineTrace(bool bDraw);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDispEEX771(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDispEEX054(bool bEnable);
    
private:
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDispCameraLocation();
    
public:
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDiffAnalysisGPU();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcVoicePlay(bool bPlay);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcUniqueDeleteAll();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcStopMove(bool bStop);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcStopMasterPose(bool bStop);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcStopAction(bool bStop);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetVoiceMeshType(FName inMeshName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetVoiceMeshIndex(int32 nIndex);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetMoveActorNum(int32 nNum);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetGroup(FName InGroupName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetGreetType(int32 nGreet);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetDispActorNum(int32 nNum);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetCameraScale(float fScale);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetCameraMotion(FName inRecordName, int32 nIndex);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcSetAction(FName inSeqName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcDeleteAll();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcDelete();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcDebugDispType(int32 nMode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcDebugDisp(bool bDisp);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComNpcAdd(FName inSubName, FName inNpcName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCharPawnAnnihilation();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCaPuddingMoveSpeed(const float Speed);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCaPuddingDisplayWave(const bool bDisplay);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCaPuddingDisableCooldownBell(const bool bDisable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCallEnemyFunctionNameClassName(FName ClassName, FName FunctionName, FName Param);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCallEnemyFunctionIntClassName(FName ClassName, FName FunctionName, int32 Param);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCallEnemyFunctionInt(FName EnemyID, FName FunctionName, int32 Param);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCallEnemyFunctionFloat(FName EnemyID, FName FunctionName, float Param);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCallEnemyFunctionClassName(FName ClassName, FName FunctionName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCallEnemyFunction(FName EnemyID, FName FunctionName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBxPuddingInduction(const int32 Type);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBxPuddingDisplayAreaJumpTarget(const bool bDisplay);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBxPuddingChangeType(const int32 Type);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBPEM_SetNextEP_ClampMode(int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBPEM_SetEnabledTelemetryLog(bool InbEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBPEM_SetEnabledStatusLog(bool InbEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBPEM_SetEnabledEPLog(bool InbEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBPEM_SetEnabledEmotionMap(bool InbEnabled);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBPEM_SetEnabledActionLog(int32 Index);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAlwaysEnableLookAt(FName PawnName, int32 mode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAlwaysEnableIK(FName PawnName, int32 mode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAllEnemySwitchTurnMove();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAllEnemySwitchAI(bool bStop);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAllEnemyForceStuck();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAllEnemyForceFallenAbyss();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAlbumPhotoLoadTest(bool bLoad);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugActorVisibleFromActorList(bool Visible);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugActorCollisionEnableFromActorList(bool Enable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAccompanyPawnDispManualOverlap(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAccompanyPawnDispDebugInfo(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAccompanyPawnDispCollisionCheck(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAccompanyPawnDisableLandSpawn(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAccompanyPawnDisableAutoMove(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void AllDebugAlwaysEnableLookAt(int32 mode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void AllDebugAlwaysEnableIK(int32 mode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void AllAIDebugDisplay();
    
    UFUNCTION(Exec, BlueprintCallable)
    void AIDebugDisplay(FName PawnName);
    
};

