#include <stdio.h>

int main() {
    int n, i;

    printf("Enter up to which term you want to print the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\t", i);
    }

    return 0;
}
