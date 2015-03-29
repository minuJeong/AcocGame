#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Identity
struct Identity_t3501;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3166;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3499;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
 void Identity__ctor_m13030 (Identity_t3501 * __this, String_t* ___objectUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type)
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
 Object_t * Identity_get_ChannelSink_m13031 (Identity_t3501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
 void Identity_set_ChannelSink_m13032 (Identity_t3501 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
 String_t* Identity_get_ObjectUri_m13033 (Identity_t3501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
 bool Identity_get_Disposed_m13034 (Identity_t3501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
 void Identity_set_Disposed_m13035 (Identity_t3501 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
