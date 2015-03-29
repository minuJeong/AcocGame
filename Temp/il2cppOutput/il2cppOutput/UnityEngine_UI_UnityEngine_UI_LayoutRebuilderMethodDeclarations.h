#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t741;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.RectTransform
struct RectTransform_t642;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t313;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t739;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t105;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
 void LayoutRebuilder__ctor_m3892 (LayoutRebuilder_t741 * __this, RectTransform_t642 * ___controller, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
 void LayoutRebuilder__cctor_m3893 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
 void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m3894 (LayoutRebuilder_t741 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
 void LayoutRebuilder_ReapplyDrivenProperties_m3895 (Object_t * __this/* static, unused */, RectTransform_t642 * ___driven, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
 Transform_t56 * LayoutRebuilder_get_transform_m3896 (LayoutRebuilder_t741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
 bool LayoutRebuilder_IsDestroyed_m3897 (LayoutRebuilder_t741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
 void LayoutRebuilder_StripDisabledBehavioursFromList_m3898 (Object_t * __this/* static, unused */, List_1_t313 * ___components, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
 void LayoutRebuilder_PerformLayoutControl_m3899 (LayoutRebuilder_t741 * __this, RectTransform_t642 * ___rect, UnityAction_1_t739 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
 void LayoutRebuilder_PerformLayoutCalculation_m3900 (LayoutRebuilder_t741 * __this, RectTransform_t642 * ___rect, UnityAction_1_t739 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
 void LayoutRebuilder_MarkLayoutForRebuild_m3901 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
 bool LayoutRebuilder_ValidLayoutGroup_m3902 (Object_t * __this/* static, unused */, RectTransform_t642 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
 bool LayoutRebuilder_ValidController_m3903 (Object_t * __this/* static, unused */, RectTransform_t642 * ___layoutRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
 void LayoutRebuilder_MarkLayoutRootForRebuild_m3904 (Object_t * __this/* static, unused */, RectTransform_t642 * ___controller, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
 bool LayoutRebuilder_Equals_m3905 (LayoutRebuilder_t741 * __this, LayoutRebuilder_t741  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
 int32_t LayoutRebuilder_GetHashCode_m3906 (LayoutRebuilder_t741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
 String_t* LayoutRebuilder_ToString_m3907 (LayoutRebuilder_t741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__9_m3908 (Object_t * __this/* static, unused */, Component_t105 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__A_m3909 (Object_t * __this/* static, unused */, Component_t105 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__B_m3910 (Object_t * __this/* static, unused */, Component_t105 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__C(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__C_m3911 (Object_t * __this/* static, unused */, Component_t105 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__D(UnityEngine.Component)
 bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m3912 (Object_t * __this/* static, unused */, Component_t105 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
