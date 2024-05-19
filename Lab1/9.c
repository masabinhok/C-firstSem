#include <stdio.h>
int main ()
{
  int a, b, h, volume;
  printf("Enter a : ");
  scanf("%d", &a);

  printf("Enter b : ");
  scanf("%d", &b);
  printf("Enter h : ");
  scanf("%d", &h);
  volume=a*b*h;
  printf("the volume of a paralleopiped is %d", volume);
  

  
return 0;
}