#include <stdio.h>

int main() {
    int M, N;

    // Read values of M and N from the user
    printf("Enter the value of M: ");
    scanf("%d", &M);
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Print the multiplication table
    printf("Multiplication Table of %d x %d:\n", M, N);
    printf("----------------------------\n");
    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
