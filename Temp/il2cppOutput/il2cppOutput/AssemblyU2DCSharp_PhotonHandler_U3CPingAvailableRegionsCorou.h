#pragma once
#include <stdint.h>
// PhotonPingManager
struct PhotonPingManager_t295;
// Region
struct Region_t296;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.List`1/Enumerator<Region>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4
struct U3CPingAvailableRegionsCoroutineU3Ec__Iterator4_t297  : public Object_t
{
	// PhotonPingManager PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4::<pingManager>__0
	PhotonPingManager_t295 * ___U3CpingManagerU3E__0;
	// System.Collections.Generic.List`1/Enumerator<Region> PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4::<$s_63>__1
	Enumerator_t298  ___U3C$s_63U3E__1;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4::<region>__2
	Region_t296 * ___U3CregionU3E__2;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4::<best>__3
	Region_t296 * ___U3CbestU3E__3;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4::connectToBest
	bool ___connectToBest;
	// System.Int32 PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4::$PC
	int32_t ___$PC;
	// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4::$current
	Object_t * ___$current;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator4::<$>connectToBest
	bool ___U3C$U3EconnectToBest;
};
