#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.MiniJSON.Json/Serializer
struct Serializer_t868;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t255;
// System.Collections.IList
struct IList_t869;

// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
 void Serializer__ctor_m4670 (Serializer_t868 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Serializer::Serialize(System.Object)
 String_t* Serializer_Serialize_m4671 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
 void Serializer_SerializeValue_m4672 (Serializer_t868 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
 void Serializer_SerializeObject_m4673 (Serializer_t868 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
 void Serializer_SerializeArray_m4674 (Serializer_t868 * __this, Object_t * ___anArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
 void Serializer_SerializeString_m4675 (Serializer_t868 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
 void Serializer_SerializeOther_m4676 (Serializer_t868 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
