#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2476;
struct GcAchievementData_t2476_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2592;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
 Achievement_t2592 * GcAchievementData_ToAchievement_m8848 (GcAchievementData_t2476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2476_marshal(const GcAchievementData_t2476& unmarshaled, GcAchievementData_t2476_marshaled& marshaled);
void GcAchievementData_t2476_marshal_back(const GcAchievementData_t2476_marshaled& marshaled, GcAchievementData_t2476& unmarshaled);
void GcAchievementData_t2476_marshal_cleanup(GcAchievementData_t2476_marshaled& marshaled);
