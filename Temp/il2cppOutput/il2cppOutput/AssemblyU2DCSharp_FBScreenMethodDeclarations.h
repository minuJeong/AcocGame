#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBScreen
struct FBScreen_t159;
// FBScreen/Layout[]
struct LayoutU5BU5D_t143;
// System.String
struct String_t;
// FBScreen/Layout/OptionLeft
struct OptionLeft_t155;
// FBScreen/Layout/OptionTop
struct OptionTop_t156;
// FBScreen/Layout/OptionCenterHorizontal
struct OptionCenterHorizontal_t157;
// FBScreen/Layout/OptionCenterVertical
struct OptionCenterVertical_t158;
// System.Collections.Generic.IEnumerable`1<FBScreen/Layout>
struct IEnumerable_1_t160;

// System.Void FBScreen::.ctor()
 void FBScreen__ctor_m799 (FBScreen_t159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::.cctor()
 void FBScreen__cctor_m800 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBScreen::get_FullScreen()
 bool FBScreen_get_FullScreen_m801 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::set_FullScreen(System.Boolean)
 void FBScreen_set_FullScreen_m802 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBScreen::get_Resizable()
 bool FBScreen_get_Resizable_m803 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBScreen::get_Width()
 int32_t FBScreen_get_Width_m804 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBScreen::get_Height()
 int32_t FBScreen_get_Height_m805 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::SetResolution(System.Int32,System.Int32,System.Boolean,System.Int32,FBScreen/Layout[])
 void FBScreen_SetResolution_m806 (Object_t * __this/* static, unused */, int32_t ___width, int32_t ___height, bool ___fullscreen, int32_t ___preferredRefreshRate, LayoutU5BU5D_t143* ___layoutParams, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::SetAspectRatio(System.Int32,System.Int32,FBScreen/Layout[])
 void FBScreen_SetAspectRatio_m807 (Object_t * __this/* static, unused */, int32_t ___width, int32_t ___height, LayoutU5BU5D_t143* ___layoutParams, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::SetUnityPlayerEmbedCSS(System.String,System.String)
 void FBScreen_SetUnityPlayerEmbedCSS_m808 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScreen/Layout/OptionLeft FBScreen::Left(System.Single)
 OptionLeft_t155 * FBScreen_Left_m809 (Object_t * __this/* static, unused */, float ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScreen/Layout/OptionTop FBScreen::Top(System.Single)
 OptionTop_t156 * FBScreen_Top_m810 (Object_t * __this/* static, unused */, float ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScreen/Layout/OptionCenterHorizontal FBScreen::CenterHorizontal()
 OptionCenterHorizontal_t157 * FBScreen_CenterHorizontal_m811 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScreen/Layout/OptionCenterVertical FBScreen::CenterVertical()
 OptionCenterVertical_t158 * FBScreen_CenterVertical_m812 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::SetLayout(System.Collections.Generic.IEnumerable`1<FBScreen/Layout>)
 void FBScreen_SetLayout_m813 (Object_t * __this/* static, unused */, Object_t* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
