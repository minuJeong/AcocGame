#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonStreamQueue
struct PhotonStreamQueue_t308  : public Object_t
{
	// System.Int32 PhotonStreamQueue::m_SampleRate
	int32_t ___m_SampleRate;
	// System.Int32 PhotonStreamQueue::m_SampleCount
	int32_t ___m_SampleCount;
	// System.Int32 PhotonStreamQueue::m_ObjectsPerSample
	int32_t ___m_ObjectsPerSample;
	// System.Single PhotonStreamQueue::m_LastSampleTime
	float ___m_LastSampleTime;
	// System.Int32 PhotonStreamQueue::m_LastFrameCount
	int32_t ___m_LastFrameCount;
	// System.Int32 PhotonStreamQueue::m_NextObjectIndex
	int32_t ___m_NextObjectIndex;
	// System.Collections.Generic.List`1<System.Object> PhotonStreamQueue::m_Objects
	List_1_t2 * ___m_Objects;
	// System.Boolean PhotonStreamQueue::m_IsWriting
	bool ___m_IsWriting;
};
