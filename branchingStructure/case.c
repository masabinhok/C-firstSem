#include <stdio.h>
int main ()
{
  char ch;
  printf("enter a character: ");
  scanf("%c",&ch);
  if(ch>'a' && ch<'z')
{
  printf("the entered character is lowercase");

}

else if (ch>'A' && ch<'Z')
{
  printf("UPPERCASE");
}
else {
  printf("are you sure that is an english alphabet?");

}
return 0;
}