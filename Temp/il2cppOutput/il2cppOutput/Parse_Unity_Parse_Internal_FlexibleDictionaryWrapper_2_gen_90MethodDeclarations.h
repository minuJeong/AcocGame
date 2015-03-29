#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>
struct FlexibleDictionaryWrapper_2_t1980;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t7386;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t9396;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t9050;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_63.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m63785 (FlexibleDictionaryWrapper_2_t1980 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m63786 (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m63787 (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m63788 (FlexibleDictionaryWrapper_2_t1980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m63789 (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m63790 (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, uint32_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m63791 (FlexibleDictionaryWrapper_2_t1980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Item(System.String)
 uint32_t FlexibleDictionaryWrapper_2_get_Item_m63792 (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m63793 (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m63794 (FlexibleDictionaryWrapper_2_t1980 * __this, KeyValuePair_2_t9047  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m63795 (FlexibleDictionaryWrapper_2_t1980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m63796 (FlexibleDictionaryWrapper_2_t1980 * __this, KeyValuePair_2_t9047  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m63797 (FlexibleDictionaryWrapper_2_t1980 * __this, KeyValuePair_2U5BU5D_t9396* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m63798 (FlexibleDictionaryWrapper_2_t1980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m63799 (FlexibleDictionaryWrapper_2_t1980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m63800 (FlexibleDictionaryWrapper_2_t1980 * __this, KeyValuePair_2_t9047  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m63801 (FlexibleDictionaryWrapper_2_t1980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m63802 (FlexibleDictionaryWrapper_2_t1980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<get_Values>b__0(TIn)
 uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m63803 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9047  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m63804 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
