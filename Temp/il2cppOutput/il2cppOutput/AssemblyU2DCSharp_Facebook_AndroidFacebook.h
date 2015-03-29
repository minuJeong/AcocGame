#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// Facebook.InitDelegate
struct InitDelegate_t116;
// Facebook.AbstractFacebook
#include "IFacebook_Facebook_AbstractFacebook.h"
// Facebook.AndroidFacebook
struct AndroidFacebook_t117  : public AbstractFacebook_t118
{
	// System.String Facebook.AndroidFacebook::keyHash
	String_t* ___keyHash;
	// Facebook.FacebookDelegate Facebook.AndroidFacebook::deepLinkDelegate
	FacebookDelegate_t115 * ___deepLinkDelegate;
	// Facebook.InitDelegate Facebook.AndroidFacebook::onInitComplete
	InitDelegate_t116 * ___onInitComplete;
};
