#include <stdio.h>
int main()
{
  for(int i=5; i>0; i--)
  {
    for (int s=5-i; s>=0; s--)
    {
      printf(" ");
    }
    for(int j=1; j<=i; j++)
    {
      printf("* ");

    }printf("\n");
  }
  return 0;
}