#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t1396;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1394;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct Group_t1396  : public Capture_t1395
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t1394 * ___captures;
};
struct Group_t1396_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t1396 * ___Fail;
};
