//WAP to multiply two given matrix 

#include <stdio.h>

int main () {
  int m1[10][10],m2[10][10], m3[10][10],a,b,c,d;
  printf("Enter row and column for matrix 1:");
  scanf("%d%d",&a,&b);
  
  printf("Enter row and column for matrix 2:");
  scanf("%d%d",&c,&d);

  if(b!=c){
    printf("Matrix multiplication not possible!");
    return 1;
  }
  printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            m3[i][j]=0;
            for(int k=0; k<b; k++){
              m3[i][j]+= m1[i][k]*m2[k][j];
            }
        }
    }

    //display the result
    printf("Resultant Matrix:\n");
    for(int i=0; i<a; i++){
      for(int j=0; j<d; j++){
        printf("%d\t",m3[i][j]);
      }
      printf("\n");
    }
    return 0;
}