//WAP to store 6 elements and display the elements in the matrix form

#include <stdio.h>
int main () {
  int matrix[10][10], row, col;

  printf("Enter the number of rows:");
  scanf("%d",&row);
  printf("Enter the number of cols:");
  scanf("%d",&col);
  

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      printf("Element [%d][%d]:",i,j);
      scanf("%d",&matrix[i][j]);
    }
  }

  printf("The elements of the matrix are:\n");
  
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}