#include <string.h>
#include <stdio.h>

int main () {
  char a[]="SABIN";
  char b[100]=" GOD";

  strcat(a,b);
  printf("The concatenated string is %s",a);
  return 0;
}