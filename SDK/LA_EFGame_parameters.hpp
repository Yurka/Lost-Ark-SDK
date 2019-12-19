#pragma once

// Lost Ark (1.2.0.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LA_EFGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EFGame.EFCharacterParts.OnParticleSystemFinished
struct AEFCharacterParts_OnParticleSystemFinished_Params
{
};

// Function EFGame.EFCharacterParts.ClearAttachedPSIIndex
struct AEFCharacterParts_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFCharacterParts.NotifyChangedBase
struct AEFCharacterParts_NotifyChangedBase_Params
{
};

// Function EFGame.EFCharacterParts.BaseChange
struct AEFCharacterParts_BaseChange_Params
{
};

// Function EFGame.EFCharacterParts.EncroachingOn
struct AEFCharacterParts_EncroachingOn_Params
{
};

// Function EFGame.EFCharacterParts.EncroachedBy
struct AEFCharacterParts_EncroachedBy_Params
{
};

// Function EFGame.EFCharacterParts.Destroyed
struct AEFCharacterParts_Destroyed_Params
{
};

// Function EFGame.EFCheatManager.InternalDebugLookAt
struct UEFCheatManager_InternalDebugLookAt_Params
{
};

// Function EFGame.EFCheatManager.InternalVisualizePhysicsCompartmentUsage
struct UEFCheatManager_InternalVisualizePhysicsCompartmentUsage_Params
{
};

// Function EFGame.EFCheatManager.InternalSetPhysicsCompartmentCount
struct UEFCheatManager_InternalSetPhysicsCompartmentCount_Params
{
};

// Function EFGame.EFCheatManager.InternalTogglePhysicsCompartmentForEFPawns
struct UEFCheatManager_InternalTogglePhysicsCompartmentForEFPawns_Params
{
};

// Function EFGame.EFCheatManager.InternalSetCamTargetBlendTime
struct UEFCheatManager_InternalSetCamTargetBlendTime_Params
{
};

// Function EFGame.EFCheatManager.InternalClearCamTarget
struct UEFCheatManager_InternalClearCamTarget_Params
{
};

// Function EFGame.EFCheatManager.InternalSetCamTarget
struct UEFCheatManager_InternalSetCamTarget_Params
{
};

// Function EFGame.EFCheatManager.InternalCamPrevTarget
struct UEFCheatManager_InternalCamPrevTarget_Params
{
};

// Function EFGame.EFCheatManager.InternalCamNextTarget
struct UEFCheatManager_InternalCamNextTarget_Params
{
};

// Function EFGame.EFCheatManager.InternalGetPlayerCamera
struct UEFCheatManager_InternalGetPlayerCamera_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleCullDistanceVolume
struct UEFCheatManager_InternalToggleCullDistanceVolume_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleCPUSkinning
struct UEFCheatManager_InternalToggleCPUSkinning_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleOneFrameThreadLag
struct UEFCheatManager_InternalToggleOneFrameThreadLag_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleUpdateDLEOptimize
struct UEFCheatManager_InternalToggleUpdateDLEOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleMeshObjectUpdateOptimize
struct UEFCheatManager_InternalToggleMeshObjectUpdateOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleUpdateBoundsOptimize
struct UEFCheatManager_InternalToggleUpdateBoundsOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleDynamicFoliageOptimize
struct UEFCheatManager_InternalToggleDynamicFoliageOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleCameraODAOptimize
struct UEFCheatManager_InternalToggleCameraODAOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleParticleOptimizeILG
struct UEFCheatManager_InternalToggleParticleOptimizeILG_Params
{
};

// Function EFGame.EFConsole.IsValidEFCommand
struct UEFConsole_IsValidEFCommand_Params
{
};

// Function EFGame.EFConsole.InputAxis
struct UEFConsole_InputAxis_Params
{
};

// Function EFGame.EFConsole.InputKey
struct UEFConsole_InputKey_Params
{
};

// Function EFGame.EFDecalFloorActor.GetBoundingCylinder
struct AEFDecalFloorActor_GetBoundingCylinder_Params
{
};

// Function EFGame.EFDecalManager.SpawnDecalMinimal
struct AEFDecalManager_SpawnDecalMinimal_Params
{
};

// Function EFGame.EFGameInfo.AllowCheats
struct AEFGameInfo_AllowCheats_Params
{
};

// Function EFGame.EFGameInfo.PostSeamlessTravel
struct AEFGameInfo_PostSeamlessTravel_Params
{
};

// Function EFGame.EFGameInfo.GameEnding
struct AEFGameInfo_GameEnding_Params
{
};

// Function EFGame.EFGameInfo.NotifyMapLoaded
struct AEFGameInfo_NotifyMapLoaded_Params
{
};

// Function EFGame.EFGameInfo.NotfiyLoadingStep
struct AEFGameInfo_NotfiyLoadingStep_Params
{
};

// Function EFGame.EFGameInfo.Tick
struct AEFGameInfo_Tick_Params
{
};

// Function EFGame.EFGameInfo.PostLogin
struct AEFGameInfo_PostLogin_Params
{
};

// Function EFGame.EFGameInfo.Login
struct AEFGameInfo_Login_Params
{
};

// Function EFGame.EFGameInfo.LoadLevel
struct AEFGameInfo_LoadLevel_Params
{
};

// Function EFGame.EFGameInfo.RestartPlayer
struct AEFGameInfo_RestartPlayer_Params
{
};

// Function EFGame.EFGameInfo.InitGame
struct AEFGameInfo_InitGame_Params
{
};

// Function EFGame.EFGameInfo.GenericPlayerInitialization
struct AEFGameInfo_GenericPlayerInitialization_Params
{
};

// Function EFGame.EFPawn.StopAfterImageEffect
struct AEFPawn_StopAfterImageEffect_Params
{
};

// Function EFGame.EFPawn.StartAfterImageEffect
struct AEFPawn_StartAfterImageEffect_Params
{
};

// Function EFGame.EFPawn.GetAnimTrailParticleSystem
struct AEFPawn_GetAnimTrailParticleSystem_Params
{
};

// Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce
struct AEFPawn_ApplyFluidSurfaceContinuousForce_Params
{
};

// Function EFGame.EFPawn.ApplyFluidSurfaceImpact
struct AEFPawn_ApplyFluidSurfaceImpact_Params
{
};

// Function EFGame.EFPawn.NotifyChangedBase
struct AEFPawn_NotifyChangedBase_Params
{
};

// Function EFGame.EFPawn.BaseChange
struct AEFPawn_BaseChange_Params
{
};

// Function EFGame.EFPawn.MAT_FinishAnimControl
struct AEFPawn_MAT_FinishAnimControl_Params
{
};

// Function EFGame.EFPawn.MAT_BeginAnimControl
struct AEFPawn_MAT_BeginAnimControl_Params
{
};

// Function EFGame.EFPawn.InterpolationFinished
struct AEFPawn_InterpolationFinished_Params
{
};

// Function EFGame.EFPawn.InterpolationStarted
struct AEFPawn_InterpolationStarted_Params
{
};

// Function EFGame.EFPawn.RigidBodyCollision
struct AEFPawn_RigidBodyCollision_Params
{
};

// Function EFGame.EFPawn.DoKismetAttachment
struct AEFPawn_DoKismetAttachment_Params
{
};

// Function EFGame.EFPawn.AttachmentCameraActor
struct AEFPawn_AttachmentCameraActor_Params
{
};

// Function EFGame.EFPawn.GetGravityZ
struct AEFPawn_GetGravityZ_Params
{
};

// Function EFGame.EFPawn.OnForceFieldDestroy
struct AEFPawn_OnForceFieldDestroy_Params
{
};

// Function EFGame.EFPawn.CreateForceField
struct AEFPawn_CreateForceField_Params
{
};

// Function EFGame.EFPawn.ExplodeActor
struct AEFPawn_ExplodeActor_Params
{
};

// Function EFGame.EFPawn.FinishDyingDelay
struct AEFPawn_FinishDyingDelay_Params
{
};

// Function EFGame.EFPawn.SetDefaultStateColor
struct AEFPawn_SetDefaultStateColor_Params
{
};

// Function EFGame.EFPawn.SetStateColor
struct AEFPawn_SetStateColor_Params
{
};

// Function EFGame.EFPawn.AttackFreezeAnim
struct AEFPawn_AttackFreezeAnim_Params
{
};

// Function EFGame.EFPawn.AttackContinueAnim
struct AEFPawn_AttackContinueAnim_Params
{
};

// Function EFGame.EFPawn.SetPPOutlineWidth
struct AEFPawn_SetPPOutlineWidth_Params
{
};

// Function EFGame.EFPawn.SetPPOutlineColor
struct AEFPawn_SetPPOutlineColor_Params
{
};

// Function EFGame.EFPawn.SetPPOutline
struct AEFPawn_SetPPOutline_Params
{
};

// Function EFGame.EFPawn.SetCloakMode
struct AEFPawn_SetCloakMode_Params
{
};

// Function EFGame.EFPawn.SetOccludedOutlineColor
struct AEFPawn_SetOccludedOutlineColor_Params
{
};

// Function EFGame.EFPawn.SetOccludedOutline
struct AEFPawn_SetOccludedOutline_Params
{
};

// Function EFGame.EFPawn.OutsideWorldBounds
struct AEFPawn_OutsideWorldBounds_Params
{
};

// Function EFGame.EFPawn.FellOutOfWorld
struct AEFPawn_FellOutOfWorld_Params
{
};

// Function EFGame.EFPawn.Landed
struct AEFPawn_Landed_Params
{
};

// Function EFGame.EFPawn.Falling
struct AEFPawn_Falling_Params
{
};

// Function EFGame.EFPawn.SetDesiredRotation
struct AEFPawn_SetDesiredRotation_Params
{
};

// Function EFGame.EFPawn.OnParticleSystemFinished
struct AEFPawn_OnParticleSystemFinished_Params
{
};

// Function EFGame.EFPawn.PostInitAll
struct AEFPawn_PostInitAll_Params
{
};

// Function EFGame.EFPawn.ClearAttachedPSIIndex
struct AEFPawn_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFPawn.Destroyed
struct AEFPawn_Destroyed_Params
{
};

// Function EFGame.EFPawn.GetDefaultCameraMode
struct AEFPawn_GetDefaultCameraMode_Params
{
};

// Function EFGame.EFPawn.GetObjectCameraStyle
struct AEFPawn_GetObjectCameraStyle_Params
{
};

// Function EFGame.EFPawn.EncroachingOn
struct AEFPawn_EncroachingOn_Params
{
};

// Function EFGame.EFPawn.EncroachedBy
struct AEFPawn_EncroachedBy_Params
{
};

// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale
struct AEFPlayer_OnUpdatePropertyDrawScale_Params
{
};

// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale3D
struct AEFPlayer_OnUpdatePropertyDrawScale3D_Params
{
};

// Function EFGame.EFTransit.EncroachingOn
struct AEFTransit_EncroachingOn_Params
{
};

// Function EFGame.EFPlayerController.ConsoleCommand
struct AEFPlayerController_ConsoleCommand_Params
{
};

// Function EFGame.EFPlayerController.ProcessCinematic
struct AEFPlayerController_ProcessCinematic_Params
{
};

// Function EFGame.EFPlayerController.GetPlayerInitPosition
struct AEFPlayerController_GetPlayerInitPosition_Params
{
};

// Function EFGame.EFPlayerController.GetPlayerViewPointQuat
struct AEFPlayerController_GetPlayerViewPointQuat_Params
{
};

// Function EFGame.EFPlayerController.GetPlayerViewPoint
struct AEFPlayerController_GetPlayerViewPoint_Params
{
};

// Function EFGame.EFPlayerController.DisplayDebug
struct AEFPlayerController_DisplayDebug_Params
{
};

// Function EFGame.EFPlayerController.DrawHUD
struct AEFPlayerController_DrawHUD_Params
{
};

// Function EFGame.EFPlayerController.SpawnDefaultHUD
struct AEFPlayerController_SpawnDefaultHUD_Params
{
};

// Function EFGame.EFPlayerController.IsStopMovieLoading
struct AEFPlayerController_IsStopMovieLoading_Params
{
};

// Function EFGame.EFPlayerController.PlayerTick
struct AEFPlayerController_PlayerTick_Params
{
};

// Function EFGame.EFPlayerController.UpdateRotation
struct AEFPlayerController_UpdateRotation_Params
{
};

// Function EFGame.EFPlayerController.StopMovieLoading
struct AEFPlayerController_StopMovieLoading_Params
{
};

// Function EFGame.EFPlayerController.Destroyed
struct AEFPlayerController_Destroyed_Params
{
};

// Function EFGame.EFPlayerController.PostBeginPlay
struct AEFPlayerController_PostBeginPlay_Params
{
};

// Function EFGame.EFPlayerController.InitInputSystem
struct AEFPlayerController_InitInputSystem_Params
{
};

// Function EFGame.EFPlayerInput.DefaultPositionControlPanel
struct UEFPlayerInput_DefaultPositionControlPanel_Params
{
};

// Function EFGame.EFPlayerInput.FocusControlPanel
struct UEFPlayerInput_FocusControlPanel_Params
{
};

// Function EFGame.EFPlayerInput.ToggleControlPanel
struct UEFPlayerInput_ToggleControlPanel_Params
{
};

// Function EFGame.EFPlayerInput.OnMouseScrollDown
struct UEFPlayerInput_OnMouseScrollDown_Params
{
};

