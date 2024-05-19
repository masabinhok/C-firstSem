#include <stdio.h>
int main ()
{
  int seconds, min;
  printf("Enter number of seconds : ");
  scanf("%d",&seconds);
  min=seconds/60;
  seconds=seconds%60;
  printf("%d minutes", min);
  printf("  %d seconds",seconds);

return 0;
}