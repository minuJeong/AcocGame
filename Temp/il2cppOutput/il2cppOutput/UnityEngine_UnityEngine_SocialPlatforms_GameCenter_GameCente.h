#pragma once
#include <stdint.h>
// System.Action`1<System.Boolean>
struct Action_1_t2463;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t2464;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t2465;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t2466;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t2467;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t2468;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2470;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t2472;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t2473;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t2474  : public Object_t
{
};
struct GameCenterPlatform_t2474_StaticFields{
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_1_t2463 * ___s_AuthenticateCallback;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_FriendsCallback
	Action_1_t2463 * ___s_FriendsCallback;
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AchievementDescriptionLoaderCallback
	Action_1_t2464 * ___s_AchievementDescriptionLoaderCallback;
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AchievementLoaderCallback
	Action_1_t2465 * ___s_AchievementLoaderCallback;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ProgressCallback
	Action_1_t2463 * ___s_ProgressCallback;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ScoreCallback
	Action_1_t2463 * ___s_ScoreCallback;
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ScoreLoaderCallback
	Action_1_t2466 * ___s_ScoreLoaderCallback;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_LeaderboardCallback
	Action_1_t2463 * ___s_LeaderboardCallback;
	// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_UsersCallback
	Action_1_t2467 * ___s_UsersCallback;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t2468* ___s_adCache;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t2470* ___s_friends;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t2470* ___s_users;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t2463 * ___s_ResetAchievements;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t2472 * ___m_LocalUser;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t2473 * ___m_GcBoards;
};