// Function EFGame.EFPlayerInput.OnMouseScrollUp
struct UEFPlayerInput_OnMouseScrollUp_Params
{
};

// Function EFGame.EFPlayerInput.PlayerInput
struct UEFPlayerInput_PlayerInput_Params
{
};

// Function EFGame.EFPlayerInput.InputAxis
struct UEFPlayerInput_InputAxis_Params
{
};

// Function EFGame.EFProjectile.ClearAttachedPSIIndex
struct AEFProjectile_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFProjectile.Destroyed
struct AEFProjectile_Destroyed_Params
{
};

// Function EFGame.EFProjectile.BaseChange
struct AEFProjectile_BaseChange_Params
{
};

// Function EFGame.EFProjectile.NotifyBaseChange
struct AEFProjectile_NotifyBaseChange_Params
{
};

// Function EFGame.EFProjectile.ProcessTouch
struct AEFProjectile_ProcessTouch_Params
{
};

// Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex
struct AEFSkeletalMeshActor_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFSkeletalMeshActor.NotifyChangedBase
struct AEFSkeletalMeshActor_NotifyChangedBase_Params
{
};

// Function EFGame.EFSkeletalMeshActor.BaseChange
struct AEFSkeletalMeshActor_BaseChange_Params
{
};

// Function EFGame.EFSkeletalMeshActor.Destroyed
struct AEFSkeletalMeshActor_Destroyed_Params
{
};

// Function EFGame.EFVolume.UnTouch
struct AEFVolume_UnTouch_Params
{
};

// Function EFGame.EFVolume.Touch
struct AEFVolume_Touch_Params
{
};

// Function EFGame.EFGameEngine.TranslateGFxUIMessage
struct UEFGameEngine_TranslateGFxUIMessage_Params
{
};

// Function EFGame.EFGameEngine.ShowLineChecks
struct UEFGameEngine_ShowLineChecks_Params
{
};

// Function EFGame.EFMapInfo.SaveCameraValue
struct UEFMapInfo_SaveCameraValue_Params
{
};

// Function EFGame.EFMapInfo.LoadCameraValue
struct UEFMapInfo_LoadCameraValue_Params
{
};

// Function EFGame.EFCameraBase.GetCurrentFOV
struct UEFCameraBase_GetCurrentFOV_Params
{
};

// Function EFGame.EFCameraBase.GetDefaultFOV
struct UEFCameraBase_GetDefaultFOV_Params
{
};

// Function EFGame.EFCameraBase.SetDefaultFOV
struct UEFCameraBase_SetDefaultFOV_Params
{
};

// Function EFGame.EFCameraBase.DisplayDebug
struct UEFCameraBase_DisplayDebug_Params
{
};

// Function EFGame.EFCameraBase.UpdateRotation
struct UEFCameraBase_UpdateRotation_Params
{
};

// Function EFGame.EFCameraBase.SetCurrentCameraCut
struct UEFCameraBase_SetCurrentCameraCut_Params
{
};

// Function EFGame.EFCameraBase.SetContentsSettingTable
struct UEFCameraBase_SetContentsSettingTable_Params
{
};

// Function EFGame.EFCameraBase.SetSettingTable
struct UEFCameraBase_SetSettingTable_Params
{
};

// Function EFGame.EFCameraBase.InActivateSkeletalMeshForceLOD
struct UEFCameraBase_InActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFCameraBase.ActivateSkeletalMeshForceLOD
struct UEFCameraBase_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFCameraBase.ChangeZoomStep
struct UEFCameraBase_ChangeZoomStep_Params
{
};

// Function EFGame.EFCameraBase.CheckZoom
struct UEFCameraBase_CheckZoom_Params
{
};

// Function EFGame.EFCameraBase.ZoomOut
struct UEFCameraBase_ZoomOut_Params
{
};

// Function EFGame.EFCameraBase.ZoomIn
struct UEFCameraBase_ZoomIn_Params
{
};

// Function EFGame.EFCameraBase.BecomeViewTarget
struct UEFCameraBase_BecomeViewTarget_Params
{
};

// Function EFGame.EFCameraBase.UpdateCamera
struct UEFCameraBase_UpdateCamera_Params
{
};

// Function EFGame.EFCameraBase.ResetInterpolation
struct UEFCameraBase_ResetInterpolation_Params
{
};

// Function EFGame.EFCameraBase.OnBecomeInActive
struct UEFCameraBase_OnBecomeInActive_Params
{
};

// Function EFGame.EFCameraBase.OnBecomeActive
struct UEFCameraBase_OnBecomeActive_Params
{
};

// Function EFGame.EFCameraBase.Init
struct UEFCameraBase_Init_Params
{
};

// Function EFGame.EFBackViewCamera.UpdateCamera
struct UEFBackViewCamera_UpdateCamera_Params
{
};

// Function EFGame.EFCustomizingCamera.UpdateCamera
struct UEFCustomizingCamera_UpdateCamera_Params
{
};

// Function EFGame.EFCustomizingCamera.ZoomOut
struct UEFCustomizingCamera_ZoomOut_Params
{
};

// Function EFGame.EFCustomizingCamera.ZoomIn
struct UEFCustomizingCamera_ZoomIn_Params
{
};

// Function EFGame.EFCustomizingCamera.Init
struct UEFCustomizingCamera_Init_Params
{
};

// Function EFGame.EFEditorViewCamera.OnBecomeInActive
struct UEFEditorViewCamera_OnBecomeInActive_Params
{
};

// Function EFGame.EFEditorViewCamera.OnBecomeActive
struct UEFEditorViewCamera_OnBecomeActive_Params
{
};

// Function EFGame.EFEditorViewCamera.ZoomOut
struct UEFEditorViewCamera_ZoomOut_Params
{
};

// Function EFGame.EFEditorViewCamera.ZoomIn
struct UEFEditorViewCamera_ZoomIn_Params
{
};

// Function EFGame.EFEditorViewCamera.UpdateCamera
struct UEFEditorViewCamera_UpdateCamera_Params
{
};

// Function EFGame.EFFreeCamera.OnBecomeInActive
struct UEFFreeCamera_OnBecomeInActive_Params
{
};

// Function EFGame.EFFreeCamera.OnBecomeActive
struct UEFFreeCamera_OnBecomeActive_Params
{
};

// Function EFGame.EFFreeCamera.HideOwnerPlayer
struct UEFFreeCamera_HideOwnerPlayer_Params
{
};

// Function EFGame.EFFreeCamera.ShowOwnerPlayer
struct UEFFreeCamera_ShowOwnerPlayer_Params
{
};

// Function EFGame.EFFreeCamera.ZoomOut
struct UEFFreeCamera_ZoomOut_Params
{
};

// Function EFGame.EFFreeCamera.ZoomIn
struct UEFFreeCamera_ZoomIn_Params
{
};

// Function EFGame.EFFreeCamera.UpdateCamera
struct UEFFreeCamera_UpdateCamera_Params
{
};

// Function EFGame.EFInteractionCamera.UpdateCamera
struct UEFInteractionCamera_UpdateCamera_Params
{
};

// Function EFGame.EFInteractionCamera.GetCurrentFOV
struct UEFInteractionCamera_GetCurrentFOV_Params
{
};

// Function EFGame.EFIsometricCamera.SetOverrideIsometricZoomStep
struct UEFIsometricCamera_SetOverrideIsometricZoomStep_Params
{
};

// Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed
struct UEFIsometricCamera_SetFixedCameraInterpSpeed_Params
{
};

// Function EFGame.EFIsometricCamera.IsFixedCameraMode
struct UEFIsometricCamera_IsFixedCameraMode_Params
{
};

// Function EFGame.EFIsometricCamera.ResetFixedCamera
struct UEFIsometricCamera_ResetFixedCamera_Params
{
};

// Function EFGame.EFIsometricCamera.SetFixedLookAtPos
struct UEFIsometricCamera_SetFixedLookAtPos_Params
{
};

// Function EFGame.EFIsometricCamera.SetCurIsometricZoomStep
struct UEFIsometricCamera_SetCurIsometricZoomStep_Params
{
};

// Function EFGame.EFIsometricCamera.UpdateCamera
struct UEFIsometricCamera_UpdateCamera_Params
{
};

// Function EFGame.EFIsometricCamera.OnBecomeActive
struct UEFIsometricCamera_OnBecomeActive_Params
{
};

// Function EFGame.EFIsometricCamera.SetContentsSettingTable
struct UEFIsometricCamera_SetContentsSettingTable_Params
{
};

// Function EFGame.EFIsometricCamera.SetSettingTable
struct UEFIsometricCamera_SetSettingTable_Params
{
};

// Function EFGame.EFIsometricCamera.RefineFOV
struct UEFIsometricCamera_RefineFOV_Params
{
};

// Function EFGame.EFIsometricCamera.InActivateSkeletalMeshForceLOD
struct UEFIsometricCamera_InActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFIsometricCamera.ActivateSkeletalMeshForceLOD
struct UEFIsometricCamera_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFIsometricCamera.ChangeZoomStep
struct UEFIsometricCamera_ChangeZoomStep_Params
{
};

// Function EFGame.EFIsometricCamera.CheckZoom
struct UEFIsometricCamera_CheckZoom_Params
{
};

// Function EFGame.EFIsometricCamera.ZoomOut
struct UEFIsometricCamera_ZoomOut_Params
{
};

// Function EFGame.EFIsometricCamera.ZoomIn
struct UEFIsometricCamera_ZoomIn_Params
{
};

// Function EFGame.EFIsometricCamera.ResetInterpolation
struct UEFIsometricCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFMacroCamera.UpdateRotation
struct UEFMacroCamera_UpdateRotation_Params
{
};

// Function EFGame.EFMacroCamera.ZoomOut
struct UEFMacroCamera_ZoomOut_Params
{
};

// Function EFGame.EFMacroCamera.ZoomIn
struct UEFMacroCamera_ZoomIn_Params
{
};

// Function EFGame.EFMacroCamera.UpdateCamera
struct UEFMacroCamera_UpdateCamera_Params
{
};

// Function EFGame.EFPanningCamera.OnBecomeInActive
struct UEFPanningCamera_OnBecomeInActive_Params
{
};

// Function EFGame.EFPanningCamera.OnBecomeActive
struct UEFPanningCamera_OnBecomeActive_Params
{
};

// Function EFGame.EFPanningCamera.EndPanningCamera
struct UEFPanningCamera_EndPanningCamera_Params
{
};

// Function EFGame.EFPanningCamera.StartPanningCamera
struct UEFPanningCamera_StartPanningCamera_Params
{
};

// Function EFGame.EFPanningCamera.ZoomOut
struct UEFPanningCamera_ZoomOut_Params
{
};

// Function EFGame.EFPanningCamera.ZoomIn
struct UEFPanningCamera_ZoomIn_Params
{
};

// Function EFGame.EFPanningCamera.UpdateCamera
struct UEFPanningCamera_UpdateCamera_Params
{
};

// Function EFGame.EFThirdPersonCamera.UpdateRotation
struct UEFThirdPersonCamera_UpdateRotation_Params
{
};

// Function EFGame.EFThirdPersonCamera.ZoomOut
struct UEFThirdPersonCamera_ZoomOut_Params
{
};

// Function EFGame.EFThirdPersonCamera.ZoomIn
struct UEFThirdPersonCamera_ZoomIn_Params
{
};

// Function EFGame.EFThirdPersonCamera.UpdateCamera
struct UEFThirdPersonCamera_UpdateCamera_Params
{
};

// Function EFGame.EFThirdPersonCamera.GetCurrentFOV
struct UEFThirdPersonCamera_GetCurrentFOV_Params
{
};

// Function EFGame.EFTopViewCamera.UpdateCamera
struct UEFTopViewCamera_UpdateCamera_Params
{
};

// Function EFGame.EFTopViewCamera.OnBecomeInActive
struct UEFTopViewCamera_OnBecomeInActive_Params
{
};

// Function EFGame.EFTopViewCamera.OnBecomeActive
struct UEFTopViewCamera_OnBecomeActive_Params
{
};

// Function EFGame.EFTopViewCamera.ProcessInActivateCameraType
struct UEFTopViewCamera_ProcessInActivateCameraType_Params
{
};

// Function EFGame.EFTopViewCamera.ProcessActivateCameraType
struct UEFTopViewCamera_ProcessActivateCameraType_Params
{
};

// Function EFGame.EFTopViewCamera.SetContentsSettingTable
struct UEFTopViewCamera_SetContentsSettingTable_Params
{
};

// Function EFGame.EFTopViewCamera.SetSettingTable
struct UEFTopViewCamera_SetSettingTable_Params
{
};

// Function EFGame.EFTopViewCamera.InActivateSkeletalMeshForceLOD
struct UEFTopViewCamera_InActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFTopViewCamera.ActivateSkeletalMeshForceLOD
struct UEFTopViewCamera_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFTopViewCamera.ChangeZoomStep
struct UEFTopViewCamera_ChangeZoomStep_Params
{
};

// Function EFGame.EFTopViewCamera.CheckZoom
struct UEFTopViewCamera_CheckZoom_Params
{
};

// Function EFGame.EFTopViewCamera.ZoomOut
struct UEFTopViewCamera_ZoomOut_Params
{
};

// Function EFGame.EFTopViewCamera.ZoomIn
struct UEFTopViewCamera_ZoomIn_Params
{
};

// Function EFGame.EFTopViewCamera.ResetInterpolation
struct UEFTopViewCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed
struct UEFTPSCamera_SetFixedCameraInterpSpeed_Params
{
};

