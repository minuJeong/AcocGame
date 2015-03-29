#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Shadow
struct Shadow_t758;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t649;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
 void Shadow__ctor_m3964 (Shadow_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
 Color_t30  Shadow_get_effectColor_m3965 (Shadow_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
 void Shadow_set_effectColor_m3966 (Shadow_t758 * __this, Color_t30  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
 Vector2_t51  Shadow_get_effectDistance_m3967 (Shadow_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
 void Shadow_set_effectDistance_m3968 (Shadow_t758 * __this, Vector2_t51  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
 bool Shadow_get_useGraphicAlpha_m3969 (Shadow_t758 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
 void Shadow_set_useGraphicAlpha_m3970 (Shadow_t758 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
 void Shadow_ApplyShadow_m3971 (Shadow_t758 * __this, List_1_t649 * ___verts, Color32_t760  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Shadow_ModifyVertices_m3972 (Shadow_t758 * __this, List_1_t649 * ___verts, MethodInfo* method) IL2CPP_METHOD_ATTR;
