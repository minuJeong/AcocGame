#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseFile
struct ParseFile_t1113;
// System.String
struct String_t;
// System.Uri
struct Uri_t80;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IO.Stream
struct Stream_t990;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Threading.Tasks.Task
struct Task_t390;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1100;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseFile::.ctor(System.String,System.Uri,System.String)
 void ParseFile__ctor_m5659 (ParseFile_t1113 * __this, String_t* ___name, Uri_t80 * ___uri, String_t* ___mimeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.Byte[],System.String)
 void ParseFile__ctor_m5660 (ParseFile_t1113 * __this, String_t* ___name, ByteU5BU5D_t21* ___data, String_t* ___mimeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.IO.Stream,System.String)
 void ParseFile__ctor_m5661 (ParseFile_t1113 * __this, String_t* ___name, Stream_t990 * ___data, String_t* ___mimeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFile::get_IsDirty()
 bool ParseFile_get_IsDirty_m5662 (ParseFile_t1113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_Name()
 String_t* ParseFile_get_Name_m5663 (ParseFile_t1113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_MimeType()
 String_t* ParseFile_get_MimeType_m5664 (ParseFile_t1113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.ParseFile::get_Url()
 Uri_t80 * ParseFile_get_Url_m5665 (ParseFile_t1113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseFile::ToJSON()
 Object_t* ParseFile_ToJSON_m5666 (ParseFile_t1113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::MergeFromJSON(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseFile_MergeFromJSON_m5667 (ParseFile_t1113 * __this, Object_t* ___jsonData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync()
 Task_t390 * ParseFile_SaveAsync_m5668 (ParseFile_t1113 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.CancellationToken)
 Task_t390 * ParseFile_SaveAsync_m5669 (ParseFile_t1113 * __this, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>)
 Task_t390 * ParseFile_SaveAsync_m5670 (ParseFile_t1113 * __this, Object_t* ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_t390 * ParseFile_SaveAsync_m5671 (ParseFile_t1113 * __this, Object_t* ___progress, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.Tasks.Task,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
 Task_t390 * ParseFile_SaveAsync_m5672 (ParseFile_t1113 * __this, Task_t390 * ___toAwait, Object_t* ___progress, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::GetMIMEType(System.String)
 String_t* ParseFile_GetMIMEType_m5673 (Object_t * __this/* static, unused */, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.cctor()
 void ParseFile__cctor_m5674 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
