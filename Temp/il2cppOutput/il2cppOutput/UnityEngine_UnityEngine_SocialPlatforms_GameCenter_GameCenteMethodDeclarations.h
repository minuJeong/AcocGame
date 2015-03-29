#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t2473;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t2474;
// System.Action`1<System.Boolean>
struct Action_1_t2462;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t62;
// System.String[]
struct StringU5BU5D_t4;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t2475;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t2477;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t2463;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t2464;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t2465;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t2479;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t2466;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2469;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t2480;
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
 void GameCenterPlatform__ctor_m7900 (GameCenterPlatform_t2473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
 void GameCenterPlatform__cctor_m7901 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
 void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m7902 (GameCenterPlatform_t2473 * __this, Object_t * ___user, Action_1_t2462 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
 void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m7903 (GameCenterPlatform_t2473 * __this, Object_t * ___user, Action_1_t2462 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
 void GameCenterPlatform_Internal_Authenticate_m7904 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
 bool GameCenterPlatform_Internal_Authenticated_m7905 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
 String_t* GameCenterPlatform_Internal_UserName_m7906 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
 String_t* GameCenterPlatform_Internal_UserID_m7907 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
 bool GameCenterPlatform_Internal_Underage_m7908 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
 Texture2D_t62 * GameCenterPlatform_Internal_UserImage_m7909 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
 void GameCenterPlatform_Internal_LoadFriends_m7910 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
 void GameCenterPlatform_Internal_LoadAchievementDescriptions_m7911 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
 void GameCenterPlatform_Internal_LoadAchievements_m7912 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
 void GameCenterPlatform_Internal_ReportProgress_m7913 (Object_t * __this/* static, unused */, String_t* ___id, double ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
 void GameCenterPlatform_Internal_ReportScore_m7914 (Object_t * __this/* static, unused */, int64_t ___score, String_t* ___category, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
 void GameCenterPlatform_Internal_LoadScores_m7915 (Object_t * __this/* static, unused */, String_t* ___category, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
 void GameCenterPlatform_Internal_ShowAchievementsUI_m7916 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
 void GameCenterPlatform_Internal_ShowLeaderboardUI_m7917 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
 void GameCenterPlatform_Internal_LoadUsers_m7918 (Object_t * __this/* static, unused */, StringU5BU5D_t4* ___userIds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
 void GameCenterPlatform_Internal_ResetAllAchievements_m7919 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
 void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m7920 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
 void GameCenterPlatform_ResetAllAchievements_m7921 (Object_t * __this/* static, unused */, Action_1_t2462 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
 void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m7922 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
 void GameCenterPlatform_ShowLeaderboardUI_m7923 (Object_t * __this/* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
 void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m7924 (Object_t * __this/* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
 void GameCenterPlatform_ClearAchievementDescriptions_m7925 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
 void GameCenterPlatform_SetAchievementDescription_m7926 (Object_t * __this/* static, unused */, GcAchievementDescriptionData_t2481  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetAchievementDescriptionImage_m7927 (Object_t * __this/* static, unused */, Texture2D_t62 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
 void GameCenterPlatform_TriggerAchievementDescriptionCallback_m7928 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
 void GameCenterPlatform_AuthenticateCallbackWrapper_m7929 (Object_t * __this/* static, unused */, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
 void GameCenterPlatform_ClearFriends_m7930 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
 void GameCenterPlatform_SetFriends_m7931 (Object_t * __this/* static, unused */, GcUserProfileData_t2482  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetFriendImage_m7932 (Object_t * __this/* static, unused */, Texture2D_t62 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
 void GameCenterPlatform_TriggerFriendsCallbackWrapper_m7933 (Object_t * __this/* static, unused */, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
 void GameCenterPlatform_AchievementCallbackWrapper_m7934 (Object_t * __this/* static, unused */, GcAchievementDataU5BU5D_t2475* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
 void GameCenterPlatform_ProgressCallbackWrapper_m7935 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
 void GameCenterPlatform_ScoreCallbackWrapper_m7936 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
 void GameCenterPlatform_ScoreLoaderCallbackWrapper_m7937 (Object_t * __this/* static, unused */, GcScoreDataU5BU5D_t2477* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
 Object_t * GameCenterPlatform_get_localUser_m7938 (GameCenterPlatform_t2473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
 void GameCenterPlatform_PopulateLocalUser_m7939 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
 void GameCenterPlatform_LoadAchievementDescriptions_m7940 (GameCenterPlatform_t2473 * __this, Action_1_t2463 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
 void GameCenterPlatform_ReportProgress_m7941 (GameCenterPlatform_t2473 * __this, String_t* ___id, double ___progress, Action_1_t2462 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
 void GameCenterPlatform_LoadAchievements_m7942 (GameCenterPlatform_t2473 * __this, Action_1_t2464 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
 void GameCenterPlatform_ReportScore_m7943 (GameCenterPlatform_t2473 * __this, int64_t ___score, String_t* ___board, Action_1_t2462 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
 void GameCenterPlatform_LoadScores_m7944 (GameCenterPlatform_t2473 * __this, String_t* ___category, Action_1_t2465 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
 void GameCenterPlatform_LoadScores_m7945 (GameCenterPlatform_t2473 * __this, Object_t * ___board, Action_1_t2462 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
 void GameCenterPlatform_LeaderboardCallbackWrapper_m7946 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
 bool GameCenterPlatform_GetLoading_m7947 (GameCenterPlatform_t2473 * __this, Object_t * ___board, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
 bool GameCenterPlatform_VerifyAuthentication_m7948 (GameCenterPlatform_t2473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
 void GameCenterPlatform_ShowAchievementsUI_m7949 (GameCenterPlatform_t2473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
 void GameCenterPlatform_ShowLeaderboardUI_m7950 (GameCenterPlatform_t2473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
 void GameCenterPlatform_ClearUsers_m7951 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
 void GameCenterPlatform_SetUser_m7952 (Object_t * __this/* static, unused */, GcUserProfileData_t2482  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetUserImage_m7953 (Object_t * __this/* static, unused */, Texture2D_t62 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
 void GameCenterPlatform_TriggerUsersCallbackWrapper_m7954 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
 void GameCenterPlatform_LoadUsers_m7955 (GameCenterPlatform_t2473 * __this, StringU5BU5D_t4* ___userIds, Action_1_t2466 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SafeSetUserImage_m7956 (Object_t * __this/* static, unused */, UserProfileU5BU5D_t2469** ___array, Texture2D_t62 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
 void GameCenterPlatform_SafeClearArray_m7957 (Object_t * __this/* static, unused */, UserProfileU5BU5D_t2469** ___array, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
 Object_t * GameCenterPlatform_CreateLeaderboard_m7958 (GameCenterPlatform_t2473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
 Object_t * GameCenterPlatform_CreateAchievement_m7959 (GameCenterPlatform_t2473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
 void GameCenterPlatform_TriggerResetAchievementCallback_m7960 (Object_t * __this/* static, unused */, bool ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
