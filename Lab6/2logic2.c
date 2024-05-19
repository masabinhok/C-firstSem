#include <stdio.h>
int main ()
{
  int i, j;
  for (i=1; i <=8; i++)
    {
      for (j=1; j<=8; j++)
      {
        if ((i+j)%2==0)
        {
          printf(" ");
        }
        else
        printf("\xdb");
      }   
      printf("\n");  
    }
return 0;
}