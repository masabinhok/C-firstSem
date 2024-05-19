//WAP to find the largest element in 2D array i.e matrix

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

  int largest=matrix[0][0];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(matrix[i][j]>largest){
        largest=matrix[i][j];
      }
    }
  }

  printf("The largest element in the matrix is %d",largest);
  return 0;
}