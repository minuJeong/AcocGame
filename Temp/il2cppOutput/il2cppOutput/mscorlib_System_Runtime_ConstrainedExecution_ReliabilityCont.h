﻿#pragma once
#include <stdint.h>
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct ReliabilityContractAttribute_t3426  : public Attribute_t862
{
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer;
};