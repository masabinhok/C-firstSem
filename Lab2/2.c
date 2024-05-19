#include <stdio.h>

int main() {
 int x=5, v;
 v=++x + ++x * ++x;
 printf("v=%d and x=%d", v,x);
    return 0;
}
