#include <stdio.h>

float add(int, float);


float add(int x, float y) {
    float sum = x + y;
    return sum;
}

int main() {
    int num1;
    float num2;

   
    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter a float: ");
    scanf("%f", &num2);

   
    float result = add(num1, num2);

    
    printf("Sum of %d and %.2f is %.2f\n", num1, num2, result);

    return 0;
}
