#include <stdio.h>
int main ()
{
  for(int i=0; i<5; i++)
  {
    for (int s=4-i; s>0; s--)
    {
      printf(" ");
    }
    for (int j=0; j<=i; j++)
    {
      printf("$ ");
    }
    printf("\n");
  }return 0;
}