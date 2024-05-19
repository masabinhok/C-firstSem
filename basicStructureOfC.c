//Documentation System

/*
Author: Sabin Shrestha
Date: May 19 2024, Sunday
Description: This program swaps two variables
*/

//Link System

#include <stdio.h>

//Global Declaration System

/*
No global vairables are required for this program
*/

//Function Declaration

void swapNumbers(int *a, int *b);

//Main Function Section

int main() {
int a,b;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
swapNumbers(&a,&b);
printf("The swapped numbers are:\na: %d\tb: %d\n",a,b);

return 0;
}

//Sub Program Section

void swapNumbers(int *a,int *b){
  int t;
  t=*a;
  *a=*b;
  *b=t;
}
