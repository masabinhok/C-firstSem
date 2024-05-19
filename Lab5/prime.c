#include <stdio.h>
int main ()
{
  int i,n, factor=0;
  printf("enter an unsigned integer : ");
  scanf("%d",&n);
  for (i=1; i<=n; i++)
{
  if (n%i==0)
  factor+=1;

}
if(factor<=2)
printf("The number is prime. It has only 2 factors, %d and 1", n);
else 
printf("The number is not prime. It has %d factors. In order to be prime, it should only have 2 factors, itself and 1. For example 7.", factor);
return 0;
}