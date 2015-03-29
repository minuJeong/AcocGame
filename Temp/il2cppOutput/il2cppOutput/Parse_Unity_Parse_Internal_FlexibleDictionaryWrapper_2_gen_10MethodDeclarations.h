#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>
struct FlexibleDictionaryWrapper_2_t1900;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t2216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t434;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1173;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m59747 (FlexibleDictionaryWrapper_2_t1900 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m59748 (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m59749 (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59750 (FlexibleDictionaryWrapper_2_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m59751 (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m59752 (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m59753 (FlexibleDictionaryWrapper_2_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Item(System.String)
 Object_t * FlexibleDictionaryWrapper_2_get_Item_m59754 (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m59755 (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m59756 (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m59757 (FlexibleDictionaryWrapper_2_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m59758 (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m59759 (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2U5BU5D_t434* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m59760 (FlexibleDictionaryWrapper_2_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59761 (FlexibleDictionaryWrapper_2_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m59762 (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59763 (FlexibleDictionaryWrapper_2_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59764 (FlexibleDictionaryWrapper_2_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<get_Values>b__0(TIn)
 Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59765 (Object_t * __this/* static, unused */, double ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t410  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59766 (Object_t * __this/* static, unused */, KeyValuePair_2_t8406  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
