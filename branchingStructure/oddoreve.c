#include <stdio.h>
int main ()
{
 unsigned int number;
  printf("Enter an unsigned integer: ");
  scanf("%u",&number);
  if(number%2 == 0)
  {
    printf("The number is even.\nChecking is it is greater than 100!");
    if (number>100)
    {
      printf("and It is greater than 100");
    }
    else printf("and It is less than 100");
  }

  else{
    printf("the number is odd.\n Checking if it is divisible by 11 but not by 7.\n....\n...\n..\n.\n");
    if (number%11==0 && number%7 !=0)
    {
      printf("and It is divisible by 11 but not by 7");

    }
    else printf("and It doesnot satisfy the condition of being divisible by 11 but not by 7.");
  } return 0;
}