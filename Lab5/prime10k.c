#include<stdio.h>
int main ()
{
  long int i,n, factor;
  for (i=1; i<=10000; i++)
  
{
  factor=0;
  for(n=1; n<=i; n++)
  if (i%n==0)
  {
    factor=factor+1;

  }
  if (factor<=2)
  {
    
  printf("%d\t",i);
  }
}
return 0;
}