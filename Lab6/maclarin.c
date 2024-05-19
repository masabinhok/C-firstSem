#include <stdio.h>

int main() {
    float x, num, den, term, s = 0;
    int i, j, sign = -1, n, nc;

    printf("Enter the value of x in degrees for the series: ");
    scanf("%f", &x); 
    printf("Enter the number of terms: ");
    scanf("%d", &nc);

    
    x = x * 3.14 / 180;
    n = nc;

    for (i = 0; i < n; i++) {
        sign *= -1;
        num = 1;
        den = 1;
        for (j = 1; j <= i; j++) {
            num *= x;
            den *= j;
        }
        term = sign * num / den;
        s += term;
        printf("(%.6f) ", term);
        if (i < n - 1)
            printf("+ ");
    }

    printf("\nSum of the series: (%.6f)\n", s);

    return 0;
}

