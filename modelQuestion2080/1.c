/*
A computer program is a set of instructions written in a programming language tha a computer can execute to perform specific tasks or solve problems. These instructions direct the computer's hardware to carry out various operations such as calculations, data processing, input/output handling, and controlling other devices.
*/

/*
An algorithm to calculate the HCF of two numbers entered by the user.
1: Start
2: Prompt user to enter two numbers
3: Take 2 numbers a and b as input from the user
4: Initiate a loop i from 1 to the lowest number
5: Check if both numbers are divided by the number
6: If it divides, store it in a variable named HCF
7: Update HCF with highest possible result and display
8: End
*/

// Program to calculate HCF of two numbers

#include <stdio.h>
  int main (){
    int a,b,x,hcf=1;
    printf("Enter a number a: \n");
    scanf("%d",&a);
    printf("Enter a number b: \n");
    scanf("%d",&b);
    if(a<b){
      x=a;
    }
    else x=b;
    for(int i=1; i<=x; i++){
      if(a%i==0 && b%i==0){
        hcf=i;
      }

    }

    printf("The HCF of the two numbers is: %d\n",hcf);
    return 0;
    
}