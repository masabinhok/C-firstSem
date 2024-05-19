#include <stdio.h>

int main() {
    int n, r, s, i;

    for (i = 1; i <= 10000; i++) {
        n = i; 
        s = 0; 

        while (n != 0) {
            r = n % 10;
            s += r * r * r;
            n /= 10;
        }

        if (i == s)
            printf("%d ", i);
    }

    return 0;
}
