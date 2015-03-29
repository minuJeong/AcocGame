#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.PlatformHooks/SettingsWrapper
struct SettingsWrapper_t1208;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t931;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1088;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t434;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1173;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// Parse.PlatformHooks/SettingsWrapper Parse.PlatformHooks/SettingsWrapper::get_Wrapper()
 SettingsWrapper_t1208 * SettingsWrapper_get_Wrapper_m5950 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::.ctor()
 void SettingsWrapper__ctor_m5951 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks/SettingsWrapper::Load()
 String_t* SettingsWrapper_Load_m5952 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Save()
 void SettingsWrapper_Save_m5953 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Add(System.String,System.Object)
 void SettingsWrapper_Add_m5954 (SettingsWrapper_t1208 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::ContainsKey(System.String)
 bool SettingsWrapper_ContainsKey_m5955 (SettingsWrapper_t1208 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.PlatformHooks/SettingsWrapper::get_Keys()
 Object_t* SettingsWrapper_get_Keys_m5956 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Remove(System.String)
 bool SettingsWrapper_Remove_m5957 (SettingsWrapper_t1208 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::TryGetValue(System.String,System.Object&)
 bool SettingsWrapper_TryGetValue_m5958 (SettingsWrapper_t1208 * __this, String_t* ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> Parse.PlatformHooks/SettingsWrapper::get_Values()
 Object_t* SettingsWrapper_get_Values_m5959 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.PlatformHooks/SettingsWrapper::get_Item(System.String)
 Object_t * SettingsWrapper_get_Item_m5960 (SettingsWrapper_t1208 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::set_Item(System.String,System.Object)
 void SettingsWrapper_set_Item_m5961 (SettingsWrapper_t1208 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 void SettingsWrapper_Add_m5962 (SettingsWrapper_t1208 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Clear()
 void SettingsWrapper_Clear_m5963 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 bool SettingsWrapper_Contains_m5964 (SettingsWrapper_t1208 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
 void SettingsWrapper_CopyTo_m5965 (SettingsWrapper_t1208 * __this, KeyValuePair_2U5BU5D_t434* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.PlatformHooks/SettingsWrapper::get_Count()
 int32_t SettingsWrapper_get_Count_m5966 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::get_IsReadOnly()
 bool SettingsWrapper_get_IsReadOnly_m5967 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
 bool SettingsWrapper_Remove_m5968 (SettingsWrapper_t1208 * __this, KeyValuePair_2_t410  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.PlatformHooks/SettingsWrapper::GetEnumerator()
 Object_t* SettingsWrapper_GetEnumerator_m5969 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.PlatformHooks/SettingsWrapper::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SettingsWrapper_System_Collections_IEnumerable_GetEnumerator_m5970 (SettingsWrapper_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