// Function EFGame.EFTPSCamera.IsFixedCameraMode
struct UEFTPSCamera_IsFixedCameraMode_Params
{
};

// Function EFGame.EFTPSCamera.ResetFixedCamera
struct UEFTPSCamera_ResetFixedCamera_Params
{
};

// Function EFGame.EFTPSCamera.SetFixedLookAtPos
struct UEFTPSCamera_SetFixedLookAtPos_Params
{
};

// Function EFGame.EFTPSCamera.UpdateCamera
struct UEFTPSCamera_UpdateCamera_Params
{
};

// Function EFGame.EFTPSCamera.OnBecomeActive
struct UEFTPSCamera_OnBecomeActive_Params
{
};

// Function EFGame.EFTPSCamera.SetContentsSettingTable
struct UEFTPSCamera_SetContentsSettingTable_Params
{
};

// Function EFGame.EFTPSCamera.SetSettingTable
struct UEFTPSCamera_SetSettingTable_Params
{
};

// Function EFGame.EFTPSCamera.InActivateSkeletalMeshForceLOD
struct UEFTPSCamera_InActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFTPSCamera.ActivateSkeletalMeshForceLOD
struct UEFTPSCamera_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFTPSCamera.ChangeZoomStep
struct UEFTPSCamera_ChangeZoomStep_Params
{
};

// Function EFGame.EFTPSCamera.CheckZoom
struct UEFTPSCamera_CheckZoom_Params
{
};

// Function EFGame.EFTPSCamera.ZoomOut
struct UEFTPSCamera_ZoomOut_Params
{
};

// Function EFGame.EFTPSCamera.ZoomIn
struct UEFTPSCamera_ZoomIn_Params
{
};

// Function EFGame.EFTPSCamera.ResetInterpolation
struct UEFTPSCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFWatchCamera.SetFixedLookAtPos
struct UEFWatchCamera_SetFixedLookAtPos_Params
{
};

// Function EFGame.EFWatchCamera.SetWatchCameraType
struct UEFWatchCamera_SetWatchCameraType_Params
{
};

// Function EFGame.EFWatchCamera.UpdateCamera
struct UEFWatchCamera_UpdateCamera_Params
{
};

// Function EFGame.EFWatchCamera.OnBecomeActive
struct UEFWatchCamera_OnBecomeActive_Params
{
};

// Function EFGame.EFWatchCamera.ZoomOut
struct UEFWatchCamera_ZoomOut_Params
{
};

// Function EFGame.EFWatchCamera.ZoomIn
struct UEFWatchCamera_ZoomIn_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame
struct UEFCameraModifier_CameraShake_AddCameraShakeGame_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake
struct UEFCameraModifier_CameraShake_RemoveGameCameraShake_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake
struct UEFCameraModifier_CameraShake_OnRemoveGameCameraShake_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake
struct UEFCameraModifier_CameraShake_OnAddGameCameraShake_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.ModifyCamera
struct UEFCameraModifier_CameraShake_ModifyCamera_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.RemoveAllEFViewShakes
struct UEFCameraModifier_CameraShake_RemoveAllEFViewShakes_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.RemoveEFViewShake
struct UEFCameraModifier_CameraShake_RemoveEFViewShake_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.AddEFCameraViewShake
struct UEFCameraModifier_CameraShake_AddEFCameraViewShake_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes
struct UEFCameraModifier_CameraShake_RemoveAllCameraShakes_Params
{
};

// Function EFGame.EFCameraShakePlayGroup.UpdateViewShake
struct UEFCameraShakePlayGroup_UpdateViewShake_Params
{
};

// Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake
struct UEFCameraShakePlayGroup_PreUpdateViewShake_Params
{
};

// Function EFGame.EFCameraShakePlayGroup.RemoveAllViewShake
struct UEFCameraShakePlayGroup_RemoveAllViewShake_Params
{
};

// Function EFGame.EFCameraShakePlayGroup.RemoveViewShake
struct UEFCameraShakePlayGroup_RemoveViewShake_Params
{
};

// Function EFGame.EFCameraShakePlayGroup.AddViewShakeInstance
struct UEFCameraShakePlayGroup_AddViewShakeInstance_Params
{
};

// Function EFGame.EFCameraShakePlayGroup.AddViewShake
struct UEFCameraShakePlayGroup_AddViewShake_Params
{
};

// Function EFGame.EFCameraViewShake.GetAmplitudeSize
struct UEFCameraViewShake_GetAmplitudeSize_Params
{
};

// Function EFGame.EFInputRotCameraActor.GetCameraView
struct AEFInputRotCameraActor_GetCameraView_Params
{
};

// Function EFGame.EFInputRotCameraActor.EndViewTarget
struct AEFInputRotCameraActor_EndViewTarget_Params
{
};

// Function EFGame.EFInputRotCameraActor.BecomeViewTarget
struct AEFInputRotCameraActor_BecomeViewTarget_Params
{
};

// Function EFGame.EFInputRotCameraActor.ActivateInputRotMode
struct AEFInputRotCameraActor_ActivateInputRotMode_Params
{
};

// Function EFGame.EFMacroCameraSplineActor.BreakAllConnections
struct AEFMacroCameraSplineActor_BreakAllConnections_Params
{
};

// Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo
struct AEFMacroCameraSplineActor_BreakConnectionTo_Params
{
};

// Function EFGame.EFMacroCameraSplineActor.IsConnectedTo
struct AEFMacroCameraSplineActor_IsConnectedTo_Params
{
};

// Function EFGame.EFMacroCameraSplineActor.AddConnectionTo
struct AEFMacroCameraSplineActor_AddConnectionTo_Params
{
};

// Function EFGame.EFMacroCameraSplineActor.UpdateConnectedSplineComponents
struct AEFMacroCameraSplineActor_UpdateConnectedSplineComponents_Params
{
};

// Function EFGame.EFMacroCameraSplineActor.UpdateSplineComponents
struct AEFMacroCameraSplineActor_UpdateSplineComponents_Params
{
};

// Function EFGame.EFPlayerCamera.LoadOutlineData
struct AEFPlayerCamera_LoadOutlineData_Params
{
};

// Function EFGame.EFPlayerCamera.UpdateTranslucentActorBlend
struct AEFPlayerCamera_UpdateTranslucentActorBlend_Params
{
};

// Function EFGame.EFPlayerCamera.UpdateOccludedActorBlend
struct AEFPlayerCamera_UpdateOccludedActorBlend_Params
{
};

// Function EFGame.EFPlayerCamera.DisplayDebug
struct AEFPlayerCamera_DisplayDebug_Params
{
};

// Function EFGame.EFPlayerCamera.FOV
struct AEFPlayerCamera_FOV_Params
{
};

// Function EFGame.EFPlayerCamera.AdjustViewportFOV
struct AEFPlayerCamera_AdjustViewportFOV_Params
{
};

// Function EFGame.EFPlayerCamera.SaveCameraValue
struct AEFPlayerCamera_SaveCameraValue_Params
{
};

// Function EFGame.EFPlayerCamera.SetCameraType
struct AEFPlayerCamera_SetCameraType_Params
{
};

// Function EFGame.EFPlayerCamera.UpdateRotation
struct AEFPlayerCamera_UpdateRotation_Params
{
};

// Function EFGame.EFPlayerCamera.ZoomOut
struct AEFPlayerCamera_ZoomOut_Params
{
};

// Function EFGame.EFPlayerCamera.ZoomIn
struct AEFPlayerCamera_ZoomIn_Params
{
};

// Function EFGame.EFPlayerCamera.UpdateViewTarget
struct AEFPlayerCamera_UpdateViewTarget_Params
{
};

// Function EFGame.EFPlayerCamera.DoUpdateCamera
struct AEFPlayerCamera_DoUpdateCamera_Params
{
};

// Function EFGame.EFPlayerCamera.ProcessTestInputCameraActor
struct AEFPlayerCamera_ProcessTestInputCameraActor_Params
{
};

// Function EFGame.EFPlayerCamera.RestoreCameraMode
struct AEFPlayerCamera_RestoreCameraMode_Params
{
};

// Function EFGame.EFPlayerCamera.ChangeCameraMode
struct AEFPlayerCamera_ChangeCameraMode_Params
{
};

// Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting
struct AEFPlayerCamera_ChangeCameraContentsSetting_Params
{
};

// Function EFGame.EFPlayerCamera.ChangeCameraZoomStep
struct AEFPlayerCamera_ChangeCameraZoomStep_Params
{
};

// Function EFGame.EFPlayerCamera.ChangeCameraSetting
struct AEFPlayerCamera_ChangeCameraSetting_Params
{
};

// Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle
struct AEFPlayerCamera_ApplyVehicleFOVAngle_Params
{
};

// Function EFGame.EFPlayerCamera.SetVehicleFOVAngle
struct AEFPlayerCamera_SetVehicleFOVAngle_Params
{
};

// Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting
struct AEFPlayerCamera_ApplyCamOverrideFogSetting_Params
{
};

// Function EFGame.EFPlayerCamera.ProcessTargetCameraActorBlend
struct AEFPlayerCamera_ProcessTargetCameraActorBlend_Params
{
};

// Function EFGame.EFPlayerCamera.ResetAttachCameraActor
struct AEFPlayerCamera_ResetAttachCameraActor_Params
{
};

// Function EFGame.EFPlayerCamera.FindBestCameraType
struct AEFPlayerCamera_FindBestCameraType_Params
{
};

// Function EFGame.EFPlayerCamera.GetCurrentCameraMode
struct AEFPlayerCamera_GetCurrentCameraMode_Params
{
};

// Function EFGame.EFPlayerCamera.CreateCamera
struct AEFPlayerCamera_CreateCamera_Params
{
};

// Function EFGame.EFPlayerCamera.PostBeginPlay
struct AEFPlayerCamera_PostBeginPlay_Params
{
};

// Function EFGame.EFPlayerCamera.GetFOV
struct AEFPlayerCamera_GetFOV_Params
{
};

// Function EFGame.EFPlayerCamera.GetCameraDistance
struct AEFPlayerCamera_GetCameraDistance_Params
{
};

// Function EFGame.EFPlayerCamera.Destroyed
struct AEFPlayerCamera_Destroyed_Params
{
};

// Function EFGame.EFPlayerCamera.CalcVerticalFOV
struct AEFPlayerCamera_CalcVerticalFOV_Params
{
};

// Function EFGame.EFEmitter.HideSelf
struct AEFEmitter_HideSelf_Params
{
};

// Function EFGame.EFEmitter.PostBeginPlay
struct AEFEmitter_PostBeginPlay_Params
{
};

// Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool
struct AEFEnvironmentActionEmitter_ClearExtendPool_Params
{
};

// Function EFGame.EFEnvironmentActionEmitter.OnParticleSystemFinished
struct AEFEnvironmentActionEmitter_OnParticleSystemFinished_Params
{
};

// Function EFGame.EFSpawnedEmitter.HideBecauseFinished
struct AEFSpawnedEmitter_HideBecauseFinished_Params
{
};

// Function EFGame.EFSpawnedEmitter.ClearExtendPool
struct AEFSpawnedEmitter_ClearExtendPool_Params
{
};

// Function EFGame.EFSpawnedEmitter.OnParticleSystemFinished
struct AEFSpawnedEmitter_OnParticleSystemFinished_Params
{
};

// Function EFGame.EFEmitterPool.ClearPoolPSInfoComponents
struct AEFEmitterPool_ClearPoolPSInfoComponents_Params
{
};

// Function EFGame.EFEmitterPool.OnPSInfoFinished
struct AEFEmitterPool_OnPSInfoFinished_Params
{
};

// Function EFGame.EFEmitterPool.ClearExtendPool
struct AEFEmitterPool_ClearExtendPool_Params
{
};

// Function EFGame.EFPickingEmitter.IsActivateEffect
struct AEFPickingEmitter_IsActivateEffect_Params
{
};

// Function EFGame.EFPickingEmitter.DeactivateEffect
struct AEFPickingEmitter_DeactivateEffect_Params
{
};

// Function EFGame.EFPickingEmitter.ActivateEffect
struct AEFPickingEmitter_ActivateEffect_Params
{
};

// Function EFGame.EFPickingEmitter.OnParticleSystemFinished
struct AEFPickingEmitter_OnParticleSystemFinished_Params
{
};

// Function EFGame.EFSeqAct_NPCController.Update
struct UEFSeqAct_NPCController_Update_Params
{
};

// Function EFGame.EFSeqAct_NPCController.Activated
struct UEFSeqAct_NPCController_Activated_Params
{
};

// Function EFGame.EFSeqAct_NPCController.BackupMainMovingState
struct UEFSeqAct_NPCController_BackupMainMovingState_Params
{
};

// Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess
struct UEFSeqAct_NPCController_SetEventMoveCompleteProcess_Params
{
};

// Function EFGame.EFSeqAct_NPCController.SetMoving
struct UEFSeqAct_NPCController_SetMoving_Params
{
};

// Function EFGame.EFSeqAct_NPCController.SettingReady
struct UEFSeqAct_NPCController_SettingReady_Params
{
};

// Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation
struct UEFSeqAct_NPCController_setPlayWaitAnimation_Params
{
};

// Function EFGame.EFSeqAct_NPCController.setPlayAnimation
struct UEFSeqAct_NPCController_setPlayAnimation_Params
{
};

// Function EFGame.EFSeqAct_NPCController.GetAnimationName
struct UEFSeqAct_NPCController_GetAnimationName_Params
{
};

