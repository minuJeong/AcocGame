#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>
struct FlexibleDictionaryWrapper_2_t1910;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t6476;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t9053;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t6506;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t6507;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_64.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m60290 (FlexibleDictionaryWrapper_2_t1910 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m60291 (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m60292 (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60293 (FlexibleDictionaryWrapper_2_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m60294 (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m60295 (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, bool* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m60296 (FlexibleDictionaryWrapper_2_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::get_Item(System.String)
 bool FlexibleDictionaryWrapper_2_get_Item_m60297 (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m60298 (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m60299 (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m60300 (FlexibleDictionaryWrapper_2_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m60301 (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m60302 (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2U5BU5D_t6506* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m60303 (FlexibleDictionaryWrapper_2_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60304 (FlexibleDictionaryWrapper_2_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m60305 (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t6464  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60306 (FlexibleDictionaryWrapper_2_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60307 (FlexibleDictionaryWrapper_2_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::<get_Values>b__0(TIn)
 bool FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60308 (Object_t * __this/* static, unused */, int64_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t6464  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60309 (Object_t * __this/* static, unused */, KeyValuePair_2_t9055  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
