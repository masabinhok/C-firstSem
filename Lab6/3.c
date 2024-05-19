#include <stdio.h>

int main() {
    int n1, n2, i, j, factor = 0, c = 0, d = 0, s = 0, r, copy, temp;
    printf("enter an unsigned integer n1 : ");
    scanf("%d", &n1);
    printf("enter an unsigned integer n2 : ");
    scanf("%d", &n2);

    if (n1 < n2) {
        printf("The prime number in between %d and %d are:\n ", n1,n2);
        for (i = n1; i <= n2; i++) {
            factor = 0;


            for (j = 1; j <= i; j++) {
                if (i % j == 0)
                    factor += 1;
            }

            if (factor <= 2) {
                printf("%d \n", i);
                c++;
            }

            s = 0;
            temp = i;
            while (temp != 0) {
                r = temp % 10;
                s = s * 10 + r;
                temp = temp / 10;
            }
            if (i == s) {
                d++;
                printf("%d is palindrome\n", i);
            }
        }
        printf("\n");
        printf("the number of prime number between %d and %d is %d ", n1, n2, c);
        printf("the number of palindrome number between %d and %d is %d ", n1, n2, d);
    } else {
        printf("make sure that n1 is less than n2, natra ta loop nai ghumdainaniiii!!!!");
    }

    return 0;
}
