#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2479;
struct GcScoreData_t2479_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2594;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
 Score_t2594 * GcScoreData_ToScore_m8852 (GcScoreData_t2479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t2479_marshal(const GcScoreData_t2479& unmarshaled, GcScoreData_t2479_marshaled& marshaled);
void GcScoreData_t2479_marshal_back(const GcScoreData_t2479_marshaled& marshaled, GcScoreData_t2479& unmarshaled);
void GcScoreData_t2479_marshal_cleanup(GcScoreData_t2479_marshaled& marshaled);
