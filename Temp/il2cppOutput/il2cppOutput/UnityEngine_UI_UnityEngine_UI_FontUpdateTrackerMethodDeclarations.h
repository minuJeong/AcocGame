#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontUpdateTracker
struct FontUpdateTracker_t640;
// UnityEngine.UI.Text
struct Text_t532;
// UnityEngine.Font
struct Font_t373;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
 void FontUpdateTracker__cctor_m3164 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
 void FontUpdateTracker_TrackText_m3165 (Object_t * __this/* static, unused */, Text_t532 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
 void FontUpdateTracker_RebuildForFont_m3166 (Object_t * __this/* static, unused */, Font_t373 * ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
 void FontUpdateTracker_UntrackText_m3167 (Object_t * __this/* static, unused */, Text_t532 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
