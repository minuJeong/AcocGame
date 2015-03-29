﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t797;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t5482;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5480;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5484;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t652;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m4260(__this, method) (void)IndexedSet_1__ctor_m24321_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m25710(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m24323_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m4259(__this, ___item, method) (void)IndexedSet_1_Add_m24324_gshared((IndexedSet_1_t5347 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m4262(__this, ___item, method) (bool)IndexedSet_1_Remove_m24325_gshared((IndexedSet_1_t5347 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m25711(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m24327_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m25712(__this, method) (void)IndexedSet_1_Clear_m24328_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m25713(__this, ___item, method) (bool)IndexedSet_1_Contains_m24330_gshared((IndexedSet_1_t5347 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m25714(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m24332_gshared((IndexedSet_1_t5347 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m25715(__this, method) (int32_t)IndexedSet_1_get_Count_m24333_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m25716(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m24335_gshared((IndexedSet_1_t5347 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m25717(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m24337_gshared((IndexedSet_1_t5347 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m25718(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m24339_gshared((IndexedSet_1_t5347 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m25719(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m24341_gshared((IndexedSet_1_t5347 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m25720(__this, ___index, method) (Graphic_t648 *)IndexedSet_1_get_Item_m24342_gshared((IndexedSet_1_t5347 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m25721(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m24344_gshared((IndexedSet_1_t5347 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m25722(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m24345_gshared((IndexedSet_1_t5347 *)__this, (Predicate_1_t4051 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m25723(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m24346_gshared((IndexedSet_1_t5347 *)__this, (Comparison_1_t4052 *)___sortLayoutFunction, method)
