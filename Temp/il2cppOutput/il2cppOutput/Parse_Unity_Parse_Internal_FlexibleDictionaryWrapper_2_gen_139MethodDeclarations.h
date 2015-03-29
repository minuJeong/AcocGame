#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>
struct FlexibleDictionaryWrapper_2_t2029;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t7536;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t9070;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>[]
struct KeyValuePair_2U5BU5D_t9553;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>
struct IEnumerator_1_t9075;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m66311 (FlexibleDictionaryWrapper_2_t2029 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m66312 (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m66313 (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m66314 (FlexibleDictionaryWrapper_2_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m66315 (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m66316 (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, uint16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m66317 (FlexibleDictionaryWrapper_2_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::get_Item(System.String)
 uint16_t FlexibleDictionaryWrapper_2_get_Item_m66318 (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m66319 (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m66320 (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t9072  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m66321 (FlexibleDictionaryWrapper_2_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m66322 (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t9072  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m66323 (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2U5BU5D_t9553* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m66324 (FlexibleDictionaryWrapper_2_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m66325 (FlexibleDictionaryWrapper_2_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m66326 (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t9072  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m66327 (FlexibleDictionaryWrapper_2_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m66328 (FlexibleDictionaryWrapper_2_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::<get_Values>b__0(TIn)
 uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m66329 (Object_t * __this/* static, unused */, uint16_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Char>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t9072  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m66330 (Object_t * __this/* static, unused */, KeyValuePair_2_t9072  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
