#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t654;
// UnityEngine.Canvas
struct Canvas_t644;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t656;

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
 void GraphicRegistry__ctor_m3229 (GraphicRegistry_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
 void GraphicRegistry__cctor_m3230 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
 GraphicRegistry_t654 * GraphicRegistry_get_instance_m3231 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
 void GraphicRegistry_RegisterGraphicForCanvas_m3232 (Object_t * __this/* static, unused */, Canvas_t644 * ___c, Graphic_t648 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
 void GraphicRegistry_UnregisterGraphicForCanvas_m3233 (Object_t * __this/* static, unused */, Canvas_t644 * ___c, Graphic_t648 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
 Object_t* GraphicRegistry_GetGraphicsForCanvas_m3234 (Object_t * __this/* static, unused */, Canvas_t644 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
