//WAP in C to sort a given array in descending order

#include <stdio.h>
int main () {
  int size;
  printf("Enter the size of the array: \n");
  scanf("%d",&size);

  int array[size];
  printf("Enter a random array to sort: \n");
  for(int i=0; i<size; i++){
    scanf("%d",&array[i]);
  }
  int temp;

  for(int i=0; i<size-1; i++){
    for(int j=0; j<size-i-1; j++){
      if(array[j]<array[j+1]){
        //swap elements
        
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
  printf("Sorted array in ascending order is:\n");
  for(int i=0; i<size; i++){
    printf("%d\t",array[i]);
  }
  printf("\n");
  return 0;
}