//Write a C program to find the largest number in a given array.

#include <stdio.h>

int main () {
  int size;
  printf("Enter the size of array: ");
  scanf("%d",&size);

  int array[size];
  
  printf("Enter the elements of array:\n");
  for(int i=0; i<size; i++){
    scanf("%d",&array[i]);
  }

  int largestNumber=array[0];
  for(int i=1; i<size; i++){
    if(array[i]>largestNumber){
      largestNumber=array[i];
    }
  }
  printf("The largest number in the array is %d", largestNumber);
  return 0;
}