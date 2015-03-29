#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3515;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3492;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3527;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t990;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t3528;
// System.IO.BinaryReader
struct BinaryReader_t3329;
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
 void BinaryFormatter__ctor_m13102 (BinaryFormatter_t3515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void BinaryFormatter__ctor_m13103 (BinaryFormatter_t3515 * __this, Object_t * ___selector, StreamingContext_t2616  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
 Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m13104 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
 void BinaryFormatter_set_AssemblyFormat_m13105 (BinaryFormatter_t3515 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
 SerializationBinder_t3527 * BinaryFormatter_get_Binder_m13106 (BinaryFormatter_t3515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
 StreamingContext_t2616  BinaryFormatter_get_Context_m13107 (BinaryFormatter_t3515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
 Object_t * BinaryFormatter_get_SurrogateSelector_m13108 (BinaryFormatter_t3515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
 int32_t BinaryFormatter_get_FilterLevel_m13109 (BinaryFormatter_t3515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
 Object_t * BinaryFormatter_Deserialize_m13110 (BinaryFormatter_t3515 * __this, Stream_t990 * ___serializationStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
 Object_t * BinaryFormatter_NoCheckDeserialize_m13111 (BinaryFormatter_t3515 * __this, Stream_t990 * ___serializationStream, HeaderHandler_t3528 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
 void BinaryFormatter_ReadBinaryHeader_m13112 (BinaryFormatter_t3515 * __this, BinaryReader_t3329 * ___reader, bool* ___hasHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
