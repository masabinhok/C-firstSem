#include <stdio.h>

int main ()
{
  float a;
  char b;
  long int c;
  unsigned int d;

  printf("Enter a: ");
  scanf("%f", &a);

    while ((getchar()) != '\n');

  printf("enter b: ");
  scanf("%c", &b);

  printf("enter c: ");
  scanf("%ld", &c);

  printf("enter d: ");
  scanf("%u", &d);

  printf("a=%f and b=%c and c=%ld and d=%u", a, b, c, d);

}