// Function EFGame.EFSeqAct_NPCController.initial
struct UEFSeqAct_NPCController_initial_Params
{
};

// Function EFGame.EFEnvironmentInfoVolume.UnTouch
struct AEFEnvironmentInfoVolume_UnTouch_Params
{
};

// Function EFGame.EFEnvironmentInfoVolume.Touch
struct AEFEnvironmentInfoVolume_Touch_Params
{
};

// Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment
struct AEFEnvironmentInfoVolume_UpdateEnvironment_Params
{
};

// Function EFGame.EFEnvironmentInfoVolume.OnToggle
struct AEFEnvironmentInfoVolume_OnToggle_Params
{
};

// Function EFGame.EFPathBlockingVolume.StopsProjectile
struct AEFPathBlockingVolume_StopsProjectile_Params
{
};

// Function EFGame.EFGFxMoviePlayer.GetStringINI
struct UEFGFxMoviePlayer_GetStringINI_Params
{
};

// Function EFGame.EFGFxMoviePlayer.SetStringINI
struct UEFGFxMoviePlayer_SetStringINI_Params
{
};

// Function EFGame.EFGFxMoviePlayer.CreateArrayEx
struct UEFGFxMoviePlayer_CreateArrayEx_Params
{
};

// Function EFGame.EFGFxMoviePlayer.CreateObjectEx
struct UEFGFxMoviePlayer_CreateObjectEx_Params
{
};

// Function EFGame.EFGFxMoviePlayer.PostAdvance
struct UEFGFxMoviePlayer_PostAdvance_Params
{
};

// Function EFGame.EFGFxMoviePlayer.WidgetUnloaded
struct UEFGFxMoviePlayer_WidgetUnloaded_Params
{
};

// Function EFGame.EFGFxMoviePlayer.WidgetInitialized
struct UEFGFxMoviePlayer_WidgetInitialized_Params
{
};

// Function EFGame.EFGFxEditorMoviePlayer.Start
struct UEFGFxEditorMoviePlayer_Start_Params
{
};

// Function EFGame.EFGFxMovieWidget.GetExternalTexture
struct UEFGFxMovieWidget_GetExternalTexture_Params
{
};

// Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding
struct UEFGFxMovieWidget_HasGFxObjectBinding_Params
{
};

// Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding
struct UEFGFxMovieWidget_DelGFxObjectBinding_Params
{
};

// Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding
struct UEFGFxMovieWidget_AddGFxObjectBinding_Params
{
};

// Function EFGame.EFGFxMovieWidget.SetVisible
struct UEFGFxMovieWidget_SetVisible_Params
{
};

// Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback
struct UEFGFxMovieWidget_GFxFristFrameCallback_Params
{
};

// Function EFGame.EFGFxMovieWidget.PostWidgetInit
struct UEFGFxMovieWidget_PostWidgetInit_Params
{
};

// Function EFGame.EFGFxMovieWidget.Start
struct UEFGFxMovieWidget_Start_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.ActivateFrame
struct UEFGFxMovieWidgetMain_ActivateFrame_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick
struct UEFGFxMovieWidgetMain_ARKSlotMouseDoubleClick_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick
struct UEFGFxMovieWidgetMain_ARKSlotMouseRightClick_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick
struct UEFGFxMovieWidgetMain_ARKSlotMouseLeftClick_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName
struct UEFGFxMovieWidgetMain_ClearBindWidgetByName_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget
struct UEFGFxMovieWidgetMain_ClearBindWidgetByWidget_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.UnBindWidget
struct UEFGFxMovieWidgetMain_UnBindWidget_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.BindWidget
struct UEFGFxMovieWidgetMain_BindWidget_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded
struct UEFGFxMovieWidgetMain_WidgetUnloaded_Params
{
};

// Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized
struct UEFGFxMovieWidgetMain_WidgetInitialized_Params
{
};

// Function EFGame.EFUIComponent.InvalidateSize
struct UEFUIComponent_InvalidateSize_Params
{
};

// Function EFGame.EFUIComponent.InvalidateData
struct UEFUIComponent_InvalidateData_Params
{
};

// Function EFGame.EFUIComponent.Invalidate
struct UEFUIComponent_Invalidate_Params
{
};

// Function EFGame.EFUIComponent.ValidateNow
struct UEFUIComponent_ValidateNow_Params
{
};

// Function EFGame.EFUIComponent.HasFocus
struct UEFUIComponent_HasFocus_Params
{
};

// Function EFGame.EFUIComponent.GetY
struct UEFUIComponent_GetY_Params
{
};

// Function EFGame.EFUIComponent.SetY
struct UEFUIComponent_SetY_Params
{
};

// Function EFGame.EFUIComponent.GetX
struct UEFUIComponent_GetX_Params
{
};

// Function EFGame.EFUIComponent.SetX
struct UEFUIComponent_SetX_Params
{
};

// Function EFGame.EFUIComponent.GetHeight
struct UEFUIComponent_GetHeight_Params
{
};

// Function EFGame.EFUIComponent.SetHeight
struct UEFUIComponent_SetHeight_Params
{
};

// Function EFGame.EFUIComponent.GetWidth
struct UEFUIComponent_GetWidth_Params
{
};

// Function EFGame.EFUIComponent.SetWidth
struct UEFUIComponent_SetWidth_Params
{
};

// Function EFGame.EFUIComponent.GetEnabled
struct UEFUIComponent_GetEnabled_Params
{
};

// Function EFGame.EFUIComponent.SetEnabled
struct UEFUIComponent_SetEnabled_Params
{
};

// Function EFGame.EFUIComponent.GetVisible
struct UEFUIComponent_GetVisible_Params
{
};

// Function EFGame.EFUIComponent.SetVisible
struct UEFUIComponent_SetVisible_Params
{
};

// Function EFGame.EFUIComponent.GetName
struct UEFUIComponent_GetName_Params
{
};

// Function EFGame.EFUIComponent.SetName
struct UEFUIComponent_SetName_Params
{
};

// Function EFGame.EFUIComponent.WidgetInitialized
struct UEFUIComponent_WidgetInitialized_Params
{
};

// Function EFGame.EFUISlot.SetItemData
struct UEFUISlot_SetItemData_Params
{
};

// Function EFGame.EFUISlot.SetDisableType
struct UEFUISlot_SetDisableType_Params
{
};

// Function EFGame.EFUISlot.SetUniqueData
struct UEFUISlot_SetUniqueData_Params
{
};

// Function EFGame.EFUISlot.GetUniqueData
struct UEFUISlot_GetUniqueData_Params
{
};

// Function EFGame.EFUISlot.SetLocked
struct UEFUISlot_SetLocked_Params
{
};

// Function EFGame.EFUISlot.IsLocked
struct UEFUISlot_IsLocked_Params
{
};

// Function EFGame.EFUISlot.SetItemGrade
struct UEFUISlot_SetItemGrade_Params
{
};

// Function EFGame.EFUISlot.GetItemGrade
struct UEFUISlot_GetItemGrade_Params
{
};

// Function EFGame.EFUISlot.SetSoundTheme
struct UEFUISlot_SetSoundTheme_Params
{
};

// Function EFGame.EFUISlot.GetSoundTheme
struct UEFUISlot_GetSoundTheme_Params
{
};

// Function EFGame.EFUISlot.SetDisabled
struct UEFUISlot_SetDisabled_Params
{
};

// Function EFGame.EFUISlot.IsDisabled
struct UEFUISlot_IsDisabled_Params
{
};

// Function EFGame.EFUISlot.SetCooltime
struct UEFUISlot_SetCooltime_Params
{
};

// Function EFGame.EFUISlot.GetTotalCoolTime
struct UEFUISlot_GetTotalCoolTime_Params
{
};

// Function EFGame.EFUISlot.GetRemainCoolTime
struct UEFUISlot_GetRemainCoolTime_Params
{
};

// Function EFGame.EFUISlot.SetIconHeight
struct UEFUISlot_SetIconHeight_Params
{
};

// Function EFGame.EFUISlot.GetIconHeight
struct UEFUISlot_GetIconHeight_Params
{
};

// Function EFGame.EFUISlot.SetIconWidth
struct UEFUISlot_SetIconWidth_Params
{
};

// Function EFGame.EFUISlot.GetIconWidth
struct UEFUISlot_GetIconWidth_Params
{
};

// Function EFGame.EFUISlot.SetIconY
struct UEFUISlot_SetIconY_Params
{
};

// Function EFGame.EFUISlot.GetIconY
struct UEFUISlot_GetIconY_Params
{
};

// Function EFGame.EFUISlot.SetIconX
struct UEFUISlot_SetIconX_Params
{
};

// Function EFGame.EFUISlot.GetIconX
struct UEFUISlot_GetIconX_Params
{
};

// Function EFGame.EFUISlot.SetIconCount
struct UEFUISlot_SetIconCount_Params
{
};

// Function EFGame.EFUISlot.GetIconCount
struct UEFUISlot_GetIconCount_Params
{
};

// Function EFGame.EFUISlot.SetIconPath
struct UEFUISlot_SetIconPath_Params
{
};

// Function EFGame.EFUISlot.GetIconPath
struct UEFUISlot_GetIconPath_Params
{
};

// Function EFGame.EFUISlot.SetWindowType
struct UEFUISlot_SetWindowType_Params
{
};

// Function EFGame.EFUISlot.GetWindowType
struct UEFUISlot_GetWindowType_Params
{
};

// Function EFGame.EFUISlot.SetSlotIndex
struct UEFUISlot_SetSlotIndex_Params
{
};

// Function EFGame.EFUISlot.GetSlotIndex
struct UEFUISlot_GetSlotIndex_Params
{
};

// Function EFGame.EFUISlot.SetBindID
struct UEFUISlot_SetBindID_Params
{
};

// Function EFGame.EFUISlot.GetBindID
struct UEFUISlot_GetBindID_Params
{
};

// Function EFGame.EFUISlot.SetSlotType
struct UEFUISlot_SetSlotType_Params
{
};

// Function EFGame.EFUISlot.GetSlotType
struct UEFUISlot_GetSlotType_Params
{
};

// Function EFGame.EFUISlot.SetIconData
struct UEFUISlot_SetIconData_Params
{
};

// Function EFGame.EFUISlot.GetSlotItemData
struct UEFUISlot_GetSlotItemData_Params
{
};

// Function EFGame.EFUIChatTabControl.ChatLogInputSelectType
struct UEFUIChatTabControl_ChatLogInputSelectType_Params
{
};

// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup
struct UEFUIChatTabControl_ChatLogMainWidgetTabInsertGroup_Params
{
};

// Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag
struct UEFUIChatTabControl_ChatLogInTabGroupElementStartDrag_Params
{
};

// Function EFGame.EFUIChatTabControl.ChatLogLinkClick
struct UEFUIChatTabControl_ChatLogLinkClick_Params
{
};

// Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow
struct UEFUIChatTabControl_ChatLogTabContextMenuShow_Params
{
};

// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated
struct UEFUIChatTabControl_ChatLogMainWidgetSizeUpdated_Params
{
};

// Function EFGame.EFUIList.SetSelectedIndex
struct UEFUIList_SetSelectedIndex_Params
{
};

// Function EFGame.EFUIList.GetSelectedIndex
struct UEFUIList_GetSelectedIndex_Params
{
};

// Function EFGame.EFUIList.GetData
struct UEFUIList_GetData_Params
{
};

// Function EFGame.EFUIListItem.HasAttribute
struct UEFUIListItem_HasAttribute_Params
{
};

// Function EFGame.EFUIListItemSlot.SetTownShow
struct UEFUIListItemSlot_SetTownShow_Params
{
};

// Function EFGame.EFUIListItemSlot.SetFriendshipShow
struct UEFUIListItemSlot_SetFriendshipShow_Params
{
};

// Function EFGame.EFUIListItemSlot.SetAdvBookShow
struct UEFUIListItemSlot_SetAdvBookShow_Params
{
};

// Function EFGame.EFUIListItemSlot.SetTemporary
struct UEFUIListItemSlot_SetTemporary_Params
{
};

// Function EFGame.EFUIListItemSlot.SetTrash
struct UEFUIListItemSlot_SetTrash_Params
{
};

// Function EFGame.EFUIListItemSlot.SetDisableType
struct UEFUIListItemSlot_SetDisableType_Params
{
};

// Function EFGame.EFUIListItemSlot.SetTableID
struct UEFUIListItemSlot_SetTableID_Params
{
};

// Function EFGame.EFUIListItemSlot.GetTableID
struct UEFUIListItemSlot_GetTableID_Params
{
};

// Function EFGame.EFUIListItemSlot.SetUniqueData
struct UEFUIListItemSlot_SetUniqueData_Params
{
};

// Function EFGame.EFUIListItemSlot.GetUniqueData
struct UEFUIListItemSlot_GetUniqueData_Params
{
};

// Function EFGame.EFUIListItemSlot.SetLocked
struct UEFUIListItemSlot_SetLocked_Params
{
};

// Function EFGame.EFUIListItemSlot.IsLocked
struct UEFUIListItemSlot_IsLocked_Params
{
};

// Function EFGame.EFUIListItemSlot.SetItemGrade
struct UEFUIListItemSlot_SetItemGrade_Params
{
};

// Function EFGame.EFUIListItemSlot.GetItemGrade
struct UEFUIListItemSlot_GetItemGrade_Params
{
};

// Function EFGame.EFUIListItemSlot.SetSoundTheme
struct UEFUIListItemSlot_SetSoundTheme_Params
{
};

