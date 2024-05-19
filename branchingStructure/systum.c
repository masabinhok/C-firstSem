#include <stdio.h>

int main() {
    int number, sum = 0, count = 0, average;
    char ch;

    for (int i = 1; i <= 1000; i++) {
        if (i > 100) {
            printf("Enter 'N' if you wish to end entering numbers: ");
            scanf(" %c", &ch);
            if (ch == 'N' || ch == 'n')
                break;
            else {
                printf("Enter a number: ");
                scanf("%d", &number);
                if (number >= 1 && number <= 100 && number % 9 == 0 && number % 6 != 0) {
                    sum += number;
                    count++;
                }
            }
        } else {
            printf("Enter a number: ");
            scanf("%d", &number);
            if (number >= 1 && number <= 100 && number % 9 == 0 && number % 6 != 0) {
                sum += number;
                count++;
            }
        }
    }

    if (count > 0) {
        average = (float)sum / count;
        printf("Sum of numbers divisible by 9 but not by 6: %d\n", sum);
        printf("Average of numbers divisible by 9 but not by 6: %d\n", average);
    } else {
        printf("No such numbers were entered.\n");
    }

    return 0;
}
