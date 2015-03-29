#pragma once
#include <stdint.h>
// Facebook.AbstractFacebook
struct AbstractFacebook_t118;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// Facebook.AbstractFacebook
#include "IFacebook_Facebook_AbstractFacebook.h"
// Facebook.EditorFacebook
struct EditorFacebook_t132  : public AbstractFacebook_t118
{
	// Facebook.AbstractFacebook Facebook.EditorFacebook::fb
	AbstractFacebook_t118 * ___fb;
	// Facebook.FacebookDelegate Facebook.EditorFacebook::loginCallback
	FacebookDelegate_t115 * ___loginCallback;
};
