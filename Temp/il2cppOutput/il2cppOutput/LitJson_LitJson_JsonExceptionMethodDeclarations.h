#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonException
struct JsonException_t892;
// System.Exception
struct Exception_t107;
// System.String
struct String_t;
// LitJson.ParserToken
#include "LitJson_LitJson_ParserToken.h"

// System.Void LitJson.JsonException::.ctor()
 void JsonException__ctor_m4907 (JsonException_t892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken)
 void JsonException__ctor_m4908 (JsonException_t892 * __this, int32_t ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
 void JsonException__ctor_m4909 (JsonException_t892 * __this, int32_t ___token, Exception_t107 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
 void JsonException__ctor_m4910 (JsonException_t892 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32,System.Exception)
 void JsonException__ctor_m4911 (JsonException_t892 * __this, int32_t ___c, Exception_t107 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
 void JsonException__ctor_m4912 (JsonException_t892 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String,System.Exception)
 void JsonException__ctor_m4913 (JsonException_t892 * __this, String_t* ___message, Exception_t107 * ___inner_exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
