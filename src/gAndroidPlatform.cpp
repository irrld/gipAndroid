/*
 * gAndroidPlatform.cpp
 */

#include "gAndroidPlatform.h"

#include "gAndroidWindow.h"

// Registers itself with the engine on construction, see gBasePlatform. This
// file is listed in PLUGIN_EXECUTABLE_SRCS so it is compiled into the app
// target, where the linker cannot drop it for being unreferenced.
static gAndroidPlatform platform;

gBaseWindow* gAndroidPlatform::createWindow() {
	return new gAndroidWindow();
}
