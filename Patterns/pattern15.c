#include <stdio.h>
int main ()
{
  int n=5;
  for (int i=1; i<=2*n-1; i++)
  {

    int k=(i<=n)? i: 2*n-i;
    for(int s=n-1; s>=k; s--)
    {
      printf(" ");
    }
    for ( int j=1; j<=2*k-1; j++)
    {
      if(j!=1 && j!=2*k-1 )
      printf(" ");
      else 
      printf("*");

    }
    printf("\n");
  }
return 0;
}