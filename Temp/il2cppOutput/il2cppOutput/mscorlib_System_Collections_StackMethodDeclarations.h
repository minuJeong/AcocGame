#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack
struct Stack_t2647;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void System.Collections.Stack::.ctor()
 void Stack__ctor_m9231 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
 void Stack_Resize_m11797 (Stack_t2647 * __this, int32_t ___ncapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
 int32_t Stack_get_Count_m9233 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
 bool Stack_get_IsSynchronized_m9234 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
 Object_t * Stack_get_SyncRoot_m9235 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
 void Stack_Clear_m9065 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
 void Stack_CopyTo_m9236 (Stack_t2647 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
 Object_t * Stack_GetEnumerator_m9232 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
 Object_t * Stack_Peek_m9060 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
 Object_t * Stack_Pop_m9061 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
 void Stack_Push_m9059 (Stack_t2647 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
