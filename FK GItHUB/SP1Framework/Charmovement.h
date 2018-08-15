#pragma once
#include <iostream>
enum EKEYS
{
	K_UP,
	K_DOWN,
	K_LEFT,
	K_RIGHT,
	K_ESCAPE,
	K_SPACE,
	K_COUNT
};
using namespace std;
double  g_dBounceTime;
double  g_dElapsedTime;
bool    g_abKeyPressed[K_COUNT];