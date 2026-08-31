/*
 * gAndroidPlatform.h
 *
 * Registers Android as a platform with the engine.
 */

#ifndef GANDROIDPLATFORM_H_
#define GANDROIDPLATFORM_H_

#include "gBasePlatform.h"

class gAndroidPlatform : public gBasePlatform {
public:
	gBaseWindow* createWindow() override;
};

#endif /* GANDROIDPLATFORM_H_ */
