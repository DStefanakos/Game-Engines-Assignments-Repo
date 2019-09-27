#pragma once
#include "PluginSettings.h"
#include "SimpleClass.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int posSave(float cubeXposition, float cubeYposition, float cubeZposition);
	PLUGIN_API void posLoad();
	PLUGIN_API float* getPos();

#ifdef __cplusplus
}
#endif