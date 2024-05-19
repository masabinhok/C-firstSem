#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int array1[n], array2[n];

    printf("Enter the elements of array1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of array2: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array2[i]);
    }

    printf("The sum of corresponding elements:\n");
    for (int i = 0; i < n; i++) {
        printf("sum[%d]: %d\n", i, array1[i] + array2[i]);
    }

    return 0;
}
