#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CustomTypes
struct CustomTypes_t241;
// System.IO.MemoryStream
struct MemoryStream_t242;
// System.Object
struct Object_t;

// System.Void CustomTypes::.cctor()
 void CustomTypes__cctor_m1162 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CustomTypes::Register()
 void CustomTypes_Register_m1163 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector3(System.IO.MemoryStream,System.Object)
 int16_t CustomTypes_SerializeVector3_m1164 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___outStream, Object_t * ___customobject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector3(System.IO.MemoryStream,System.Int16)
 Object_t * CustomTypes_DeserializeVector3_m1165 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___inStream, int16_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector2(System.IO.MemoryStream,System.Object)
 int16_t CustomTypes_SerializeVector2_m1166 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___outStream, Object_t * ___customobject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector2(System.IO.MemoryStream,System.Int16)
 Object_t * CustomTypes_DeserializeVector2_m1167 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___inStream, int16_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeQuaternion(System.IO.MemoryStream,System.Object)
 int16_t CustomTypes_SerializeQuaternion_m1168 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___outStream, Object_t * ___customobject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeQuaternion(System.IO.MemoryStream,System.Int16)
 Object_t * CustomTypes_DeserializeQuaternion_m1169 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___inStream, int16_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializePhotonPlayer(System.IO.MemoryStream,System.Object)
 int16_t CustomTypes_SerializePhotonPlayer_m1170 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___outStream, Object_t * ___customobject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializePhotonPlayer(System.IO.MemoryStream,System.Int16)
 Object_t * CustomTypes_DeserializePhotonPlayer_m1171 (Object_t * __this/* static, unused */, MemoryStream_t242 * ___inStream, int16_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
