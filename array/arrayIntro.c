//Array can be defined as collection of elements of similar data types. For eg: An integer array can store only integer values. In C programming array of characters is known as string.

#include <stdio.h>
int main () {
  
  int array1[10]; //declaring an array;

  int array_name[]={1,2,3,4,5,6,7,8,9,10}; // declaring and initializing the array on the same line, not necessary to declare size of the array. size will be equal to the number of elements itself.


  for(int i=0; i<10; i++){//array is 0 indexed
    printf("%d\t",array_name[i]); //looping through an array to print each element
  }

  return 0;
}