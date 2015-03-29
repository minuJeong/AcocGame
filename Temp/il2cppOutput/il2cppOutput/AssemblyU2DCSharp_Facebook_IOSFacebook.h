#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t116;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// Facebook.AbstractFacebook
#include "IFacebook_Facebook_AbstractFacebook.h"
// Facebook.IOSFacebook
struct IOSFacebook_t164  : public AbstractFacebook_t118
{
	// System.Int32 Facebook.IOSFacebook::dialogMode
	int32_t ___dialogMode;
	// Facebook.InitDelegate Facebook.IOSFacebook::externalInitDelegate
	InitDelegate_t116 * ___externalInitDelegate;
	// Facebook.FacebookDelegate Facebook.IOSFacebook::deepLinkDelegate
	FacebookDelegate_t115 * ___deepLinkDelegate;
};
