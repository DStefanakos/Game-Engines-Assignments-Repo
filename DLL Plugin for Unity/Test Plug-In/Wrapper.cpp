#include "Wrapper.h"
SimpleClass simpleClass;
int posSave(float cubeXposition, float cubeYposition, float cubeZposition)
{
	return simpleClass.posSave(cubeXposition, cubeYposition, cubeZposition);
}

void posLoad()
{
	return simpleClass.posLoad();
}

PLUGIN_API float* getPos()
{
	return simpleClass.getPos();
}
