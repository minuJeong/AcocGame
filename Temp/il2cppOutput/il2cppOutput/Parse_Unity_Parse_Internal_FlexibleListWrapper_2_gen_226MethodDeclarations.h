﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>
struct FlexibleListWrapper_2_t1827;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.List`1<Parse.ParseGeoPoint>>
struct IList_1_t8226;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t2209;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m51021(__this, ___toWrap, method) (void)FlexibleListWrapper_2__ctor_m37787_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t*)___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m51022(__this, ___item, method) (int32_t)FlexibleListWrapper_2_IndexOf_m37788_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m51023(__this, ___index, ___item, method) (void)FlexibleListWrapper_2_Insert_m37789_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m51024(__this, ___index, method) (void)FlexibleListWrapper_2_RemoveAt_m37790_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m51025(__this, ___index, method) (Object_t *)FlexibleListWrapper_2_get_Item_m37791_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m51026(__this, ___index, ___value, method) (void)FlexibleListWrapper_2_set_Item_m37792_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m51027(__this, ___item, method) (void)FlexibleListWrapper_2_Add_m37793_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::Clear()
#define FlexibleListWrapper_2_Clear_m51028(__this, method) (void)FlexibleListWrapper_2_Clear_m37794_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m51029(__this, ___item, method) (bool)FlexibleListWrapper_2_Contains_m37795_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m51030(__this, ___array, ___arrayIndex, method) (void)FlexibleListWrapper_2_CopyTo_m37796_gshared((FlexibleListWrapper_2_t1600 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m51031(__this, method) (int32_t)FlexibleListWrapper_2_get_Count_m37797_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m51032(__this, method) (bool)FlexibleListWrapper_2_get_IsReadOnly_m37798_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m51033(__this, ___item, method) (bool)FlexibleListWrapper_2_Remove_m37799_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m51034(__this, method) (Object_t*)FlexibleListWrapper_2_GetEnumerator_m37800_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51035(__this, method) (Object_t *)FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m37801_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.List`1<Parse.ParseGeoPoint>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m51036(__this/* static, unused */, ___item, method) (Object_t *)FlexibleListWrapper_2_U3CCopyToU3Eb__0_m37802_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)