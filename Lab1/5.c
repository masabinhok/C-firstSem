#include <stdio.h>
#include <math.h>
int main ()
{
  int radius, volume;
  printf("Enter the radius of the sphere : ");
  scanf("%d", &radius);
  volume=4/3*3.14*pow(radius,3);
  printf("The volume of the sphere is : %d", volume);
return 0;
}