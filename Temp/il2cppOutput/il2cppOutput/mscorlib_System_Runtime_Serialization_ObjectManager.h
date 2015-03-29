#pragma once
#include <stdint.h>
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3539;
// System.Collections.ArrayList
struct ArrayList_t94;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3491;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3532  : public Object_t
{
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t3539 * ____objectRecordChain;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t3539 * ____lastObjectRecord;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t94 * ____deserializedRecords;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t94 * ____onDeserializedCallbackRecords;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t48 * ____objectRecords;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	Object_t * ____selector;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t2615  ____context;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount;
};
