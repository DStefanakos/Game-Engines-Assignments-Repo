#include "SimpleClass.h"
int SimpleClass::posSave(float cubeXposition, float cubeYposition, float cubeZposition)
{
	ofstream Write;
	Write.open("Position Writer");
	Write << cubeXposition << endl;
	Write << cubeYposition << endl;
	Write << cubeZposition << endl;

	Write.close();
	return 1;
}

void SimpleClass::posLoad() 
{
	ifstream Read; 
	Read.open("Position Writer");
	string line;
	holdPos = new float[3];
	int counter = 0;

	holdPos[0] = 0.1f;
	holdPos[1] = 0.1f;
	holdPos[2] = 0.1f;

	if(Read.is_open()) 
	{
		Read >> holdPos[0];
		Read >> holdPos[1];
		Read >> holdPos[2];
	}
	Read.close();
}

float* SimpleClass::getPos()
{
	return holdPos;
}
