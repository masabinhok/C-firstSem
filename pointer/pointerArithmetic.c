/*
Pointer arithmetic in c allows you to perform arithmetic operations on pointer variables.
When you perform arithmetic operation on a pointer, it advances or moves the pointer to point to another memory location based on the size of the data type the pointer is pointing to.

IN pointer, if a number is added to the pointer, the pointer points to 
[address+ number*sizeof(dataType) ]memory location. (next)
IN pointer, if a number is subtracted to the pointer, the pointer points to 
[address- number*sizeof(dataType) ]memory location.(previous)

*/

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80},*ptr;
    ptr = &arr[0];
    printf("value=%d\taddress%u\n", *ptr, ptr);
    ptr = ptr + 3;
    // points to next 3 position of current position: value 40
    printf("After adding 3 value=%d\taddres%u\n", *ptr, ptr); 
    ptr = ptr - 1;
     // points to previous 1 position of current position: value 30
     printf("after subtracting 1 value=%d\taddress%u\n", *ptr, ptr);
    return 0;
}

/*
Pointer multiplication doesnot makes sense.
Pointer can not be incremented or decremented with float values.
Pointer-to-Pointer addition is not allowed.
Pointer-to-Pointer subtraction is only allowed within the same array.
int arr[5];
int *ptr1 = &arr[2];
int *ptr2 = &arr[4];
int diff = ptr2 - ptr1; // Allowed, yields 2 (number of elements between the pointers, not the actual memory address difference)
*/