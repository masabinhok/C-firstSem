#include <stdio.h>

int main() {
    int n, tri;

    printf("Enter an unsigned integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tri = (i * (i + 1)) / 2;
        if (tri == n) {
            printf("Entered unsigned integer %d is a triangular number\n", n);
            return 0; 
        }
    }

    printf("Sorry, your number is not a triangular number\n");
    return 0;
}
