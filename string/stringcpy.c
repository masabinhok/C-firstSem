#include <string.h>
#include <stdio.h>

int main () {
  char a[]="SABIN";
  char b[100];

  strcpy(b,a);
  printf("The copied string is %s",b);
  return 0;
}