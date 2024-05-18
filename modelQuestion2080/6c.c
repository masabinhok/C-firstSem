// Null pointer is a special pointer value that points to no memory location. It's often used in programming to indicate that the pointer does not point to a valid object or memory locations. 

/*
Referencing:
Referencing a pointer means obtaining the memory address it holds.
In many programming languages, you can get the address of a variable or object by using the "address-of" operator, typically denoted by '&'. For example, in C/C++, if you have a variable x, then &x will give you the memory address where x is stored.

Dereferencing:
Dereferencing a pointer means accesing the value stored at the memory address held by the pointer. This is typically done using the dereference ir indirection operator, which is usually denoted by *. For example, if ptr is a pointer variable pointing to some integer value, *ptr will give you the value stored at the memory location pointed by ptr.

*/

//Example
#include <stdio.h>

int main () {
  int x=10;
  int *ptr=&x;
  printf("Address of x: %p\n",(void*)ptr); //referencing: obtaining the memory address held by a pointer
  printf("Value of x:%d", *ptr); //dereferencing: accessing the value stored at the memory location held by the pointer.
  return 0; 
}