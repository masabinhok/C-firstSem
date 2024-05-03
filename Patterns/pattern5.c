#include <stdio.h>
int main()
{
  int rows=5;
  for (int i=1; i<=2*rows -1; i++)
  {
    int god = (i<=rows)? i: 2*rows-i;
    for (int j=1; j<=god; j++ )
    {
      printf("N");

    }
    printf("\n");
  }
  return 0;
}