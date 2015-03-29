#pragma once
#include <stdint.h>
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t3442;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.IList
struct IList_t869;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t3444  : public MethodCall_t3477
{
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::_activator
	Object_t * ____activator;
	// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::_activationAttributes
	ObjectU5BU5D_t5* ____activationAttributes;
	// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::_contextProperties
	Object_t * ____contextProperties;
	// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::_activationType
	Type_t * ____activationType;
	// System.String System.Runtime.Remoting.Messaging.ConstructionCall::_activationTypeName
	String_t* ____activationTypeName;
	// System.Boolean System.Runtime.Remoting.Messaging.ConstructionCall::_isContextOk
	bool ____isContextOk;
};
struct ConstructionCall_t3444_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCall::<>f__switch$map20
	Dictionary_2_t57 * ___U3CU3Ef__switch$map20;
};
