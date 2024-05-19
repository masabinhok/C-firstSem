#include <stdio.h>
int main ()
{
  int n, total=0;
while (1)
{
    printf("enter a number to sum up (enter 0 to exit)");
    scanf("%d", &n);

      if (n == 0)
      break;

      else
      total += n;

}
  printf("the sum of the numbers is %d ", total);
  
return 0;
}
  
        
 