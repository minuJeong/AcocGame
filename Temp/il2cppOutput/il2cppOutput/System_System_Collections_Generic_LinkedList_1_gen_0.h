﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t2431;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t2362  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::count
	uint32_t ___count;
	// System.UInt32 System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::version
	uint32_t ___version;
	// System.Object System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::syncRoot
	Object_t * ___syncRoot;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::first
	LinkedListNode_1_t2431 * ___first;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::si
	SerializationInfo_t2615 * ___si;
};
