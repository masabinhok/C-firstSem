#include <stdio.h>
int main ()
{
  for (int rows=5; rows>=1; rows--)
  {
    for (int cols=1; cols<=rows; cols++)
    {
      printf("*");
    }
    printf("\n");
  }return 0;
}