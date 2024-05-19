#include <stdio.h>
int main ()
{
  int age;
  printf("Enter your age: ");
  scanf("%d",&age);
  if(age>=65 && age<=120)
  {
    printf("You're enough old to be eligible for seniority allowance. Congratulations!!!\n");

  }
  else if (age>120)
  {
    printf("Sorry, no seniority allowance for ghosts in this realm. Keep haunting with youthful enthusiasm!");
}
  else{
    printf("Sorry! Be 65 and come. You are not eligible for seniority allowance.\n");
  }
  return 0;
}
