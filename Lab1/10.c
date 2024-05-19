#include <stdio.h>
int main ()
{
  int pp, pc, tp;
  float dp;
  printf("enter the price of a pen :");
  scanf("%d", &pp);
  printf("enter the price of a copy :");
  scanf("%d",& pc);
  tp=(2*pp)+(5*pc);
  dp=tp-0.1*tp;
  printf("The total price is %d\n", tp);
  printf("The discounted price is %f\n", dp);
  
  
  }