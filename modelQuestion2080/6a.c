//The size of an array in C is the total number of elements it can hold, which is determined at the time of declaration. This size is fixed and cannot be changed during the execution of the program.

//In 1D, its simply the number of elements, In 2D, its the product of number of rows and columns.

//Program to read values of matrix of size of MxN and display the second largest element.


#include <stdio.h>
int main() {
  int m, n;
  printf("Enter size M: ");
  scanf("%d",&m);
  printf("Enter size N: ");
  scanf("%d",&n);
  
  int a[m][n];

  printf("Enter the elemetns of MxN matrix: \n");
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      printf("a[%d][%d]:\t",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  
  int Largest=a[0][0];
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(a[i][j]>Largest){
        Largest=a[i][j];
      }
    }
  }

  int secondLargest=a[0][0];
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(a[i][j]>secondLargest && a[i][j]<Largest){
        secondLargest=a[i][j];
      }
    }
  }

printf("The second largest element in the matrix is: %d",secondLargest);
  

  

  return 0;
}