#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.MissingExtensions
struct MissingExtensions_t996;
// System.Type
struct Type_t;
// System.Enum
struct Enum_t79;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t997;
// System.IO.StreamReader
struct StreamReader_t988;
// System.Threading.Tasks.Task
struct Task_t390;
// System.IO.Stream
struct Stream_t990;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t994;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Type Parse.Internal.MissingExtensions::GetTypeInfo(System.Type)
 Type_t * MissingExtensions_GetTypeInfo_m5323 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.MissingExtensions::HasFlag(System.Enum,System.Enum)
 bool MissingExtensions_HasFlag_m5324 (Object_t * __this/* static, unused */, Enum_t79 * ___enumValue, Enum_t79 * ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.Internal.MissingExtensions::ReadToEndAsync(System.IO.StreamReader)
 Task_1_t997 * MissingExtensions_ReadToEndAsync_m5325 (Object_t * __this/* static, unused */, StreamReader_t988 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream)
 Task_t390 * MissingExtensions_CopyToAsync_m5326 (Object_t * __this/* static, unused */, Stream_t990 * ___stream, Stream_t990 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream,System.Int32,System.Threading.CancellationToken)
 Task_t390 * MissingExtensions_CopyToAsync_m5327 (Object_t * __this/* static, unused */, Stream_t990 * ___stream, Stream_t990 * ___destination, int32_t ___bufferSize, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.Internal.MissingExtensions::ReadAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
 Task_1_t994 * MissingExtensions_ReadAsync_m5328 (Object_t * __this/* static, unused */, Stream_t990 * ___stream, ByteU5BU5D_t21* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::WriteAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
 Task_t390 * MissingExtensions_WriteAsync_m5329 (Object_t * __this/* static, unused */, Stream_t990 * ___stream, ByteU5BU5D_t21* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
