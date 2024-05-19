#include <stdio.h>
#include <math.h>

int main() {
    float x, num, den, data, sum = 0;
    int i, j, n, fact;

    printf("Enter the value of x for the series : ");
    scanf("%f", &x);
    printf("Upto which termz? : ");
    scanf("%d", &n);
    printf("1 + \t");

    for (i = 1; i <= n; i++) {
        fact = 1;
        num = pow(-1, i) * pow(x, 2 * i);
        for (j = 1; j <= 2*i; j++) {

            fact = fact * j;
        }
        den =  fact;
        data = num / den;
        sum = sum + data;
        printf("(%10.6f)+\t", data);
    }
    printf("\nthe sum of the series is %f", sum);
    return 0;
}
