#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>
struct FlexibleDictionaryWrapper_2_t1892;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t9017;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t434;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1173;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m59351 (FlexibleDictionaryWrapper_2_t1892 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m59352 (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m59353 (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59354 (FlexibleDictionaryWrapper_2_t1892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m59355 (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m59356 (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m59357 (FlexibleDictionaryWrapper_2_t1892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Item(System.String)
 Object_t * FlexibleDictionaryWrapper_2_get_Item_m59358 (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m59359 (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m59360 (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m59361 (FlexibleDictionaryWrapper_2_t1892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m59362 (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m59363 (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2U5BU5D_t434* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m59364 (FlexibleDictionaryWrapper_2_t1892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59365 (FlexibleDictionaryWrapper_2_t1892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m59366 (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59367 (FlexibleDictionaryWrapper_2_t1892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59368 (FlexibleDictionaryWrapper_2_t1892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<get_Values>b__0(TIn)
 Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59369 (Object_t * __this/* static, unused */, int8_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t410  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59370 (Object_t * __this/* static, unused */, KeyValuePair_2_t9019  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
