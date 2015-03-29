#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutUtility
struct LayoutUtility_t743;
// UnityEngine.RectTransform
struct RectTransform_t642;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t742;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t744;

// System.Single UnityEngine.UI.LayoutUtility::GetMinSize(UnityEngine.RectTransform,System.Int32)
 float LayoutUtility_GetMinSize_m3913 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredSize(UnityEngine.RectTransform,System.Int32)
 float LayoutUtility_GetPreferredSize_m3914 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleSize(UnityEngine.RectTransform,System.Int32)
 float LayoutUtility_GetFlexibleSize_m3915 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinWidth(UnityEngine.RectTransform)
 float LayoutUtility_GetMinWidth_m3916 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredWidth(UnityEngine.RectTransform)
 float LayoutUtility_GetPreferredWidth_m3917 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleWidth(UnityEngine.RectTransform)
 float LayoutUtility_GetFlexibleWidth_m3918 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinHeight(UnityEngine.RectTransform)
 float LayoutUtility_GetMinHeight_m3919 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredHeight(UnityEngine.RectTransform)
 float LayoutUtility_GetPreferredHeight_m3920 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleHeight(UnityEngine.RectTransform)
 float LayoutUtility_GetFlexibleHeight_m3921 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single)
 float LayoutUtility_GetLayoutProperty_m3922 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, Func_2_t742 * ___property, float ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single,UnityEngine.UI.ILayoutElement&)
 float LayoutUtility_GetLayoutProperty_m3923 (Object_t * __this/* static, unused */, RectTransform_t642 * ___rect, Func_2_t742 * ___property, float ___defaultValue, Object_t ** ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinWidth>m__E(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetMinWidthU3Em__E_m3924 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__F(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetPreferredWidthU3Em__F_m3925 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__10(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetPreferredWidthU3Em__10_m3926 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleWidth>m__11(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetFlexibleWidthU3Em__11_m3927 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinHeight>m__12(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetMinHeightU3Em__12_m3928 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__13(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetPreferredHeightU3Em__13_m3929 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__14(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetPreferredHeightU3Em__14_m3930 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleHeight>m__15(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetFlexibleHeightU3Em__15_m3931 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
