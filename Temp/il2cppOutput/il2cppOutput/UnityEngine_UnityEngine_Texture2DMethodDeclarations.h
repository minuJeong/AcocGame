#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture2D
struct Texture2D_t62;
// UnityEngine.Color[]
struct ColorU5BU5D_t93;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
 void Texture2D__ctor_m8001 (Texture2D_t62 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
 void Texture2D__ctor_m593 (Texture2D_t62 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
 void Texture2D_Internal_Create_m8002 (Object_t * __this/* static, unused */, Texture2D_t62 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t39 ___nativeTex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
 Texture2D_t62 * Texture2D_get_whiteTexture_m4207 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
 Color_t30  Texture2D_GetPixelBilinear_m4296 (Texture2D_t62 * __this, float ___u, float ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
 void Texture2D_SetPixels_m594 (Texture2D_t62 * __this, ColorU5BU5D_t93* ___colors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
 void Texture2D_SetPixels_m8003 (Texture2D_t62 * __this, ColorU5BU5D_t93* ___colors, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
 void Texture2D_SetPixels_m8004 (Texture2D_t62 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, ColorU5BU5D_t93* ___colors, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
 void Texture2D_Apply_m8005 (Texture2D_t62 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
 void Texture2D_Apply_m595 (Texture2D_t62 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
