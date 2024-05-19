//Pointer is a variable which stores the address of another variable

#include <stdio.h>
int main () {
  int i=20;
  //reserves a sizeof(int) memory space, names it i and stores 20 at the memory location.
  //its value can be accsesed as
  printf("Value:%d\t", i);
  printf("Address:%u\n",&i);

  int *j;
  j=&i;

  printf("Value of i=%d\n", *(&i));
  printf("Address of i= %u\n",j);
  printf("Value of i=%d",*j);

  return 0;
}