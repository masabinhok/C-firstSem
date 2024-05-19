#include <stdio.h>

int main() {
    int num, sum = 0, c = 0;
    char ch;

    for (int i = 1; i <= 100000000; i++) {
        if (i > 100) {
            printf("Enter 'N' if you wish to end entering numbers: ");
            scanf(" %c", &ch); // There was an issue here, missing & before ch
            if (ch == 'N' || ch == 'n')
                break;
            else {
                printf("Enter a num: ");
                scanf("%d", &num);
                if (num % 9 == 0 && num % 6 != 0 && num >= 1 && num <= 100) {
                    sum += num;
                    c++;
                }
            }
        } else {
            printf("Enter a num: ");
            scanf("%d", &num);
            if (num % 9 == 0 && num % 6 != 0 && num >= 1 && num <= 100) {
                sum += num;
                c++;
            }
        }
    }

    if (c > 0) {
        int avg = sum / c; // Corrected the calculation of average
        printf("Sum of numbers divisible by 9 but not by 6: %d\n", sum);
        printf("Average of numbers divisible by 9 but not by 6: %d\n", avg);
    } else {
        printf("No such numbers were entered.\n");
    }

    return 0;
}
