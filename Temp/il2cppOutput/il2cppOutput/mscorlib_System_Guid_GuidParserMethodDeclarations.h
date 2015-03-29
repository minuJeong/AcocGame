#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Guid/GuidParser
struct GuidParser_t3712;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid/GuidParser::.ctor(System.String)
 void GuidParser__ctor_m14409 (GuidParser_t3712 * __this, String_t* ___src, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::Reset()
 void GuidParser_Reset_m14410 (GuidParser_t3712 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::AtEnd()
 bool GuidParser_AtEnd_m14411 (GuidParser_t3712 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ThrowFormatException()
 void GuidParser_ThrowFormatException_m14412 (GuidParser_t3712 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Guid/GuidParser::ParseHex(System.Int32,System.Boolean)
 uint64_t GuidParser_ParseHex_m14413 (GuidParser_t3712 * __this, int32_t ___length, bool ___strictLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::ParseOptChar(System.Char)
 bool GuidParser_ParseOptChar_m14414 (GuidParser_t3712 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseChar(System.Char)
 void GuidParser_ParseChar_m14415 (GuidParser_t3712 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid1()
 Guid_t98  GuidParser_ParseGuid1_m14416 (GuidParser_t3712 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseHexPrefix()
 void GuidParser_ParseHexPrefix_m14417 (GuidParser_t3712 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid2()
 Guid_t98  GuidParser_ParseGuid2_m14418 (GuidParser_t3712 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::Parse()
 Guid_t98  GuidParser_Parse_m14419 (GuidParser_t3712 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
