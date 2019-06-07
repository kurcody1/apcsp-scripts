#include <stdio.h>
#include "finalProjectfunc.h"


float distanceTraveled(float vx, float t)
{
	float x2 = vx * t;
	return x2;
}

float distanceTraveledy(float y, float vy, float t)
{
	float y2 = y + vy * t -  4.9 * t * t;
	return y2;
}

