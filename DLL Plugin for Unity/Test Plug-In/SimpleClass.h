#pragma once
#include "PluginSettings.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class PLUGIN_API SimpleClass
{
public:
	int posSave(float cubeXposition, float cubeYposition, float cubeZposition);

	void posLoad();

	float* getPos();

	float* holdPos;

};
