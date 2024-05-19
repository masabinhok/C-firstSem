#include <stdio.h>

int main() {
    int  i, j;
    char ch;


    for (i = 0, ch = 'A'; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            if (j % 2 == 0) {
                printf("%c ", ch);
            } else {
                printf("%c ", ch + 32); 
            }
            ch++;
        }
    
        printf("\n");
    }

    return 0;
}
