/*
Type casting in C is crucial for converting one datatype to another to ensure correct and expected results during various operations. This is particularly important where different data types interact, as it helps avoid data loss or misintepretation of values. Type casting allows for precise control over how data is treated and manipulated, ensuring that operations produce accurate and meaningful outcomes.
*/

//Example
#include <stdio.h>

int main (){
  int num1=7, num2=2;
  float division;
  division =(float) num1/num2;
  printf("Result: %f\n",division);
}

//In this example, casting num1 to float before the division ensures that the result is a floating-point number, giving a more precise outcome.


/*
Header files in C are files with a .h extension that contain declarations for function, macros, constants and datatypes. These declarations allows you to use the functions and features defined in various libraries. Including header files in your program makes these declarations available, enabling the use of pre-written code and facilitaing code reuse and organization.

Library functions are precompiled functions provided by C's standard library, which you can use to perform common tasks. These functions are declared in header files and provide a range of functionalities such as input/output operations, string handling, mathematical computations,and more.


*/

//Example
#include<stdio.h>//standard input output header file
  int main () {
    int age;
    printf("Enter your age: "); //prompt user
    scanf("%d",&age);//takes input
    printf("Your age: %d", age);//gives output
    return 0;
  }
  /*In this example, #include <stdio.h> at the beginning of the program includes the standard input/ouput functions. The header file <stdio.h> is part of the C standard Library and includes decalrations for standard input/output functions like printf() and scanf(). These functions are used to read data from the user and print the data to the console. */
