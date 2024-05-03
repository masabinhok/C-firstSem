#include <stdio.h>
int main()
{
for (int i=0; i<5; i++)
{
  for (int s=4; s>i; s-- )
  {
    printf(" ");
  }
  for (int j=1; j<=2*i+1; j++)
{
  printf("R");
}
printf("\n");
}
return 0;
}