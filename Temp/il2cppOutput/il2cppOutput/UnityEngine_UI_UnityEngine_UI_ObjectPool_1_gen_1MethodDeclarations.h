#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t748;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t749;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t751;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4580(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m22973_gshared((ObjectPool_1_t5182 *)__this, (UnityAction_1_t4183 *)___actionOnGet, (UnityAction_1_t4183 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m27346(__this, method) (int32_t)ObjectPool_1_get_countAll_m22975_gshared((ObjectPool_1_t5182 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m27347(__this, ___value, method) (void)ObjectPool_1_set_countAll_m22977_gshared((ObjectPool_1_t5182 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m27348(__this, method) (int32_t)ObjectPool_1_get_countActive_m22979_gshared((ObjectPool_1_t5182 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m27349(__this, method) (int32_t)ObjectPool_1_get_countInactive_m22981_gshared((ObjectPool_1_t5182 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m4581(__this, method) (List_1_t751 *)ObjectPool_1_Get_m22983_gshared((ObjectPool_1_t5182 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m4582(__this, ___element, method) (void)ObjectPool_1_Release_m22985_gshared((ObjectPool_1_t5182 *)__this, (Object_t *)___element, method)
