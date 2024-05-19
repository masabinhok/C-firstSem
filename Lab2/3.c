#include <stdio.h>
int main ()
{
  int a, b, c;
  printf("Enter three different integers : ");
  scanf("%d%d%d", &a, &b , &c);
  if (a>b && a>c)
  {
    printf("Largest number is a=%d",a);
  }
  else if (b>a && b>c)
  {
    printf("Largest number is b=%d",b);
  }
  else
  {
    printf("Largest number is c=%d",c);
  }
  
return 0;
}