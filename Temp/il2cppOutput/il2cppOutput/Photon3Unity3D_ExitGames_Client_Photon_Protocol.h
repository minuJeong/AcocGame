#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_t2395;
// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_t2396;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Int64[]
struct Int64U5BU5D_t2397;
// System.Single[]
struct SingleU5BU5D_t53;
// System.Double[]
struct DoubleU5BU5D_t2398;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.Protocol
struct Protocol_t470  : public Object_t
{
};
struct Protocol_t470_StaticFields{
	// System.String ExitGames.Client.Photon.Protocol::protocolType
	String_t* ___protocolType;
	// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType> ExitGames.Client.Photon.Protocol::TypeDict
	Dictionary_2_t2395 * ___TypeDict;
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType> ExitGames.Client.Photon.Protocol::CodeDict
	Dictionary_2_t2396 * ___CodeDict;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memShort
	ByteU5BU5D_t21* ___memShort;
	// System.Int64[] ExitGames.Client.Photon.Protocol::memLongBlock
	Int64U5BU5D_t2397* ___memLongBlock;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memLongBlockBytes
	ByteU5BU5D_t21* ___memLongBlockBytes;
	// System.Single[] ExitGames.Client.Photon.Protocol::memFloatBlock
	SingleU5BU5D_t53* ___memFloatBlock;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memFloatBlockBytes
	ByteU5BU5D_t21* ___memFloatBlockBytes;
	// System.Double[] ExitGames.Client.Photon.Protocol::memDoubleBlock
	DoubleU5BU5D_t2398* ___memDoubleBlock;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memDoubleBlockBytes
	ByteU5BU5D_t21* ___memDoubleBlockBytes;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memInteger
	ByteU5BU5D_t21* ___memInteger;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memLong
	ByteU5BU5D_t21* ___memLong;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memFloat
	ByteU5BU5D_t21* ___memFloat;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memDeserialize
	ByteU5BU5D_t21* ___memDeserialize;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memDouble
	ByteU5BU5D_t21* ___memDouble;
};
