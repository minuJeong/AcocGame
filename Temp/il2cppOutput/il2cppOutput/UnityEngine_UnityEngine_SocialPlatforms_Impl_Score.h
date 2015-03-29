#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2593  : public Object_t
{
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t126  ___m_Date;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField;
};
