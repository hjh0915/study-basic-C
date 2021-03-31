#include <stdio.h>

void main() {
    int a = 0;
    {
        int a = 1;
        printf("%d\n", a);
    }
    printf("%d\n", a);
}