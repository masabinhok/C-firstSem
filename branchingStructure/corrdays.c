#include <stdio.h>
int main ()
{
  int days;
  printf("enter any number from 1 to 7: ");
  scanf("%d", &days);
  switch (days){
    case 1: printf("Sunday");break;
    case 2: printf("Monday");break;
    case 3: printf("Tuesday");break;
    case 4: printf("Wednesdsay");break;
    case 5: printf("Thursday");break;
    case 6: printf("Friday");break;
    case 7: printf("Saturday");break;
    default: printf("Enter a valid day number");
    return 0;
    
  }
}