#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t734;
// UnityEngine.RectOffset
struct RectOffset_t422;
// UnityEngine.RectTransform
struct RectTransform_t642;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t738;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
 void LayoutGroup__ctor_m3862 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
 RectOffset_t422 * LayoutGroup_get_padding_m3863 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
 void LayoutGroup_set_padding_m3864 (LayoutGroup_t734 * __this, RectOffset_t422 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
 int32_t LayoutGroup_get_childAlignment_m3865 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
 void LayoutGroup_set_childAlignment_m3866 (LayoutGroup_t734 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
 RectTransform_t642 * LayoutGroup_get_rectTransform_m3867 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
 List_1_t738 * LayoutGroup_get_rectChildren_m3868 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
 void LayoutGroup_CalculateLayoutInputHorizontal_m3869 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputVertical()
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
 float LayoutGroup_get_minWidth_m3870 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
 float LayoutGroup_get_preferredWidth_m3871 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
 float LayoutGroup_get_flexibleWidth_m3872 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
 float LayoutGroup_get_minHeight_m3873 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
 float LayoutGroup_get_preferredHeight_m3874 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
 float LayoutGroup_get_flexibleHeight_m3875 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
 int32_t LayoutGroup_get_layoutPriority_m3876 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutHorizontal()
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutVertical()
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
 void LayoutGroup_OnEnable_m3877 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
 void LayoutGroup_OnDisable_m3878 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
 void LayoutGroup_OnDidApplyAnimationProperties_m3879 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
 float LayoutGroup_GetTotalMinSize_m3880 (LayoutGroup_t734 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
 float LayoutGroup_GetTotalPreferredSize_m3881 (LayoutGroup_t734 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
 float LayoutGroup_GetTotalFlexibleSize_m3882 (LayoutGroup_t734 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
 float LayoutGroup_GetStartOffset_m3883 (LayoutGroup_t734 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
 void LayoutGroup_SetLayoutInputForAxis_m3884 (LayoutGroup_t734 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
 void LayoutGroup_SetChildAlongAxis_m3885 (LayoutGroup_t734 * __this, RectTransform_t642 * ___rect, int32_t ___axis, float ___pos, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
 bool LayoutGroup_get_isRootLayoutGroup_m3886 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
 void LayoutGroup_OnRectTransformDimensionsChange_m3887 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
 void LayoutGroup_OnTransformChildrenChanged_m3888 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
 void LayoutGroup_SetDirty_m3889 (LayoutGroup_t734 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
