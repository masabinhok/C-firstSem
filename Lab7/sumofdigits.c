#include <stdio.h>

void sumOfDigits(int);

void sumOfDigits(int num) {
    int sum = 0;
    int digit;

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    sumOfDigits(number);

    return 0;
}
