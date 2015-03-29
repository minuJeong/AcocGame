#pragma once
#include <stdint.h>
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t3293;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t3291;
// System.Collections.Hashtable/HashValues
struct HashValues_t3292;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3294;
// System.Collections.IComparer
struct IComparer_t3176;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3295;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Hashtable
struct Hashtable_t48  : public Object_t
{
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t3293* ___table;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t257* ___hashes;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t3291 * ___hashKeys;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t3292 * ___hashValues;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	Object_t * ___hcpRef;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	Object_t * ___comparerRef;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t2614 * ___serializationInfo;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	Object_t * ___equalityComparer;
};
struct Hashtable_t48_StaticFields{
	// System.Int32 System.Collections.Hashtable::CHAIN_MARKER
	int32_t ___CHAIN_MARKER;
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t257* ___primeTbl;
};
