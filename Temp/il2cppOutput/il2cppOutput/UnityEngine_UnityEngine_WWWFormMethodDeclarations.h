#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t153;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1422;

// System.Void UnityEngine.WWWForm::.ctor()
 void WWWForm__ctor_m4690 (WWWForm_t153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
 void WWWForm_AddField_m4691 (WWWForm_t153 * __this, String_t* ___fieldName, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
 void WWWForm_AddField_m8503 (WWWForm_t153 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t1422 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
 Dictionary_2_t123 * WWWForm_get_headers_m8504 (WWWForm_t153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
 ByteU5BU5D_t21* WWWForm_get_data_m8505 (WWWForm_t153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
