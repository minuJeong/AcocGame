#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AuthenticationValues
struct AuthenticationValues_t265;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void AuthenticationValues::.ctor()
 void AuthenticationValues__ctor_m1218 (AuthenticationValues_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object AuthenticationValues::get_AuthPostData()
 Object_t * AuthenticationValues_get_AuthPostData_m1219 (AuthenticationValues_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthPostData(System.Object)
 void AuthenticationValues_set_AuthPostData_m1220 (AuthenticationValues_t265 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.String)
 void AuthenticationValues_SetAuthPostData_m1221 (AuthenticationValues_t265 * __this, String_t* ___stringData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.Byte[])
 void AuthenticationValues_SetAuthPostData_m1222 (AuthenticationValues_t265 * __this, ByteU5BU5D_t21* ___byteData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthParameters(System.String,System.String)
 void AuthenticationValues_SetAuthParameters_m1223 (AuthenticationValues_t265 * __this, String_t* ___user, String_t* ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::ToString()
 String_t* AuthenticationValues_ToString_m1224 (AuthenticationValues_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
