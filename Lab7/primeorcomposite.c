#include <stdio.h>
#include <math.h>

void check_prime();

void check_prime() {
    int number;
    int is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("Not prime\n");
        return;
    }

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime)
        printf("Prime\n");
    else
        printf("Not prime\n");
}

int main() {
    check_prime();
    return 0;
}