// Function EFGame.EFUIListItemSlot.GetSoundTheme
struct UEFUIListItemSlot_GetSoundTheme_Params
{
};

// Function EFGame.EFUIListItemSlot.SetDisabled
struct UEFUIListItemSlot_SetDisabled_Params
{
};

// Function EFGame.EFUIListItemSlot.IsDisabled
struct UEFUIListItemSlot_IsDisabled_Params
{
};

// Function EFGame.EFUIListItemSlot.SetItemName
struct UEFUIListItemSlot_SetItemName_Params
{
};

// Function EFGame.EFUIListItemSlot.GetItemName
struct UEFUIListItemSlot_GetItemName_Params
{
};

// Function EFGame.EFUIListItemSlot.SetLabel
struct UEFUIListItemSlot_SetLabel_Params
{
};

// Function EFGame.EFUIListItemSlot.GetLabel
struct UEFUIListItemSlot_GetLabel_Params
{
};

// Function EFGame.EFUIListItemSlot.SetCooltime
struct UEFUIListItemSlot_SetCooltime_Params
{
};

// Function EFGame.EFUIListItemSlot.GetTotalCoolTime
struct UEFUIListItemSlot_GetTotalCoolTime_Params
{
};

// Function EFGame.EFUIListItemSlot.GetRemainCoolTime
struct UEFUIListItemSlot_GetRemainCoolTime_Params
{
};

// Function EFGame.EFUIListItemSlot.SetIconHeight
struct UEFUIListItemSlot_SetIconHeight_Params
{
};

// Function EFGame.EFUIListItemSlot.GetIconHeight
struct UEFUIListItemSlot_GetIconHeight_Params
{
};

// Function EFGame.EFUIListItemSlot.SetIconWidth
struct UEFUIListItemSlot_SetIconWidth_Params
{
};

// Function EFGame.EFUIListItemSlot.GetIconWidth
struct UEFUIListItemSlot_GetIconWidth_Params
{
};

// Function EFGame.EFUIListItemSlot.SetIconY
struct UEFUIListItemSlot_SetIconY_Params
{
};

// Function EFGame.EFUIListItemSlot.GetIconY
struct UEFUIListItemSlot_GetIconY_Params
{
};

// Function EFGame.EFUIListItemSlot.SetIconX
struct UEFUIListItemSlot_SetIconX_Params
{
};

// Function EFGame.EFUIListItemSlot.GetIconX
struct UEFUIListItemSlot_GetIconX_Params
{
};

// Function EFGame.EFUIListItemSlot.SetIconCount
struct UEFUIListItemSlot_SetIconCount_Params
{
};

// Function EFGame.EFUIListItemSlot.GetIconCount
struct UEFUIListItemSlot_GetIconCount_Params
{
};

// Function EFGame.EFUIListItemSlot.SetIconPath
struct UEFUIListItemSlot_SetIconPath_Params
{
};

// Function EFGame.EFUIListItemSlot.GetIconPath
struct UEFUIListItemSlot_GetIconPath_Params
{
};

// Function EFGame.EFUIListItemSlot.SetWindowType
struct UEFUIListItemSlot_SetWindowType_Params
{
};

// Function EFGame.EFUIListItemSlot.GetWindowType
struct UEFUIListItemSlot_GetWindowType_Params
{
};

// Function EFGame.EFUIListItemSlot.SetSlotIndex
struct UEFUIListItemSlot_SetSlotIndex_Params
{
};

// Function EFGame.EFUIListItemSlot.GetSlotIndex
struct UEFUIListItemSlot_GetSlotIndex_Params
{
};

// Function EFGame.EFUIListItemSlot.SetBindID
struct UEFUIListItemSlot_SetBindID_Params
{
};

// Function EFGame.EFUIListItemSlot.GetBindID
struct UEFUIListItemSlot_GetBindID_Params
{
};

// Function EFGame.EFUIListItemSlot.SetSlotType
struct UEFUIListItemSlot_SetSlotType_Params
{
};

// Function EFGame.EFUIListItemSlot.GetSlotType
struct UEFUIListItemSlot_GetSlotType_Params
{
};

// Function EFGame.EFUIListItemSlot.SetIconData
struct UEFUIListItemSlot_SetIconData_Params
{
};

// Function EFGame.EFGFxWidgetAchievement.AchievementRewardTakeBtnClick
struct UEFGFxWidgetAchievement_AchievementRewardTakeBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick
struct UEFGFxWidgetAnchorModeCrew_AnchorCrewSkillSlotClick_Params
{
};

// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged
struct UEFGFxWidgetAnchorModeCrew_AnchorCrewPageIndexChanged_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.showNew
struct UEFGFxWidgetBuddy_showNew_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.setSelectedTab
struct UEFGFxWidgetBuddy_setSelectedTab_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.setAFK
struct UEFGFxWidgetBuddy_setAFK_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver
struct UEFGFxWidgetBuddy_FriendsGroupRendererMouseOver_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick
struct UEFGFxWidgetBuddy_FriendsGroupRendererRightClick_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended
struct UEFGFxWidgetBuddy_FriendsGroupRendererExtended_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick
struct UEFGFxWidgetBuddy_FriendsRendererRightClick_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsInvite
struct UEFGFxWidgetBuddy_FriendsInvite_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsBlock
struct UEFGFxWidgetBuddy_FriendsBlock_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock
struct UEFGFxWidgetBuddy_FriendsUnBlock_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel
struct UEFGFxWidgetBuddy_FriendsBuddyCancel_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject
struct UEFGFxWidgetBuddy_FriendsBuddyReject_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree
struct UEFGFxWidgetBuddy_FriendsBuddyAgree_Params
{
};

// Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus
struct UEFGFxWidgetCandidate_SetCandidateFocus_Params
{
};

// Function EFGame.EFGFxWidgetChattingOption.SetChannelColor
struct UEFGFxWidgetChattingOption_SetChannelColor_Params
{
};

// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab
struct UEFGFxWidgetChattingOption_ChatLogFilterOptionAddTab_Params
{
};

// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd
struct UEFGFxWidgetChattingOption_ChatLogFilterOptionOKWnd_Params
{
};

// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData
struct UEFGFxWidgetChattingOption_ChatLogFilterOptionResetData_Params
{
};

// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList
struct UEFGFxWidgetChattingOption_ChatLogFilterOptionAppliedChannelList_Params
{
};

// Function EFGame.EFGFxWidgetCinematicDungeonEntrance.DungeonEntranceDifficultyIndex
struct UEFGFxWidgetCinematicDungeonEntrance_DungeonEntranceDifficultyIndex_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition
struct UEFGFxWidgetColorPicker_SetTargetPosition_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.SetTargetCode
struct UEFGFxWidgetColorPicker_SetTargetCode_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.SetColor
struct UEFGFxWidgetColorPicker_SetColor_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor
struct UEFGFxWidgetColorPicker_SetDefaultColor_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerCursorDragEnd
struct UEFGFxWidgetColorPicker_RequestEventColorPickerCursorDragEnd_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerProgressValueChange
struct UEFGFxWidgetColorPicker_RequestEventColorPickerProgressValueChange_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.ChatMessageInputTextHasFocus
struct UEFGFxWidgetColorPicker_ChatMessageInputTextHasFocus_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerDefaultSetting
struct UEFGFxWidgetColorPicker_RequestARKColorPickerDefaultSetting_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerSaveSetting
struct UEFGFxWidgetColorPicker_RequestARKColorPickerSaveSetting_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerClose
struct UEFGFxWidgetColorPicker_RequestARKColorPickerClose_Params
{
};

// Function EFGame.EFGFxWidgetCurrencyInfo.CurrencyInfoTreeItemClick
struct UEFGFxWidgetCurrencyInfo_CurrencyInfoTreeItemClick_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition
struct UEFGFxWidgetCustomColorPicker_SetTargetPosition_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode
struct UEFGFxWidgetCustomColorPicker_SetTargetCode_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.SetColor
struct UEFGFxWidgetCustomColorPicker_SetColor_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.SetInit
struct UEFGFxWidgetCustomColorPicker_SetInit_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged
struct UEFGFxWidgetCustomColorPicker_ColorPickerColorChanged_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged
struct UEFGFxWidgetCustomColorPicker_ColorPickerLightnessChanged_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerDefaultSetting
struct UEFGFxWidgetCustomColorPicker_RequestARKColorPickerDefaultSetting_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerSaveSetting
struct UEFGFxWidgetCustomColorPicker_RequestARKColorPickerSaveSetting_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerClose
struct UEFGFxWidgetCustomColorPicker_RequestARKColorPickerClose_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildApplicantRightClick
struct UEFGFxWidgetGuild_GuildApplicantRightClick_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick
struct UEFGFxWidgetGuild_GuildMemberRightClick_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildReject
struct UEFGFxWidgetGuild_GuildReject_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildAccept
struct UEFGFxWidgetGuild_GuildAccept_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick
struct UEFGFxWidgetGuild_GuildNoticeCopyButtonClick_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction
struct UEFGFxWidgetGuild_GuildChangeGuildIntroduction_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice
struct UEFGFxWidgetGuild_GuildChangeGuildNotice_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick
struct UEFGFxWidgetGuild_GuildChangeBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark
struct UEFGFxWidgetGuild_GuildChangeGuildMark_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildCreate
struct UEFGFxWidgetGuild_GuildCreate_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildCancel
struct UEFGFxWidgetGuild_GuildCancel_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildApply
struct UEFGFxWidgetGuild_GuildApply_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.killOptionKey
struct UEFGFxWidgetHotKey_killOptionKey_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu
struct UEFGFxWidgetHotKey_selectOptionHotKeyMainMenu_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCloseBtnClick
struct UEFGFxWidgetHotKey_OptionHotKeyCloseBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyKillFocus
struct UEFGFxWidgetHotKey_OptionHotKeyKillFocus_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCancelClick
struct UEFGFxWidgetHotKey_OptionHotKeyCancelClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyAcceptClick
struct UEFGFxWidgetHotKey_OptionHotKeyAcceptClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyConfirmClick
struct UEFGFxWidgetHotKey_OptionHotKeyConfirmClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyResetClick
struct UEFGFxWidgetHotKey_OptionHotKeyResetClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyButtonChange
struct UEFGFxWidgetHotKey_OptionHotKeyButtonChange_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyMainListIndexChange
struct UEFGFxWidgetHotKey_OptionHotKeyMainListIndexChange_Params
{
};

