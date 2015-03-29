#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct RemotingSurrogateSelector_t3494;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t3495;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3492;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
 void RemotingSurrogateSelector__ctor_m12990 (RemotingSurrogateSelector_t3494 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
 void RemotingSurrogateSelector__cctor_m12991 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
 Object_t * RemotingSurrogateSelector_GetSurrogate_m12992 (RemotingSurrogateSelector_t3494 * __this, Type_t * ___type, StreamingContext_t2616  ___context, Object_t ** ___ssout, MethodInfo* method) IL2CPP_METHOD_ATTR;
