#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j <= i; j++) {
            switch (i) {
                case 0:
                    printf("N ");
                    break;
                case 1:
                    printf("E ");
                    break;
                case 2:
                    printf("P ");
                    break;
                case 3:
                    printf("A ");
                    break;
                case 4:
                    printf("L ");
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
