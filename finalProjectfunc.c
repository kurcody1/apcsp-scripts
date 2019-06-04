#include <stdio.h>
#include "finalProjectfunc.h"


float distanceTraveled(float y,float vx,float vy,float t)
{
      float x2 = (vx * t);
      float y2 = 10 +  y + (vy * t) + (1 / 2 * 9.8 * t * t);
return x2;
}

