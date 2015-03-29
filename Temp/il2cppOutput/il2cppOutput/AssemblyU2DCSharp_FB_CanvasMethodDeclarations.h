#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB/Canvas
struct Canvas_t142;
// System.String
struct String_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// FBScreen/Layout[]
struct LayoutU5BU5D_t143;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void FB/Canvas::.ctor()
 void Canvas__ctor_m739 (Canvas_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
 void Canvas_Pay_m740 (Object_t * __this/* static, unused */, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t124  ___quantityMin, Nullable_1_t124  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t115 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/Canvas::SetResolution(System.Int32,System.Int32,System.Boolean,System.Int32,FBScreen/Layout[])
 void Canvas_SetResolution_m741 (Object_t * __this/* static, unused */, int32_t ___width, int32_t ___height, bool ___fullscreen, int32_t ___preferredRefreshRate, LayoutU5BU5D_t143* ___layoutParams, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/Canvas::SetAspectRatio(System.Int32,System.Int32,FBScreen/Layout[])
 void Canvas_SetAspectRatio_m742 (Object_t * __this/* static, unused */, int32_t ___width, int32_t ___height, LayoutU5BU5D_t143* ___layoutParams, MethodInfo* method) IL2CPP_METHOD_ATTR;
