#include<stdio.h>

int main() {
    int n[10], sum = 0, i;

    for(i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &n[i]);
        sum += n[i];
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
