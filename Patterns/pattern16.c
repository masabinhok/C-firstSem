#include <stdio.h>
int main ()
{
  int n=5;
  for (int i=0; i<n; i++)
  {
    for (int s=n-1; s>i; s--)
    {
      printf(" ");
    }
    for (int j=0; j<=i; j++)
    {
      if(j==0||j==i)
      {printf("1 ");
      }
      else 
      printf("%d ", i);
    }
    printf("\n");

  }return 0;
}