#include <stdio.h>

void main() {
    int a, b;
    printf("输入两个整数：");
    scanf("%d%d", &a, &b);
    if(a >= b) {
        printf("max = %d\n", a);
    } 
    else {
        printf("max = %d\n", b);
    }

    int x, y, max;
    printf("输入两个整数：");
    scanf("%d%d", &x, &y);
    // max = x>=y ? x : y;
    x>=y ? printf("max = %d\n", x) : printf("max = %d\n", y);
    // printf("max = %d\n", max);
}