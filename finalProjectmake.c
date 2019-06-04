#include <stdio.h>
#include "finalProjectfunc.h"

int main(int argc, char* argv[])
{
  if (argc != 5)
    {
      printf("=====================================incorrect numbr of inputs=====================================\n");
      return 1;
    }

  sscanf(argv[1], "%f", &inputy);

  sscanf(argv[2], "%f", &inputvx);

  sscanf(argv[3], "%f", &inputvy);

  sscanf(argv[4], "%f", &inputt);

int g = 1;

if (g == 1)
  {
    float A = distanceTraveled(inputy, inputvx, inputvy, inputt);
    printf("distance traveled: %f\n", A);
  }
}
