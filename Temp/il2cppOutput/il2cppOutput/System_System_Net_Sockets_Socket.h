#pragma once
#include <stdint.h>
// System.Collections.Queue
struct Queue_t2758;
// System.Threading.Thread
struct Thread_t1419;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"
// System.Net.Sockets.SocketType
#include "System_System_Net_Sockets_SocketType.h"
// System.Net.Sockets.ProtocolType
#include "System_System_Net_Sockets_ProtocolType.h"
// System.Net.Sockets.Socket
struct Socket_t2759  : public Object_t
{
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t2758 * ___readQ;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t2758 * ___writeQ;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout;
	// System.IntPtr System.Net.Sockets.Socket::socket
	IntPtr_t39 ___socket;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t1419 * ___blocking_thread;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed;
};
struct Socket_t2759_StaticFields{
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count;
};
