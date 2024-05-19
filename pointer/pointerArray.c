/*
Now we can relate the concept of pointer arithmetic to understand relationship between pointer and arrays in C:

- Arrays elements are always stored in contiguous locations

- A pointer when incremented always points to immediate next location of its type

- A pointer when decremented always points to an immediate previous location of its type.

A C program that prints out elements and its memory locations in given array:
*/


#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80}, i,*ptr;
    ptr = &arr[0]; // assign the first address of array to pointer variable
    for (i = 0; i < 8; i++)
    {
        printf("Element: %d Location: %u\n", *ptr, ptr);
        ptr++; // increment pointer to points to next location
    }
    return 0;
}
