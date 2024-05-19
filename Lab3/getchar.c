#include <stdio.h>
int main ()
{
  int ch, st[20];
  printf("enter a character: ");
  scanf("%c", &ch);
  printf("enter a string: ");
  scanf("%s", &st);
  printf("%c and %s", ch, st);
return 0;
}