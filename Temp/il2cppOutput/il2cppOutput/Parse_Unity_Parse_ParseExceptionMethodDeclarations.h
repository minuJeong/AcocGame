#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseException
struct ParseException_t1109;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// Parse.ParseException/ErrorCode
#include "Parse_Unity_Parse_ParseException_ErrorCode.h"

// System.Void Parse.ParseException::.ctor(Parse.ParseException/ErrorCode,System.String,System.Exception)
 void ParseException__ctor_m5639 (ParseException_t1109 * __this, int32_t ___code, String_t* ___message, Exception_t107 * ___cause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseException/ErrorCode Parse.ParseException::get_Code()
 int32_t ParseException_get_Code_m5640 (ParseException_t1109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseException::set_Code(Parse.ParseException/ErrorCode)
 void ParseException_set_Code_m5641 (ParseException_t1109 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
