#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2477;
struct GcAchievementData_t2477_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2593;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
 Achievement_t2593 * GcAchievementData_ToAchievement_m8851 (GcAchievementData_t2477 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2477_marshal(const GcAchievementData_t2477& unmarshaled, GcAchievementData_t2477_marshaled& marshaled);
void GcAchievementData_t2477_marshal_back(const GcAchievementData_t2477_marshaled& marshaled, GcAchievementData_t2477& unmarshaled);
void GcAchievementData_t2477_marshal_cleanup(GcAchievementData_t2477_marshaled& marshaled);
