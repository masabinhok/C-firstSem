#include <stdio.h>
int main ()
{
  int a, b, result; 
  char op; 
  printf("Enter operand A: ");
  scanf("%d",&a);
   while ((getchar()) != '\n');
  printf("Enter operator (- + * /:) ");
  scanf("%c",&op);
  printf("Enter operand B: ");
  scanf("%d",&b);
 
  switch(op)
  {
    case '-':  printf("%d", a-b);break;
    case '/':  printf("%d", a/b);break;
    case '*':  printf("%d", a*b);break;
    case '+':  printf("%d", a+b);break;
    default: printf("Error! Follow the instructions properly!");
    return 0;
    
  }
  
}