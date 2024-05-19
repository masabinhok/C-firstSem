#include <stdio.h>
int main ()
{
  int a, b, c, d;
  printf("enter 4 numbers :");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  int mean= (a+b+c+d)/4;
  printf("the mean of the 4 integers is : %d", mean);

return 0;
}