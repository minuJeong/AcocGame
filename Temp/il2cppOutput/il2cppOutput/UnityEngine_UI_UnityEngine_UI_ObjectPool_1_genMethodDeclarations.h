#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t577;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t579;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t599;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4047(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m22970_gshared((ObjectPool_1_t5181 *)__this, (UnityAction_1_t4182 *)___actionOnGet, (UnityAction_1_t4182 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m22971(__this, method) (int32_t)ObjectPool_1_get_countAll_m22972_gshared((ObjectPool_1_t5181 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m22973(__this, ___value, method) (void)ObjectPool_1_set_countAll_m22974_gshared((ObjectPool_1_t5181 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m22975(__this, method) (int32_t)ObjectPool_1_get_countActive_m22976_gshared((ObjectPool_1_t5181 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m22977(__this, method) (int32_t)ObjectPool_1_get_countInactive_m22978_gshared((ObjectPool_1_t5181 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m22979(__this, method) (List_1_t599 *)ObjectPool_1_Get_m22980_gshared((ObjectPool_1_t5181 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m22981(__this, ___element, method) (void)ObjectPool_1_Release_m22982_gshared((ObjectPool_1_t5181 *)__this, (Object_t *)___element, method)
