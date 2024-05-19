#include <stdio.h>

double power(double x, int n) {
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    double x, term, result = 0;
    int n, sign = 1, denominator;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        denominator = factorial(2 * i - 1);
        term = sign * power(x, 2 * i - 1) / denominator;
        result += term;
        sign *= -1;
    }

    printf("Result of the series: %lf\n", result);

    return 0;
}
