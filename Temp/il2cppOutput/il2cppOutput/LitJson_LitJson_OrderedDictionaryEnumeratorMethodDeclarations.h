#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t891;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t890;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
 void OrderedDictionaryEnumerator__ctor_m4902 (OrderedDictionaryEnumerator_t891 * __this, Object_t* ___enumerator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
 Object_t * OrderedDictionaryEnumerator_get_Current_m4903 (OrderedDictionaryEnumerator_t891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
 DictionaryEntry_t96  OrderedDictionaryEnumerator_get_Entry_m4904 (OrderedDictionaryEnumerator_t891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
 Object_t * OrderedDictionaryEnumerator_get_Key_m4905 (OrderedDictionaryEnumerator_t891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
 Object_t * OrderedDictionaryEnumerator_get_Value_m4906 (OrderedDictionaryEnumerator_t891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
 bool OrderedDictionaryEnumerator_MoveNext_m4907 (OrderedDictionaryEnumerator_t891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
 void OrderedDictionaryEnumerator_Reset_m4908 (OrderedDictionaryEnumerator_t891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
