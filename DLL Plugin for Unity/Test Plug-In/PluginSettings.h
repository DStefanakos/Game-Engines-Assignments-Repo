#pragma once
#ifdef TESTPLUGIN_EXPORTS
#define PLUGIN_API __declspec(dllexport)
#elif TESTPLUGIN_IMPORTS
#define PLUGIN_API __declspec(dllimport)
#else
#define PLUGIN_API
#endif