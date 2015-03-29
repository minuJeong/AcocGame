#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct FlexibleListWrapper_2_t1873;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct IList_1_t8751;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m56476(__this, ___toWrap, method) (void)FlexibleListWrapper_2__ctor_m37790_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t*)___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m56477(__this, ___item, method) (int32_t)FlexibleListWrapper_2_IndexOf_m37791_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m56478(__this, ___index, ___item, method) (void)FlexibleListWrapper_2_Insert_m37792_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m56479(__this, ___index, method) (void)FlexibleListWrapper_2_RemoveAt_m37793_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m56480(__this, ___index, method) (Object_t *)FlexibleListWrapper_2_get_Item_m37794_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m56481(__this, ___index, ___value, method) (void)FlexibleListWrapper_2_set_Item_m37795_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m56482(__this, ___item, method) (void)FlexibleListWrapper_2_Add_m37796_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Clear()
#define FlexibleListWrapper_2_Clear_m56483(__this, method) (void)FlexibleListWrapper_2_Clear_m37797_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m56484(__this, ___item, method) (bool)FlexibleListWrapper_2_Contains_m37798_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m56485(__this, ___array, ___arrayIndex, method) (void)FlexibleListWrapper_2_CopyTo_m37799_gshared((FlexibleListWrapper_2_t1600 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m56486(__this, method) (int32_t)FlexibleListWrapper_2_get_Count_m37800_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m56487(__this, method) (bool)FlexibleListWrapper_2_get_IsReadOnly_m37801_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m56488(__this, ___item, method) (bool)FlexibleListWrapper_2_Remove_m37802_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m56489(__this, method) (Object_t*)FlexibleListWrapper_2_GetEnumerator_m37803_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56490(__this, method) (Object_t *)FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m37804_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m56491(__this/* static, unused */, ___item, method) (Object_t *)FlexibleListWrapper_2_U3CCopyToU3Eb__0_m37805_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
