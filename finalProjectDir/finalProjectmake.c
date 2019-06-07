#include <stdio.h>
#include "finalProjectfunc.h"

int main(int argc, char* argv[])
{
  if (argc != 5)
    {
      printf("=====================================incorrect numbr of inputs=====================================\n");
      return 1;
    }

  float inputy;
  float inputvx;
  float inputvy;
  float inputt;
  float inputangle;
  float inputv;

for (int j = 1; j <= 4; j++)
{
if(j==1)
  {
  sscanf(argv[1], "%f", &inputy);
  }
else if (j == 2)
  {
  sscanf(argv[2], "%f", &inputv);
  }
else if (j == 3)
  {
  sscanf(argv[3], "%f", &inputangle);
  }
else
  {
  sscanf(argv[4], "%f", &inputt);
  }
}

inputvx = inputv * sin(inputangle);
inputvy = inputv * sin(inputangle);

printf("YOUR INPUT: height above the ground: %f, ", inputy);
printf("velocity: %f, ", inputv);
printf("angle: %f, ", inputangle);
printf("time: %f\n", inputt);


    float A = distanceTraveled(inputvx, inputt);
    printf("distance traveled: %f\n", A);

    float B = distanceTraveledy(inputy, inputvy, inputt);
    printf("y distance traveled: %f\n", B);


}
