//One dimensional array in C is a linear collection of elemnets of the same type, accessed by an index. It's declared using square brackets[] to specify the size of the array.

//Store marks obtained by 5 students in a class.
#include <stdio.h>
int main () {
  //Store marks obtained by 5 students in a class.
  float marks[5];
  
  printf("Enter marks of 5 students:\n");
  for(int i=0; i<5; i++){
    scanf("%f",&marks[i]);
  }

  //Find the total marks of a class of 5 students
  float sum=0;

  for(int i=0; i<5; i++){
    sum+=marks[i];
  }
  
  printf("The total marks of a student is %.2f", sum);
  return 0;
}