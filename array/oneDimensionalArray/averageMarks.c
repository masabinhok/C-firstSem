//WAP in c to calculate average marks of class with 5 students.

#include<stdio.h>
int main() {
  float marks[5];
  float sum=0, average=0;

  printf("Enter marks of 5 studenrs:\n");
  for(int i=0; i<5; i++){
    scanf("%f",&marks[i]);
  }

  for(int i=0; i<5; i++){
    sum+=marks[i];
  }
    average=sum/5;

  printf("The average is %f",average);

}