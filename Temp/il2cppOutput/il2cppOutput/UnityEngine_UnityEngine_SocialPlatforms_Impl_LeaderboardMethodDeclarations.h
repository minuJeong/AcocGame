#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t2483;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t2600;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t2601;
// System.String[]
struct StringU5BU5D_t4;
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
 void Leaderboard__ctor_m8895 (Leaderboard_t2483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
 String_t* Leaderboard_ToString_m8896 (Leaderboard_t2483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
 void Leaderboard_SetLocalUserScore_m8897 (Leaderboard_t2483 * __this, Object_t * ___score, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
 void Leaderboard_SetMaxRange_m8898 (Leaderboard_t2483 * __this, uint32_t ___maxRange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
 void Leaderboard_SetScores_m8899 (Leaderboard_t2483 * __this, IScoreU5BU5D_t2601* ___scores, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
 void Leaderboard_SetTitle_m8900 (Leaderboard_t2483 * __this, String_t* ___title, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
 StringU5BU5D_t4* Leaderboard_GetUserFilter_m8901 (Leaderboard_t2483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
 String_t* Leaderboard_get_id_m8902 (Leaderboard_t2483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
 void Leaderboard_set_id_m8903 (Leaderboard_t2483 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
 int32_t Leaderboard_get_userScope_m8904 (Leaderboard_t2483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
 void Leaderboard_set_userScope_m8905 (Leaderboard_t2483 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
 Range_t2602  Leaderboard_get_range_m8906 (Leaderboard_t2483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
 void Leaderboard_set_range_m8907 (Leaderboard_t2483 * __this, Range_t2602  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
 int32_t Leaderboard_get_timeScope_m8908 (Leaderboard_t2483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
 void Leaderboard_set_timeScope_m8909 (Leaderboard_t2483 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
