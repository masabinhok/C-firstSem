#include <stdio.h>
int main ()
{
  int n;
  printf("how many row you wanna see: ");
  scanf("%d", &n);
  for (int i=n; i>=1; i--)
  {
    for (int s=i; s<=n-1; s++)
    {
      printf(" ");
    }
    for(int j=2*i-1; j>=1; j--)
    {
      if(j!=1 && j!=2*i-1 && i<n)
      {
        printf(" ");
        
      }
      else
        printf("*");
    }printf("\n");
  }
return 0;
}