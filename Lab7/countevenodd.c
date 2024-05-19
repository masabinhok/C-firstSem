#include <stdio.h>

void countsDigits(int*, int*, int*);
void countsDigits(int* number, int* oddCount, int* evenCount) {
    int digit;

    *oddCount = 0;
    *evenCount = 0;

    while (*number != 0) {
        digit = *number % 10;
        if (digit % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
        *number /= 10;
    }
}

int main() {
    unsigned int number;
    int oddCount, evenCount;

    printf("Enter an unsigned integer: ");
    scanf("%u", &number);

    countsDigits(&number, &oddCount, &evenCount);

    printf("Number of odd digits: %d\n", oddCount);
    printf("Number of even digits: %d\n", evenCount);

    return 0;
}
