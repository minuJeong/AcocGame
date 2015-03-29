#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2478;
struct GcScoreData_t2478_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2593;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
 Score_t2593 * GcScoreData_ToScore_m8849 (GcScoreData_t2478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2478_marshal(const GcScoreData_t2478& unmarshaled, GcScoreData_t2478_marshaled& marshaled);
void GcScoreData_t2478_marshal_back(const GcScoreData_t2478_marshaled& marshaled, GcScoreData_t2478& unmarshaled);
void GcScoreData_t2478_marshal_cleanup(GcScoreData_t2478_marshaled& marshaled);
