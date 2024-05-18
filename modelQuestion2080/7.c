/*
In C and C++, the auto and static storage classes defines the lifetime and visibility of variables. They can be differentiated as:

AUTO:
They have a local scope, meaning they are accesible only within the block or function where they are declared.
The lifetime of a auto variable is limited to the execution of the function in which it is defined. Function exits => auto variable is destroyed.
They must be initialized explicitly

STATIC:
For variables declared within the function, The scope is local to the function, however they retain their value between function calls.
For variables decalred outside the function, the scope is limited to the file in which they are declared.
Its lifetime lasts across the entire run of the program, until the program terminates.
Static variables are auto initialized to zero, if not explicitly initialized.
*/

//WAP in C to find the sum of N even natural numbers divisible by 5. The value of N must be taken from the main function and passed to a function named findsum that calculates the sum and the sum must be displayed from the main.

#include <stdio.h>

  int findsum(int n){
    int sum=0;
    int count=0;
    int i=10;

    while(count<n){
      if(i%2==0 && i%5==0){
        sum+=i;
        count ++;
      }
      i+=10;
      

    }
    return sum;

  }

  

  int main(){
    int n;
    printf("Enter the value of N");
    scanf("%d",&n);
    int sum = findsum(n);
    printf("The sum is %d", sum);
    return 0;
  }

