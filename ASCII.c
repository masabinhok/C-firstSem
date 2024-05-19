//ASCII stands for American Standard Code for Information Interchange
//ASCII value is a numerical representation of a character in the ASCII standard character set. ASCII is a character encoding standard used to represent text in computers, communication equipment, and other devices that use text, ranging from 0 to 127.


#include <stdio.h>
int main () 
{
  char ch;
  printf("Enter a character to know its ASCII value: ");
  scanf("%c",&ch);
  printf("The given character is %c and its ASCII value is %d",ch,ch);
  return 0;
}