// Function EFGame.EFGFxWidgetInstanceDungeonEntrance.DungeonEntranceDifficultyIndex
struct UEFGFxWidgetInstanceDungeonEntrance_DungeonEntranceDifficultyIndex_Params
{
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOut_Params
{
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOver_Params
{
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor
struct UEFGFxWidgetInteractionAbility_Refine_ChangeCursor_Params
{
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneClick
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneClick_Params
{
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleChangeTabClick
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleChangeTabClick_Params
{
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneSelected
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneSelected_Params
{
};

// Function EFGame.EFGFxWidgetInteractionBarter.BarterShopPurchaseItem
struct UEFGFxWidgetInteractionBarter_BarterShopPurchaseItem_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable
struct UEFGFxWidgetInteractionMail_SetNextSlotDisable_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable
struct UEFGFxWidgetInteractionMail_ASSetNextSlotDisable_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable
struct UEFGFxWidgetInteractionMail_SetNextSlotEnable_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable
struct UEFGFxWidgetInteractionMail_ASSetNextSlotEnable_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType
struct UEFGFxWidgetInteractionMail_SetMailOpenType_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.SetOpenType
struct UEFGFxWidgetInteractionMail_SetOpenType_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.StopLoading
struct UEFGFxWidgetInteractionMail_StopLoading_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.StructReceiverCacheData
struct UEFGFxWidgetInteractionMail_StructReceiverCacheData_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.AddReceiverData
struct UEFGFxWidgetInteractionMail_AddReceiverData_Params
{
};

// Function EFGame.EFGFxWidgetItemAssembly.ItemCraftAlarmEffectLuckyPlayEnd
struct UEFGFxWidgetItemAssembly_ItemCraftAlarmEffectLuckyPlayEnd_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelNoramlSkillClick
struct UEFGFxWidgetLifeSkill_LifeLevelNoramlSkillClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillPlusClick
struct UEFGFxWidgetLifeSkill_LifeLevelMasterSkillPlusClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelMasterSkillMinusClick
struct UEFGFxWidgetLifeSkill_LifeLevelMasterSkillMinusClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointPlusClick
struct UEFGFxWidgetLifeSkill_LifeLevelPointPlusClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelPointMinusClick
struct UEFGFxWidgetLifeSkill_LifeLevelPointMinusClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideBtnClick
struct UEFGFxWidgetLifeSkill_LifeLevelGuideBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuideClosed
struct UEFGFxWidgetLifeSkill_LifeLevelGuideClosed_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.OnLifeNoramlSkillClick
struct UEFGFxWidgetLifeSkill_OnLifeNoramlSkillClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.OnLifeMasterSkillPlusClick
struct UEFGFxWidgetLifeSkill_OnLifeMasterSkillPlusClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.OnLifeMasterSkillMinusClick
struct UEFGFxWidgetLifeSkill_OnLifeMasterSkillMinusClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.OnLifePointPlusClick
struct UEFGFxWidgetLifeSkill_OnLifePointPlusClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.OnLifePointMinusClick
struct UEFGFxWidgetLifeSkill_OnLifePointMinusClick_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.LifeLevelGuide
struct UEFGFxWidgetLifeSkill_LifeLevelGuide_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.OnLifeLevelGuideClosed
struct UEFGFxWidgetLifeSkill_OnLifeLevelGuideClosed_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuideUI
struct UEFGFxWidgetLifeSkill_OpenLifeLevelGuideUI_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.OpenLifeLevelGuide
struct UEFGFxWidgetLifeSkill_OpenLifeLevelGuide_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.SetNoSkillUI
struct UEFGFxWidgetLifeSkill_SetNoSkillUI_Params
{
};

// Function EFGame.EFGFxWidgetLifeSkill.SetNoSkill
struct UEFGFxWidgetLifeSkill_SetNoSkill_Params
{
};

// Function EFGame.EFGFxWidgetMap.RequestResetMapRotation
struct UEFGFxWidgetMap_RequestResetMapRotation_Params
{
};

// Function EFGame.EFGFxWidgetMap.RequestWorldMapUpperDepth
struct UEFGFxWidgetMap_RequestWorldMapUpperDepth_Params
{
};

// Function EFGame.EFGFxWidgetMap.WorldMapZoneIndex
struct UEFGFxWidgetMap_WorldMapZoneIndex_Params
{
};

// Function EFGame.EFGFxWidgetMap.WorldMapContinentType
struct UEFGFxWidgetMap_WorldMapContinentType_Params
{
};

// Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick
struct UEFGFxWidgetMODWatingInfo_MinimapAlarmListRightBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage
struct UEFGFxWidgetMoviePlayer_TestLabSendInputMessage_Params
{
};

// Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected
struct UEFGFxWidgetNormalBox_NormalBoxItemSelected_Params
{
};

// Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick
struct UEFGFxWidgetNoticeMOD_NoticeModWaitListItemClick_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber
struct UEFGFxWidgetQuestJournal_SetMaxTreeItemCheckNumber_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber
struct UEFGFxWidgetQuestJournal_SetMaxQuestCheckNumber_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked
struct UEFGFxWidgetQuestJournal_ARKQuestTraceButtonClicked_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_TraceQuestButton
struct UEFGFxWidgetQuestJournal_OnClicked_TraceQuestButton_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemListOverPool
struct UEFGFxWidgetQuestJournal_QuestJournalTreeItemListOverPool_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.OnCheckedTreeItemOverPool
struct UEFGFxWidgetQuestJournal_OnCheckedTreeItemOverPool_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestGiveUpButtonClicked
struct UEFGFxWidgetQuestJournal_ARKQuestGiveUpButtonClicked_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_GiveUpButton
struct UEFGFxWidgetQuestJournal_OnClicked_GiveUpButton_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.QuestJournalTreeItemMultiCheck
struct UEFGFxWidgetQuestJournal_QuestJournalTreeItemMultiCheck_Params
{
};

// Function EFGame.EFGFxWidgetQuestJournal.OnChecked_QuestTreeItem
struct UEFGFxWidgetQuestJournal_OnChecked_QuestTreeItem_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.OnHide
struct UEFGFxWidgetQuestSummary_OnHide_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.OnHideQuestSummary
struct UEFGFxWidgetQuestSummary_OnHideQuestSummary_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestSelectedRewardItem
struct UEFGFxWidgetQuestSummary_ARKQuestSelectedRewardItem_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_SelectChoiceItem
struct UEFGFxWidgetQuestSummary_OnClicked_SelectChoiceItem_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestCompleteButtonClicked
struct UEFGFxWidgetQuestSummary_ARKQuestCompleteButtonClicked_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_CompleteButton
struct UEFGFxWidgetQuestSummary_OnClicked_CompleteButton_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestAcceptButtonClicked
struct UEFGFxWidgetQuestSummary_ARKQuestAcceptButtonClicked_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_AcceptButton
struct UEFGFxWidgetQuestSummary_OnClicked_AcceptButton_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.SelectChoiceRewardItem
struct UEFGFxWidgetQuestSummary_SelectChoiceRewardItem_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem
struct UEFGFxWidgetQuestSummary_SetSelectedIndex_ChoiceRewardItem_Params
{
};

// Function EFGame.EFGFxWidgetRandomBox.Init
struct UEFGFxWidgetRandomBox_Init_Params
{
};

// Function EFGame.EFGFxWidgetRandomBox.startAni
struct UEFGFxWidgetRandomBox_startAni_Params
{
};

// Function EFGame.EFGFxWidgetRandomBox.RandomBoxComplete
struct UEFGFxWidgetRandomBox_RandomBoxComplete_Params
{
};

// Function EFGame.EFGFxWidgetRandomBox.RandomBoxClosed
struct UEFGFxWidgetRandomBox_RandomBoxClosed_Params
{
};

// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemReceiveAll
struct UEFGFxWidgetSelectBox_SelectBoxItemReceiveAll_Params
{
};

// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected
struct UEFGFxWidgetSelectBox_SelectBoxItemSelected_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.closePreset
struct UEFGFxWidgetSkillBook_closePreset_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.openPreset
struct UEFGFxWidgetSkillBook_openPreset_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.cancelSelection
struct UEFGFxWidgetSkillBook_cancelSelection_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock
struct UEFGFxWidgetSkillBook_SkillBookPresetUnlock_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply
struct UEFGFxWidgetSkillBook_SkillBookPresetApply_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected
struct UEFGFxWidgetSkillBook_SkillBookPresetSelected_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookInitCancel
struct UEFGFxWidgetSkillBook_SkillBookInitCancel_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookInitConfirm
struct UEFGFxWidgetSkillBook_SkillBookInitConfirm_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit
struct UEFGFxWidgetSkillBook_SkillBookPresetEdit_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected
struct UEFGFxWidgetSkillBook_SkillBookListSelected_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick
struct UEFGFxWidgetSkillBook_SkillBookTierBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick
struct UEFGFxWidgetSkillBook_SkillBookDownBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick
struct UEFGFxWidgetSkillBook_SkillBookUpBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler
struct UEFGFxWidgetSystemOption_SystemOptionButtonClickHandler_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange
struct UEFGFxWidgetSystemOption_SystemOptionListIndexChange_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.OpenChattingOptionColorPicker
struct UEFGFxWidgetSystemOption_OpenChattingOptionColorPicker_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyKillFocus
struct UEFGFxWidgetSystemOption_OptionHotKeyKillFocus_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyButtonChange
struct UEFGFxWidgetSystemOption_OptionHotKeyButtonChange_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionWndCloseButtonClicked
struct UEFGFxWidgetSystemOption_SystemOptionWndCloseButtonClicked_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider
struct UEFGFxWidgetSystemOption_SystemOptionChangedSlider_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox
struct UEFGFxWidgetSystemOption_SystemOptionSelectedComboBox_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox
struct UEFGFxWidgetSystemOption_SystemOptionSelectedCheckBox_Params
{
};

// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete
struct UEFGFxWidgetUnLockBox_UnlockBoxItemComplete_Params
{
};

// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed
struct UEFGFxWidgetUnLockBox_UnlockBoxItemClosed_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady
struct UEFGFxWidgetUserTrade_SetOtherTradeReady_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady
struct UEFGFxWidgetUserTrade_ASSetOtherTradeReady_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady
struct UEFGFxWidgetUserTrade_SetMyTradeReady_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady
struct UEFGFxWidgetUserTrade_ASSetMyTradeReady_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm
struct UEFGFxWidgetUserTrade_SetOtherTradeConfirm_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm
struct UEFGFxWidgetUserTrade_ASSetOtherTradeConfirm_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm
struct UEFGFxWidgetUserTrade_SetMyTradeConfirm_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm
struct UEFGFxWidgetUserTrade_ASSetMyTradeConfirm_Params
{
};

// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowConfirmBtnClick
struct UEFGFxWidgetVictoryCrest_VictoryCrestWindowConfirmBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowExchangeBtnClick
struct UEFGFxWidgetVictoryCrest_VictoryCrestWindowExchangeBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetVictoryCrest.VictoryCrestWindowUnlockBtnClick
struct UEFGFxWidgetVictoryCrest_VictoryCrestWindowUnlockBtnClick_Params
{
};

// Function EFGame.EFUIFrame.WidgetInitialized
struct UEFUIFrame_WidgetInitialized_Params
{
};

// Function EFGame.EFUIFrame.Deactivate
struct UEFUIFrame_Deactivate_Params
{
};

// Function EFGame.EFUIFrame.Activate
struct UEFUIFrame_Activate_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete
struct UEFGFxWidgetAnnounce_AnnounceFrameMotionComplete_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer
struct UEFGFxWidgetAnnounce_cleanUpLayer_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition
struct UEFGFxWidgetAnnounce_setAnnouncePosition_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition
struct UEFGFxWidgetAnnounce_getAnnounceListPosition_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime
struct UEFGFxWidgetAnnounce_setAnnounceItemTime_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime
struct UEFGFxWidgetAnnounce_getAnnounceItemTime_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem
struct UEFGFxWidgetAnnounce_getAnnounceListItem_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem
struct UEFGFxWidgetAnnounce_setAnnounceTotalItem_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem
struct UEFGFxWidgetAnnounce_getAnnounceMaxItem_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem
struct UEFGFxWidgetAnnounce_getAnnounceCurrentItem_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage
struct UEFGFxWidgetAnnounce_addAnnounceMessage_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton
struct UEFGFxWidgetClassPreview_SetEnableResetButton_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.SetShowType
struct UEFGFxWidgetClassPreview_SetShowType_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo
struct UEFGFxWidgetClassPreview_SetClassUpgradeChoiceInfo_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData
struct UEFGFxWidgetClassPreview_SetPlayingClassData_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease
struct UEFGFxWidgetClassPreview_ClassUpgradeCancelRelease_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID
struct UEFGFxWidgetClassPreview_ClassUpgradeSelectClassID_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass
struct UEFGFxWidgetClassPreview_ClassUpgradeConfirmClass_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease
struct UEFGFxWidgetClassPreview_ClassUpgradeReturnRelease_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster
struct UEFGFxWidgetClassPreview_ClassUpgradeAddBossMonster_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster
struct UEFGFxWidgetClassPreview_ClassUpgradeAddNormalMonster_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset
struct UEFGFxWidgetClassPreview_ClassUpgradePlayReset_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.RequestStopMovie
struct UEFGFxWidgetClassPreview_RequestStopMovie_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.RequestPlayMovieClassUpgradePreview
struct UEFGFxWidgetClassPreview_RequestPlayMovieClassUpgradePreview_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewRequestCloseWnd
struct UEFGFxWidgetClassPreview_ClassUpgradePreviewRequestCloseWnd_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass
struct UEFGFxWidgetClassPreview_ClassUpgradePreviewPlaySelectClass_Params
{
};

// Function EFGame.EFGFxWidgetColosseum_New.setObserverMod
struct UEFGFxWidgetColosseum_New_setObserverMod_Params
{
};

// Function EFGame.EFGFxWidgetColosseum_New.setTimerPause
struct UEFGFxWidgetColosseum_New_setTimerPause_Params
{
};

// Function EFGame.EFGFxWidgetColosseum_New.AddItem
struct UEFGFxWidgetColosseum_New_AddItem_Params
{
};

// Function EFGame.EFGFxWidgetColosseum_New.setModType
struct UEFGFxWidgetColosseum_New_setModType_Params
{
};

// Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType
struct UEFGFxWidgetColosseum_New_roundAnnounceShowType_Params
{
};

// Function EFGame.EFGFxWidgetColosseum_New.announceShowType
struct UEFGFxWidgetColosseum_New_announceShowType_Params
{
};

// Function EFGame.EFGFxWidgetColosseum_New.setStartData
struct UEFGFxWidgetColosseum_New_setStartData_Params
{
};

// Function EFGame.EFGFxWidgetColosseum_New.setWaitData
struct UEFGFxWidgetColosseum_New_setWaitData_Params
{
};

// Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue
struct UEFGFxWidgetCommon_SetPartyMemberValue_Params
{
};

// Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip
struct UEFGFxWidgetCommon_SetCommonObjectAvailableSkip_Params
{
};

// Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip
struct UEFGFxWidgetCommon_ShowCommonObjectAvailableSkip_Params
{
};

// Function EFGame.EFGFxWidgetCommon.WidgetInitialized
struct UEFGFxWidgetCommon_WidgetInitialized_Params
{
};

// Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID
struct UEFGFxWidgetContentsUnlock_ContentsUnlockCallbackTypeID_Params
{
};

// Function EFGame.EFGFxWidgetContentsUnlock.OnContentsUnlockCallbackTypeID
struct UEFGFxWidgetContentsUnlock_OnContentsUnlockCallbackTypeID_Params
{
};

// Function EFGame.EFGFxWidgetDamage.EFDataBinding_UpdateData
struct UEFGFxWidgetDamage_EFDataBinding_UpdateData_Params
{
};

// Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged
struct UEFGFxWidgetExcavationMiniGame_MiniGameStateChanged_Params
{
};

// Function EFGame.EFGFxWidgetExcavationMiniGame.OnChangeGameState
struct UEFGFxWidgetExcavationMiniGame_OnChangeGameState_Params
{
};

// Function EFGame.EFGFxWidgetExcavationMiniGame.ArcheologyResultComplete
struct UEFGFxWidgetExcavationMiniGame_ArcheologyResultComplete_Params
{
};

// Function EFGame.EFGFxWidgetExcavationMiniGame.OnResultComplete
struct UEFGFxWidgetExcavationMiniGame_OnResultComplete_Params
{
};

// Function EFGame.EFGFxWidgetFishingNetMiniGame.MiniGameStateChanged
struct UEFGFxWidgetFishingNetMiniGame_MiniGameStateChanged_Params
{
};

// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnChangeGameState
struct UEFGFxWidgetFishingNetMiniGame_OnChangeGameState_Params
{
};

// Function EFGame.EFGFxWidgetFishingNetMiniGame.FishingGameOver
struct UEFGFxWidgetFishingNetMiniGame_FishingGameOver_Params
{
};

// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnFishingGameOver
struct UEFGFxWidgetFishingNetMiniGame_OnFishingGameOver_Params
{
};

// Function EFGame.EFGFxWidgetHeadStatus.MoveHeadStatus
struct UEFGFxWidgetHeadStatus_MoveHeadStatus_Params
{
};

// Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex
struct UEFGFxWidgetHudCommonExp_HUD_CommonTabIndex_Params
{
};

// Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex
struct UEFGFxWidgetHudCommonExp_CommonTabIndex_Params
{
};

// Function EFGame.EFGFxWidgetHudIdentity.SummonerSkillButtonClick
struct UEFGFxWidgetHudIdentity_SummonerSkillButtonClick_Params
{
};

// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListRightBtnClick
struct UEFGFxWidgetHudLeftTop_TopHUDAlarmListRightBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick
struct UEFGFxWidgetHudLeftTop_TopHUDAlarmListLeftBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick
struct UEFGFxWidgetHudLeftTop_TopHUDAlarmListItemClick_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp
struct UEFGFxWidgetInteraction_RelationShipLevelUp_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.CloseBackGround
struct UEFGFxWidgetInteraction_CloseBackGround_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround
struct UEFGFxWidgetInteraction_InteractionCloseBackGround_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.OpenBackGround
struct UEFGFxWidgetInteraction_OpenBackGround_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround
struct UEFGFxWidgetInteraction_InteractionOpenBackGround_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex
struct UEFGFxWidgetInteraction_SelectQuestListIndex_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.SelectQuestList
struct UEFGFxWidgetInteraction_SelectQuestList_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.SelectFunctionType
struct UEFGFxWidgetInteraction_SelectFunctionType_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer
struct UEFGFxWidgetInteraction_SelectFunctionContainer_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint
struct UEFGFxWidgetInteraction_ShowMaxIntimatePoint_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint
struct UEFGFxWidgetInteraction_ShowMaximumIntimatePoint_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.ClearInteractionState
struct UEFGFxWidgetInteraction_ClearInteractionState_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState
struct UEFGFxWidgetInteraction_ClearFunctionButtonState_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick
struct UEFGFxWidgetInteraction_InteractionCommonCloseBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.EndInteractionMode
struct UEFGFxWidgetInteraction_EndInteractionMode_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick
struct UEFGFxWidgetInteraction_InteractionCommonPlayerTalkListClick_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList
struct UEFGFxWidgetInteraction_ClickInteractionTalkSelectList_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick
struct UEFGFxWidgetInteraction_InteractionCommonNPCTalkListClick_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList
struct UEFGFxWidgetInteraction_ClickInteractionTalkList_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick
struct UEFGFxWidgetInteraction_InteractionCommonMenuListClick_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu
struct UEFGFxWidgetInteraction_ClickInteractionFunctionMenu_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.WidgetInitialized
struct UEFGFxWidgetInteraction_WidgetInitialized_Params
{
};

// Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected
struct UEFGFxWidgetInteractionKeyIcon_InteractionKeySelected_Params
{
};

// Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode
struct UEFGFxWidgetInteractionKeyIcon_FinishSwitchInteractionMode_Params
{
};

// Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability
struct UEFGFxWidgetLifeToolDurability_HideLifeDurability_Params
{
};

// Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability
struct UEFGFxWidgetLifeToolDurability_DecreaseLifeDurability_Params
{
};

// Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability
struct UEFGFxWidgetLifeToolDurability_ShowLifeDurability_Params
{
};

// Function EFGame.EFGFxWidgetLifeVessel.LifeVesselCompleteAnimationEnd
struct UEFGFxWidgetLifeVessel_LifeVesselCompleteAnimationEnd_Params
{
};

// Function EFGame.EFGFxWidgetMenu.QuickSlotMenuClick
struct UEFGFxWidgetMenu_QuickSlotMenuClick_Params
{
};

// Function EFGame.EFGFxWidgetMenu.GetMenu
struct UEFGFxWidgetMenu_GetMenu_Params
{
};

// Function EFGame.EFGFxWidgetMenu.SetEnableButton
struct UEFGFxWidgetMenu_SetEnableButton_Params
{
};

// Function EFGame.EFGFxWidgetMenu.SetToolTip
struct UEFGFxWidgetMenu_SetToolTip_Params
{
};

// Function EFGame.EFGFxWidgetMenu.SetBindKey
struct UEFGFxWidgetMenu_SetBindKey_Params
{
};

// Function EFGame.EFGFxWidgetMenu.SetSelectButton
struct UEFGFxWidgetMenu_SetSelectButton_Params
{
};

// Function EFGame.EFGFxWidgetMenu.SelectButton
struct UEFGFxWidgetMenu_SelectButton_Params
{
};

// Function EFGame.EFGFxWidgetMinimap.RequestShowMinimapChannelList
struct UEFGFxWidgetMinimap_RequestShowMinimapChannelList_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonMergeCompensation
struct UEFGFxWidgetMOD_Cube_ModCommonMergeCompensation_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation
struct UEFGFxWidgetMOD_Cube_FinishMergeCompensation_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect
struct UEFGFxWidgetMOD_Cube_ModCommonEndCubeEffect_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect
struct UEFGFxWidgetMOD_Cube_EndBuffEffect_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation
struct UEFGFxWidgetMOD_Cube_PlayModCommonMergeCompensation_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState
struct UEFGFxWidgetMOD_Cube_SetModCommonRandomState_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation
struct UEFGFxWidgetMOD_Cube_SetModCommonCurrentCompensation_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation
struct UEFGFxWidgetMOD_Cube_SetModCommonAccumulateCompensation_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState
struct UEFGFxWidgetMOD_Cube_UpdateModCommonCubeState_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState
struct UEFGFxWidgetMOD_Cube_RemoveModCommonCubeState_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState
struct UEFGFxWidgetMOD_Cube_AddModCommonCubeState_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList
struct UEFGFxWidgetMOD_Cube_SetModCommonStateList_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep
struct UEFGFxWidgetMOD_Cube_SetModCommonWaveStep_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType
struct UEFGFxWidgetMOD_Cube_SetModCommonHudType_Params
{
};

// Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete
struct UEFGFxWidgetMOD_PlatinumArea_ModPlatinumCoopComplete_Params
{
};

// Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick
struct UEFGFxWidgetMODEntrance_ModEntranceMapCanvasItemClick_Params
{
};

// Function EFGame.EFGFxWidgetNotice.setNoticeIcon
struct UEFGFxWidgetNotice_setNoticeIcon_Params
{
};

// Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick
struct UEFGFxWidgetNotice_NoticeFrameAlarmBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData
struct UEFGFxWidgetPcCreateHUD_SetDefaultClassData_Params
{
};

// Function EFGame.EFGFxWidgetPcCreateHUD.RequestStopMovie
struct UEFGFxWidgetPcCreateHUD_RequestStopMovie_Params
{
};

// Function EFGame.EFGFxWidgetPcCreateHUD.RequestPlayMovieClassSelectPreview
struct UEFGFxWidgetPcCreateHUD_RequestPlayMovieClassSelectPreview_Params
{
};

// Function EFGame.EFGFxWidgetPcCreateHUD.RequestUpdateClassSelectData
struct UEFGFxWidgetPcCreateHUD_RequestUpdateClassSelectData_Params
{
};

// Function EFGame.EFGFxWidgetPcCustomizing.previewImg
struct UEFGFxWidgetPcCustomizing_previewImg_Params
{
};

// Function EFGame.EFGFxWidgetPcCustomizing.setCostume
struct UEFGFxWidgetPcCustomizing_setCostume_Params
{
};

// Function EFGame.EFGFxWidgetPcCustomizing.setClassID
struct UEFGFxWidgetPcCustomizing_setClassID_Params
{
};

// Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData
struct UEFGFxWidgetPcCustomizing_setPreviewcostumeData_Params
{
};

// Function EFGame.EFGFxWidgetPcCustomizing.setPresetData
struct UEFGFxWidgetPcCustomizing_setPresetData_Params
{
};

// Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged
struct UEFGFxWidgetPcCustomizing_CustomizingSettingValueChanged_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.ShowAnim
struct UEFGFxWidgetPcSelect_ShowAnim_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.ShowNotice
struct UEFGFxWidgetPcSelect_ShowNotice_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect
struct UEFGFxWidgetPcSelect_SetCharacterSelect_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving
struct UEFGFxWidgetPcSelect_CharacterSelectMoving_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel
struct UEFGFxWidgetPcSelect_WallpaperCancel_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected
struct UEFGFxWidgetPcSelect_WallpaperSelected_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm
struct UEFGFxWidgetPcSelect_WallpaperConfirm_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel
struct UEFGFxWidgetPcSelect_CharacterSelectDeleteCancel_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex
struct UEFGFxWidgetPcSelect_CharacterSelectedIndex_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.RequestNewCharacter
struct UEFGFxWidgetPcSelect_RequestNewCharacter_Params
{
};

// Function EFGame.EFGFxWidgetRaidClear.RaidProcessResultComplete
struct UEFGFxWidgetRaidClear_RaidProcessResultComplete_Params
{
};

// Function EFGame.EFGFxWidgetRaidExitNotice.RaidProcessNoticeTimeOut
struct UEFGFxWidgetRaidExitNotice_RaidProcessNoticeTimeOut_Params
{
};

// Function EFGame.EFGFxWidgetRaidFail.RaidProcessResultComplete
struct UEFGFxWidgetRaidFail_RaidProcessResultComplete_Params
{
};

// Function EFGame.EFGFxWidgetRaidHUD.RaidProcessTimeOut
struct UEFGFxWidgetRaidHUD_RaidProcessTimeOut_Params
{
};

// Function EFGame.EFUISlotData.SetTownShow
struct UEFUISlotData_SetTownShow_Params
{
};

// Function EFGame.EFUISlotData.SetToolTip
struct UEFUISlotData_SetToolTip_Params
{
};

// Function EFGame.EFUISlotData.SetRecommend
struct UEFUISlotData_SetRecommend_Params
{
};

// Function EFGame.EFUISlotData.SetFriendshipShow
struct UEFUISlotData_SetFriendshipShow_Params
{
};

// Function EFGame.EFUISlotData.SetAdvBookShow
struct UEFUISlotData_SetAdvBookShow_Params
{
};

// Function EFGame.EFUISlotData.SetTemporary
struct UEFUISlotData_SetTemporary_Params
{
};

// Function EFGame.EFUISlotData.SetTrash
struct UEFUISlotData_SetTrash_Params
{
};

// Function EFGame.EFUISlotData.SetDisableType
struct UEFUISlotData_SetDisableType_Params
{
};

// Function EFGame.EFUISlotData.SetTableID
struct UEFUISlotData_SetTableID_Params
{
};

// Function EFGame.EFUISlotData.GetTableID
struct UEFUISlotData_GetTableID_Params
{
};

// Function EFGame.EFUISlotData.SetUniqueData
struct UEFUISlotData_SetUniqueData_Params
{
};

// Function EFGame.EFUISlotData.GetUniqueData
struct UEFUISlotData_GetUniqueData_Params
{
};

// Function EFGame.EFUISlotData.SetLocked
struct UEFUISlotData_SetLocked_Params
{
};

// Function EFGame.EFUISlotData.IsLocked
struct UEFUISlotData_IsLocked_Params
{
};

// Function EFGame.EFUISlotData.SetItemGrade
struct UEFUISlotData_SetItemGrade_Params
{
};

// Function EFGame.EFUISlotData.GetItemGrade
struct UEFUISlotData_GetItemGrade_Params
{
};

// Function EFGame.EFUISlotData.SetSoundTheme
struct UEFUISlotData_SetSoundTheme_Params
{
};

// Function EFGame.EFUISlotData.GetSoundTheme
struct UEFUISlotData_GetSoundTheme_Params
{
};

// Function EFGame.EFUISlotData.SetDisabled
struct UEFUISlotData_SetDisabled_Params
{
};

// Function EFGame.EFUISlotData.IsDisabled
struct UEFUISlotData_IsDisabled_Params
{
};

// Function EFGame.EFUISlotData.SetLabelName
struct UEFUISlotData_SetLabelName_Params
{
};

// Function EFGame.EFUISlotData.GetLabelName
struct UEFUISlotData_GetLabelName_Params
{
};

// Function EFGame.EFUISlotData.SetCooltime
struct UEFUISlotData_SetCooltime_Params
{
};

// Function EFGame.EFUISlotData.GetTotalCoolTime
struct UEFUISlotData_GetTotalCoolTime_Params
{
};

// Function EFGame.EFUISlotData.GetRemainCoolTime
struct UEFUISlotData_GetRemainCoolTime_Params
{
};

// Function EFGame.EFUISlotData.SetIconHeight
struct UEFUISlotData_SetIconHeight_Params
{
};

// Function EFGame.EFUISlotData.GetIconHeight
struct UEFUISlotData_GetIconHeight_Params
{
};

// Function EFGame.EFUISlotData.SetIconWidth
struct UEFUISlotData_SetIconWidth_Params
{
};

// Function EFGame.EFUISlotData.GetIconWidth
struct UEFUISlotData_GetIconWidth_Params
{
};

// Function EFGame.EFUISlotData.SetIconY
struct UEFUISlotData_SetIconY_Params
{
};

// Function EFGame.EFUISlotData.GetIconY
struct UEFUISlotData_GetIconY_Params
{
};

// Function EFGame.EFUISlotData.SetIconX
struct UEFUISlotData_SetIconX_Params
{
};

// Function EFGame.EFUISlotData.GetIconX
struct UEFUISlotData_GetIconX_Params
{
};

// Function EFGame.EFUISlotData.SetIconCount
struct UEFUISlotData_SetIconCount_Params
{
};

// Function EFGame.EFUISlotData.GetIconCount
struct UEFUISlotData_GetIconCount_Params
{
};

// Function EFGame.EFUISlotData.SetIconPath
struct UEFUISlotData_SetIconPath_Params
{
};

// Function EFGame.EFUISlotData.GetIconPath
struct UEFUISlotData_GetIconPath_Params
{
};

// Function EFGame.EFUISlotData.SetWindowType
struct UEFUISlotData_SetWindowType_Params
{
};

// Function EFGame.EFUISlotData.GetWindowType
struct UEFUISlotData_GetWindowType_Params
{
};

// Function EFGame.EFUISlotData.SetSlotIndex
struct UEFUISlotData_SetSlotIndex_Params
{
};

// Function EFGame.EFUISlotData.GetSlotIndex
struct UEFUISlotData_GetSlotIndex_Params
{
};

// Function EFGame.EFUISlotData.SetBindID
struct UEFUISlotData_SetBindID_Params
{
};

// Function EFGame.EFUISlotData.GetBindID
struct UEFUISlotData_GetBindID_Params
{
};

// Function EFGame.EFUISlotData.SetSlotType
struct UEFUISlotData_SetSlotType_Params
{
};

// Function EFGame.EFUISlotData.GetSlotType
struct UEFUISlotData_GetSlotType_Params
{
};

// Function EFGame.EFUISlotData.SetIconData_New
struct UEFUISlotData_SetIconData_New_Params
{
};

// Function EFGame.EFUISlotData.SetIconData
struct UEFUISlotData_SetIconData_Params
{
};

// Function EFGame.EFUISlotData.SetImageData_New
struct UEFUISlotData_SetImageData_New_Params
{
};

// Function EFGame.EFUISlotData.SetImageData
struct UEFUISlotData_SetImageData_Params
{
};

// Function EFGame.EFGameViewportClient.Tick
struct UEFGameViewportClient_Tick_Params
{
};

// Function EFGame.EFGameViewportClient.PostRender
struct UEFGameViewportClient_PostRender_Params
{
};

// Function EFGame.EFGameViewportClient.CreateScreenshot
struct UEFGameViewportClient_CreateScreenshot_Params
{
};

// Function EFGame.EFGameViewportClient.InitRelativeTimeFadeInfo
struct UEFGameViewportClient_InitRelativeTimeFadeInfo_Params
{
};

// Function EFGame.EFGameViewportClient.CacheViewProjectionMatrix
struct UEFGameViewportClient_CacheViewProjectionMatrix_Params
{
};

// Function EFGame.EFGameViewportClient.PostFadeInOutRender
struct UEFGameViewportClient_PostFadeInOutRender_Params
{
};

// Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility
struct UEFGameViewportClient_SetHardwareMouseCursorVisibility_Params
{
};

// Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty
struct AEFNxForceFieldTornado_UpdateDynamicProperty_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset
struct AEFNxForceFieldTornado_OnUpdatePropertyHeightOffset_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight
struct AEFNxForceFieldTornado_OnUpdatePropertyForceHeight_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity
struct AEFNxForceFieldTornado_OnUpdatePropertyEscapeVelocity_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight
struct AEFNxForceFieldTornado_OnUpdatePropertyLiftFalloffHeight_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius
struct AEFNxForceFieldTornado_OnUpdatePropertyForceTopRadius_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius
struct AEFNxForceFieldTornado_OnUpdatePropertyForceRadius_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength
struct AEFNxForceFieldTornado_OnUpdatePropertyLiftStrength_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength
struct AEFNxForceFieldTornado_OnUpdatePropertyRotationalStrength_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength
struct AEFNxForceFieldTornado_OnUpdatePropertyRadialStrength_Params
{
};

// Function EFGame.EFData_MaskInfo.GetProperLevel
struct UEFData_MaskInfo_GetProperLevel_Params
{
};

// Function EFGame.EFExcelShell.GetColumNum
struct UEFExcelShell_GetColumNum_Params
{
};

// Function EFGame.EFExcelShell.NewLine
struct UEFExcelShell_NewLine_Params
{
};

// Function EFGame.EFExcelShell.ResetEdit
struct UEFExcelShell_ResetEdit_Params
{
};

// Function EFGame.EFExcelShell.SetLookPresetPosition
struct UEFExcelShell_SetLookPresetPosition_Params
{
};

// Function EFGame.EFExcelShell.SetLookPresetRange
struct UEFExcelShell_SetLookPresetRange_Params
{
};

// Function EFGame.EFExcelShell.ReadStringRange
struct UEFExcelShell_ReadStringRange_Params
{
};

// Function EFGame.EFExcelShell.ReadString
struct UEFExcelShell_ReadString_Params
{
};

// Function EFGame.EFExcelShell.WriteString
struct UEFExcelShell_WriteString_Params
{
};

// Function EFGame.EFExcelShell.WriteName
struct UEFExcelShell_WriteName_Params
{
};

// Function EFGame.EFExcelShell.WriteFloat
struct UEFExcelShell_WriteFloat_Params
{
};

// Function EFGame.EFExcelShell.WriteInt
struct UEFExcelShell_WriteInt_Params
{
};

// Function EFGame.EFExcelShell.WriteUINT
struct UEFExcelShell_WriteUINT_Params
{
};

// Function EFGame.EFExcelShell.SetSheetName
struct UEFExcelShell_SetSheetName_Params
{
};

// Function EFGame.EFExcelShell.SetFont
struct UEFExcelShell_SetFont_Params
{
};

// Function EFGame.EFExcelShell.SetBorder
struct UEFExcelShell_SetBorder_Params
{
};

// Function EFGame.EFExcelShell.SetBackgroundColor
struct UEFExcelShell_SetBackgroundColor_Params
{
};

// Function EFGame.EFExcelShell.GetWorkSheetName
struct UEFExcelShell_GetWorkSheetName_Params
{
};

// Function EFGame.EFExcelShell.SelectWorkSheet
struct UEFExcelShell_SelectWorkSheet_Params
{
};

// Function EFGame.EFExcelShell.SelectWorkSheetByName
struct UEFExcelShell_SelectWorkSheetByName_Params
{
};

// Function EFGame.EFExcelShell.SaveAs
struct UEFExcelShell_SaveAs_Params
{
};

// Function EFGame.EFExcelShell.OpenExcelFile
struct UEFExcelShell_OpenExcelFile_Params
{
};

// Function EFGame.EFExcelShell.NewSheet
struct UEFExcelShell_NewSheet_Params
{
};

// Function EFGame.EFExcelShell.NewExcelFile
struct UEFExcelShell_NewExcelFile_Params
{
};

// Function EFGame.EFExcelShell.AutoFitColomn
struct UEFExcelShell_AutoFitColomn_Params
{
};

// Function EFGame.EFExcelShell.AutoFitColumn
struct UEFExcelShell_AutoFitColumn_Params
{
};

// Function EFGame.EFLocalTrigger.Touch
struct AEFLocalTrigger_Touch_Params
{
};

// Function EFGame.EFLocalTrigger.PostBeginPlay
struct AEFLocalTrigger_PostBeginPlay_Params
{
};

// Function EFGame.EFLocalTrigger.IsCinematicControl
struct AEFLocalTrigger_IsCinematicControl_Params
{
};

// Function EFGame.EFLocalTrigger.IsLocalMode
struct AEFLocalTrigger_IsLocalMode_Params
{
};

// Function EFGame.EFLocalTriggerVolume.Touch
struct AEFLocalTriggerVolume_Touch_Params
{
};

// Function EFGame.EFLocalTriggerVolume.PostBeginPlay
struct AEFLocalTriggerVolume_PostBeginPlay_Params
{
};

// Function EFGame.EFLocalTriggerVolume.IsCinematicControl
struct AEFLocalTriggerVolume_IsCinematicControl_Params
{
};

// Function EFGame.EFLocalTriggerVolume.IsLocalMode
struct AEFLocalTriggerVolume_IsLocalMode_Params
{
};

// Function EFGame.EFDataContainer.XmlExport
struct UEFDataContainer_XmlExport_Params
{
};

// Function EFGame.EFDataContainer.XlsExport
struct UEFDataContainer_XlsExport_Params
{
};

// Function EFGame.EFDataContainer.XlsImport
struct UEFDataContainer_XlsImport_Params
{
};

// Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport
struct UEFDataContainer_CharacterCustomizing_XmlExport_Params
{
};

// Function EFGame.EFDataContainer_ColorPalette.XmlExport
struct UEFDataContainer_ColorPalette_XmlExport_Params
{
};

// Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport
struct UEFDataContainer_CustomizeBoneScale_XmlExport_Params
{
};

// Function EFGame.EFDataContainer_LookInfos.XmlExport
struct UEFDataContainer_LookInfos_XmlExport_Params
{
};

// Function EFGame.EFDataContainer_NpcFunction.XmlExport
struct UEFDataContainer_NpcFunction_XmlExport_Params
{
};

// Function EFGame.EFDataContainer_Quest.XmlExport
struct UEFDataContainer_Quest_XmlExport_Params
{
};

// Function EFGame.EFDataContainer_TexturePalette.XmlExport
struct UEFDataContainer_TexturePalette_XmlExport_Params
{
};

// Function EFGame.EFLightBeam.SetActive
struct AEFLightBeam_SetActive_Params
{
};

// Function EFGame.EFItem.SetLocationForceUpdateComponent
struct AEFItem_SetLocationForceUpdateComponent_Params
{
};

// Function EFGame.EFItem.SetLocationForce
struct AEFItem_SetLocationForce_Params
{
};

// Function EFGame.EFItem.ClearAttachedPSIIndex
struct AEFItem_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFItem.NotifyChangedBase
struct AEFItem_NotifyChangedBase_Params
{
};

// Function EFGame.EFItem.EncroachedBy
struct AEFItem_EncroachedBy_Params
{
};

// Function EFGame.EFItem.BaseChange
struct AEFItem_BaseChange_Params
{
};

// Function EFGame.EFItem.Destroyed
struct AEFItem_Destroyed_Params
{
};

// Function EFGame.EFInteractiveFoliageActor.TakeDamage
struct AEFInteractiveFoliageActor_TakeDamage_Params
{
};

// Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom
struct AEFMatineePathNode_BreakAllConnectionsFrom_Params
{
};

// Function EFGame.EFMatineePathNode.BreakAllConnections
struct AEFMatineePathNode_BreakAllConnections_Params
{
};

// Function EFGame.EFMatineePathNode.BreakConnectionTo
struct AEFMatineePathNode_BreakConnectionTo_Params
{
};

// Function EFGame.EFMatineePathNode.IsConnectedTo
struct AEFMatineePathNode_IsConnectedTo_Params
{
};

// Function EFGame.EFMatineePathNode.AddConnectionTo
struct AEFMatineePathNode_AddConnectionTo_Params
{
};

// Function EFGame.EFMatineePathNode.UpdateConnectedLineComponents
struct AEFMatineePathNode_UpdateConnectedLineComponents_Params
{
};

// Function EFGame.EFMatineePathNode.UpdateLineComponents
struct AEFMatineePathNode_UpdateLineComponents_Params
{
};

// Function EFGame.EFGFxHUDWrapper.PostRender
struct AEFGFxHUDWrapper_PostRender_Params
{
};

// Function EFGame.EFGFxHUDWrapper.PostBeginPlay
struct AEFGFxHUDWrapper_PostBeginPlay_Params
{
};

// Function EFGame.EFGFxHUDWrapper.Destroyed
struct AEFGFxHUDWrapper_Destroyed_Params
{
};

// Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects
struct UEFSeqAct_SetPostProcessEffectProperties_GetPostProcessEffects_Params
{
};

// Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated
struct UEFSeqAct_SetAmbientOcclusionEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated
struct UEFSeqAct_SetBlurEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties
struct UEFSeqAct_SetDOFEffectProperties_SetProperties_Params
{
};

// Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated
struct UEFSeqAct_SetDOFEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties
struct UEFSeqAct_SetDOFAndBloomEffectProperties_SetProperties_Params
{
};

// Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties
struct UEFSeqAct_SetDOFBloomMotionBlurEffect_SetProperties_Params
{
};

// Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated
struct UEFSeqAct_SetMaterialEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated
struct UEFSeqAct_SetMotionBlurEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated
struct UEFSeqAct_SetUberPostProcessEffect_Activated_Params
{
};

// Function EFGame.EFSeqAct_TogglePostProcessEffect.Activated
struct UEFSeqAct_TogglePostProcessEffect_Activated_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
