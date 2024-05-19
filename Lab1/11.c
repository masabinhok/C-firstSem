#include <stdio.h>
int main ()
{
  int hour, minute, sec, converted;
  printf("enter hour :");
  scanf("%d", &hour);
  printf("enter minute :");
  scanf("%d", &minute);
  printf("enter second:");
  scanf("%d", &sec);
  
  printf("the time you inserted is %d:%d:%d\n", hour, minute ,sec);
  converted=hour*60*60+(minute*60)+sec;
  printf("\nThe converted time in seconds is %d seconds", converted);
  return 0;
}

