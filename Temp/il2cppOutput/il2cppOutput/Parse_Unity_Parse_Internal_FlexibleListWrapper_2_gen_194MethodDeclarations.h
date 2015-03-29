#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>
struct FlexibleListWrapper_2_t1795;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<System.Object>>
struct IList_1_t7875;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1031;

// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::.ctor(System.Collections.Generic.IList`1<TIn>)
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"
#define FlexibleListWrapper_2__ctor_m47360(__this, ___toWrap, method) (void)FlexibleListWrapper_2__ctor_m37790_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t*)___toWrap, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::IndexOf(TOut)
#define FlexibleListWrapper_2_IndexOf_m47361(__this, ___item, method) (int32_t)FlexibleListWrapper_2_IndexOf_m37791_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::Insert(System.Int32,TOut)
#define FlexibleListWrapper_2_Insert_m47362(__this, ___index, ___item, method) (void)FlexibleListWrapper_2_Insert_m37792_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::RemoveAt(System.Int32)
#define FlexibleListWrapper_2_RemoveAt_m47363(__this, ___index, method) (void)FlexibleListWrapper_2_RemoveAt_m37793_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::get_Item(System.Int32)
#define FlexibleListWrapper_2_get_Item_m47364(__this, ___index, method) (Object_t *)FlexibleListWrapper_2_get_Item_m37794_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::set_Item(System.Int32,TOut)
#define FlexibleListWrapper_2_set_Item_m47365(__this, ___index, ___value, method) (void)FlexibleListWrapper_2_set_Item_m37795_gshared((FlexibleListWrapper_2_t1600 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::Add(TOut)
#define FlexibleListWrapper_2_Add_m47366(__this, ___item, method) (void)FlexibleListWrapper_2_Add_m37796_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::Clear()
#define FlexibleListWrapper_2_Clear_m47367(__this, method) (void)FlexibleListWrapper_2_Clear_m37797_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::Contains(TOut)
#define FlexibleListWrapper_2_Contains_m47368(__this, ___item, method) (bool)FlexibleListWrapper_2_Contains_m37798_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::CopyTo(TOut[],System.Int32)
#define FlexibleListWrapper_2_CopyTo_m47369(__this, ___array, ___arrayIndex, method) (void)FlexibleListWrapper_2_CopyTo_m37799_gshared((FlexibleListWrapper_2_t1600 *)__this, (ObjectU5BU5D_t5*)___array, (int32_t)___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::get_Count()
#define FlexibleListWrapper_2_get_Count_m47370(__this, method) (int32_t)FlexibleListWrapper_2_get_Count_m37800_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::get_IsReadOnly()
#define FlexibleListWrapper_2_get_IsReadOnly_m47371(__this, method) (bool)FlexibleListWrapper_2_get_IsReadOnly_m37801_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::Remove(TOut)
#define FlexibleListWrapper_2_Remove_m47372(__this, ___item, method) (bool)FlexibleListWrapper_2_Remove_m37802_gshared((FlexibleListWrapper_2_t1600 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::GetEnumerator()
#define FlexibleListWrapper_2_GetEnumerator_m47373(__this, method) (Object_t*)FlexibleListWrapper_2_GetEnumerator_m37803_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47374(__this, method) (Object_t *)FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m37804_gshared((FlexibleListWrapper_2_t1600 *)__this, method)
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Collections.Generic.IList`1<System.Object>>::<CopyTo>b__0(TIn)
#define FlexibleListWrapper_2_U3CCopyToU3Eb__0_m47375(__this/* static, unused */, ___item, method) (Object_t *)FlexibleListWrapper_2_U3CCopyToU3Eb__0_m37805_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
