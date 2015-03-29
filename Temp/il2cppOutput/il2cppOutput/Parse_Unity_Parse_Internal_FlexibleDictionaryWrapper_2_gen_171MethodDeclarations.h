#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>
struct FlexibleDictionaryWrapper_2_t2061;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t7686;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8772;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t8773;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
 void FlexibleDictionaryWrapper_2__ctor_m67862 (FlexibleDictionaryWrapper_2_t2061 * __this, Object_t* ___toWrap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.String,TOut)
 void FlexibleDictionaryWrapper_2_Add_m67863 (FlexibleDictionaryWrapper_2_t2061 * __this, String_t* ___key, DateTime_t126  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::ContainsKey(System.String)
 bool FlexibleDictionaryWrapper_2_ContainsKey_m67864 (FlexibleDictionaryWrapper_2_t2061 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Keys()
 Object_t* FlexibleDictionaryWrapper_2_get_Keys_m67865 (FlexibleDictionaryWrapper_2_t2061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.String)
 bool FlexibleDictionaryWrapper_2_Remove_m67866 (FlexibleDictionaryWrapper_2_t2061 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::TryGetValue(System.String,TOut&)
 bool FlexibleDictionaryWrapper_2_TryGetValue_m67867 (FlexibleDictionaryWrapper_2_t2061 * __this, String_t* ___key, DateTime_t126 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Values()
 Object_t* FlexibleDictionaryWrapper_2_get_Values_m67868 (FlexibleDictionaryWrapper_2_t2061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Item(System.String)
 DateTime_t126  FlexibleDictionaryWrapper_2_get_Item_m67869 (FlexibleDictionaryWrapper_2_t2061 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::set_Item(System.String,TOut)
 void FlexibleDictionaryWrapper_2_set_Item_m67870 (FlexibleDictionaryWrapper_2_t2061 * __this, String_t* ___key, DateTime_t126  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 void FlexibleDictionaryWrapper_2_Add_m67871 (FlexibleDictionaryWrapper_2_t2061 * __this, KeyValuePair_2_t8452  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Clear()
 void FlexibleDictionaryWrapper_2_Clear_m67872 (FlexibleDictionaryWrapper_2_t2061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Contains_m67873 (FlexibleDictionaryWrapper_2_t2061 * __this, KeyValuePair_2_t8452  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
 void FlexibleDictionaryWrapper_2_CopyTo_m67874 (FlexibleDictionaryWrapper_2_t2061 * __this, KeyValuePair_2U5BU5D_t8772* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Count()
 int32_t FlexibleDictionaryWrapper_2_get_Count_m67875 (FlexibleDictionaryWrapper_2_t2061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_IsReadOnly()
 bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m67876 (FlexibleDictionaryWrapper_2_t2061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
 bool FlexibleDictionaryWrapper_2_Remove_m67877 (FlexibleDictionaryWrapper_2_t2061 * __this, KeyValuePair_2_t8452  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::GetEnumerator()
 Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m67878 (FlexibleDictionaryWrapper_2_t2061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m67879 (FlexibleDictionaryWrapper_2_t2061 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<get_Values>b__0(TIn)
 DateTime_t126  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m67880 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
 KeyValuePair_2_t8452  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m67881 (Object_t * __this/* static, unused */, KeyValuePair_2_t410  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
