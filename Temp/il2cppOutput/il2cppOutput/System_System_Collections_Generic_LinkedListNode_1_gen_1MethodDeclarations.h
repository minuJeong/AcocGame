#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6338;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6337;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
 void LinkedListNode_1__ctor_m32107_gshared (LinkedListNode_1_t6338 * __this, LinkedList_1_t6337 * ___list, Object_t * ___value, MethodInfo* method);
#define LinkedListNode_1__ctor_m32107(__this, ___list, ___value, method) (void)LinkedListNode_1__ctor_m32107_gshared((LinkedListNode_1_t6338 *)__this, (LinkedList_1_t6337 *)___list, (Object_t *)___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
 void LinkedListNode_1__ctor_m32108_gshared (LinkedListNode_1_t6338 * __this, LinkedList_1_t6337 * ___list, Object_t * ___value, LinkedListNode_1_t6338 * ___previousNode, LinkedListNode_1_t6338 * ___nextNode, MethodInfo* method);
#define LinkedListNode_1__ctor_m32108(__this, ___list, ___value, ___previousNode, ___nextNode, method) (void)LinkedListNode_1__ctor_m32108_gshared((LinkedListNode_1_t6338 *)__this, (LinkedList_1_t6337 *)___list, (Object_t *)___value, (LinkedListNode_1_t6338 *)___previousNode, (LinkedListNode_1_t6338 *)___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
 void LinkedListNode_1_Detach_m32109_gshared (LinkedListNode_1_t6338 * __this, MethodInfo* method);
#define LinkedListNode_1_Detach_m32109(__this, method) (void)LinkedListNode_1_Detach_m32109_gshared((LinkedListNode_1_t6338 *)__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
 LinkedList_1_t6337 * LinkedListNode_1_get_List_m32110_gshared (LinkedListNode_1_t6338 * __this, MethodInfo* method);
#define LinkedListNode_1_get_List_m32110(__this, method) (LinkedList_1_t6337 *)LinkedListNode_1_get_List_m32110_gshared((LinkedListNode_1_t6338 *)__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
 LinkedListNode_1_t6338 * LinkedListNode_1_get_Next_m32111_gshared (LinkedListNode_1_t6338 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Next_m32111(__this, method) (LinkedListNode_1_t6338 *)LinkedListNode_1_get_Next_m32111_gshared((LinkedListNode_1_t6338 *)__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
 Object_t * LinkedListNode_1_get_Value_m32112_gshared (LinkedListNode_1_t6338 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Value_m32112(__this, method) (Object_t *)LinkedListNode_1_get_Value_m32112_gshared((LinkedListNode_1_t6338 *)__this, method)
