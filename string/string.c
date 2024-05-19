#include <stdio.h>
#include <string.h>

int main () {
  char name[20];
  printf("Enter your name: ");
  gets(name);

  printf("%s",name);
  return 0;
}

