#include <stdio.h>
#include <math.h>
int main ()
{
  int x, y, v;
  
  printf("enter the value of x: ");
  scanf("%d", &x);
  printf("enter the value of y: ");
  scanf("%d", &y);
  v=pow(x,3)+(y*y)-(100/x);
  printf("Result: %d",v);
  
return 0;
}