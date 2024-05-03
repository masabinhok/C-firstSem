#include <stdio.h>
int main ()
{
  int rows=5;
  for (int i=2*rows; i>=1; i--)
  {
    int sabinGod= (i>5)? i : 2*rows-i+1;
    for( int s=rows*2; s>=sabinGod; s--)
    {
      printf(" ");
    }
    for (int j=sabinGod; j>rows; j--)
    {
      printf("* ");
    }
    printf("\n");
  }
return 0;
}