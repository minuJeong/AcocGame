#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct IDictionary_2_t1155;
// System.Collections.Generic.IDictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct IDictionary_2_t1156;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct IDictionary_2_t1157;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1158;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct LinkedList_1_t1159;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t1160;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>
struct IDictionary_2_t1161;
// System.Threading.ThreadLocal`1<System.Boolean>
struct ThreadLocal_1_t1162;
// Parse.Internal.TaskQueue
struct TaskQueue_t1076;
// Parse.Internal.SynchronizedEventHandler`1<System.ComponentModel.PropertyChangedEventArgs>
struct SynchronizedEventHandler_1_t1163;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>,System.String>
struct Func_2_t1164;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>,Parse.Internal.IParseFieldOperation>
struct Func_2_t1165;
// System.Func`2<Parse.ParseObject,System.Boolean>
struct Func_2_t1145;
// System.Func`2<Parse.ParseObject,System.String>
struct Func_2_t1054;
// System.Func`2<Parse.ParseObject,Parse.ParseObject>
struct Func_2_t1166;
// System.Func`2<Parse.ParseFile,System.Boolean>
struct Func_2_t1167;
// System.Func`1<System.Boolean>
struct Func_1_t508;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_3.h"
// Parse.ParseObject
struct ParseObject_t534  : public Object_t
{
	// System.Object Parse.ParseObject::mutex
	Object_t * ___mutex;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::serverData
	Object_t* ___serverData;
	// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>> Parse.ParseObject::operationSetQueue
	LinkedList_1_t1159 * ___operationSetQueue;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::estimatedData
	Object_t* ___estimatedData;
	// System.Collections.Generic.IDictionary`2<System.String,System.Boolean> Parse.ParseObject::dataAvailability
	Object_t* ___dataAvailability;
	// System.Collections.Generic.IDictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem> Parse.ParseObject::hashedObjects
	Object_t* ___hashedObjects;
	// System.Boolean Parse.ParseObject::hasBeenFetched
	bool ___hasBeenFetched;
	// System.Boolean Parse.ParseObject::dirty
	bool ___dirty;
	// Parse.Internal.TaskQueue Parse.ParseObject::taskQueue
	TaskQueue_t1076 * ___taskQueue;
	// System.Boolean Parse.ParseObject::isNew
	bool ___isNew;
	// System.Nullable`1<System.DateTime> Parse.ParseObject::updatedAt
	Nullable_1_t1168  ___updatedAt;
	// System.Nullable`1<System.DateTime> Parse.ParseObject::createdAt
	Nullable_1_t1168  ___createdAt;
	// System.String Parse.ParseObject::objectId
	String_t* ___objectId;
	// System.String Parse.ParseObject::className
	String_t* ___className;
	// Parse.Internal.SynchronizedEventHandler`1<System.ComponentModel.PropertyChangedEventArgs> Parse.ParseObject::propertyChanged
	SynchronizedEventHandler_1_t1163 * ___propertyChanged;
};
struct ParseObject_t534_StaticFields{
	// System.String Parse.ParseObject::AutoClassName
	String_t* ___AutoClassName;
	// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.String>,System.String> Parse.ParseObject::propertyFieldNames
	Object_t* ___propertyFieldNames;
	// System.Collections.Generic.IDictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>> Parse.ParseObject::objectFactories
	Object_t* ___objectFactories;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>> Parse.ParseObject::propertyMappings
	Object_t* ___propertyMappings;
	// System.Threading.ReaderWriterLockSlim Parse.ParseObject::propertyMappingsLock
	ReaderWriterLockSlim_t1158 * ___propertyMappingsLock;
	// System.Threading.ThreadLocal`1<System.Boolean> Parse.ParseObject::isCreatingPointer
	ThreadLocal_1_t1162 * ___isCreatingPointer;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>,System.String> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate7
	Func_2_t1164 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate7;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>,Parse.Internal.IParseFieldOperation> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate8
	Func_2_t1165 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate8;
	// System.Func`2<Parse.ParseObject,System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegatea
	Func_2_t1145 * ___CS$U3CU3E9__CachedAnonymousMethodDelegatea;
	// System.Func`2<Parse.ParseObject,System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegatee
	Func_2_t1145 * ___CS$U3CU3E9__CachedAnonymousMethodDelegatee;
	// System.Func`2<Parse.ParseObject,System.String> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegatef
	Func_2_t1054 * ___CS$U3CU3E9__CachedAnonymousMethodDelegatef;
	// System.Func`2<Parse.ParseObject,Parse.ParseObject> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate10
	Func_2_t1166 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate10;
	// System.Func`2<Parse.ParseObject,System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate2c
	Func_2_t1145 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate2c;
	// System.Func`2<Parse.ParseFile,System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate47
	Func_2_t1167 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate47;
	// System.Func`1<System.Boolean> Parse.ParseObject::CS$<>9__CachedAnonymousMethodDelegate8c
	Func_1_t508 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate8c;
};
