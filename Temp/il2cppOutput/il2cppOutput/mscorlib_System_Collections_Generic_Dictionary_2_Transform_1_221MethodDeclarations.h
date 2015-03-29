#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>
struct Transform_1_t8869;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseFile
struct ParseFile_t1113;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m57773 (Transform_1_t8869 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::Invoke(TKey,TValue)
 KeyValuePair_2_t8522  Transform_1_Invoke_m57774 (Transform_1_t8869 * __this, String_t* ___key, ParseFile_t1113 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m57775 (Transform_1_t8869 * __this, String_t* ___key, ParseFile_t1113 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t8522  Transform_1_EndInvoke_m57776 (Transform_1_t8869 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
