#include <stdio.h>
int main ()
{
  char name[20];
  int age;
  printf("Enter your name : ");
  scanf("%s", name);
  printf("Enter your age : ");
  scanf("%d", &age);
  printf("your name is %s and your age is %d", name, age);


return 0;
}