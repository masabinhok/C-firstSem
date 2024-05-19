#include<stdio.h>
int main ()
{
  int number;
  printf("enter a integer: ");
  scanf("%d",&number);
  if(number>0)
  {
    printf("Positive");

  }
  else if(number<0)
  {
    printf("negative");
  }
  else{
    printf("Zero");

  }return 0;
}