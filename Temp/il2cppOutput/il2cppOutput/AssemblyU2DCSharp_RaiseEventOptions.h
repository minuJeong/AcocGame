#pragma once
#include <stdint.h>
// RaiseEventOptions
struct RaiseEventOptions_t266;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.Lite.EventCaching
#include "Photon3Unity3D_ExitGames_Client_Photon_Lite_EventCaching.h"
// ExitGames.Client.Photon.Lite.ReceiverGroup
#include "Photon3Unity3D_ExitGames_Client_Photon_Lite_ReceiverGroup.h"
// RaiseEventOptions
struct RaiseEventOptions_t266  : public Object_t
{
	// ExitGames.Client.Photon.Lite.EventCaching RaiseEventOptions::CachingOption
	uint8_t ___CachingOption;
	// System.Byte RaiseEventOptions::InterestGroup
	uint8_t ___InterestGroup;
	// System.Int32[] RaiseEventOptions::TargetActors
	Int32U5BU5D_t257* ___TargetActors;
	// ExitGames.Client.Photon.Lite.ReceiverGroup RaiseEventOptions::Receivers
	uint8_t ___Receivers;
	// System.Byte RaiseEventOptions::SequenceChannel
	uint8_t ___SequenceChannel;
	// System.Boolean RaiseEventOptions::ForwardToWebhook
	bool ___ForwardToWebhook;
	// System.Int32 RaiseEventOptions::CacheSliceIndex
	int32_t ___CacheSliceIndex;
	// System.Boolean RaiseEventOptions::Encrypt
	bool ___Encrypt;
};
struct RaiseEventOptions_t266_StaticFields{
	// RaiseEventOptions RaiseEventOptions::Default
	RaiseEventOptions_t266 * ___Default;
};
