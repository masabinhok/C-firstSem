/*
An operator in C is a symbol that tells the compiler to perform specific mathematical or logical manipulations. Operators are used in programs to perform operations on variable and values. They are a cruicial part of any programming language, providing the means to perform calculations, comparisons and other functions.
Types of operartors:
1. Arithmetic Operators: + - * / %
2. Logical Operators: && || !
3. Relational Operators: > < >= <= == !=
4. Bitwise Operators: & | ^ ~ << >>
5. Assignment Operators: = += -= *= /= %=
6. Increment and Decrement Operators: ++ --
7. Comma Operator: ,
8. Ternary Operator: `? : ;`
9. Special Operator: sizeof &(address of) *(pointer dereference)
*/


/*
Increment Operators increase the value of a vairable by 1.
There are two types of increment operators: 
1. Post Increment
2. Pre Increment

Pre-increment operators increase the value of the variable before it is used in the expression.
Post-increment operators increase the value of the variable after it is used in the expression.
*/

//Example
#include <stdio.h>
int main() {
  int a =5, b=5;
  int c=++a, d=b++;
  printf("a: %d\nb: %d\nc: %d\nd: %d\n",a,b,c,d);
  return 0;
}

// In the above example, a is pre-increased so c will contain increased value of a, whereas b is post-increased so d will contain the value as it is.