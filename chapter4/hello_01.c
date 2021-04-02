#include <stdio.h>

void main() {
    int x, b0, b1, b2;
    printf("输入一个整数x：");
    scanf("%d", &x);
    b2 = x / 100;
    b1 = (x - b2*100) / 10;
    // b1 = (x / 10) %10;
    b0 = x % 10;
    // b0 = x - b2*100 - b1*10;
    printf("此整数的 百位=%d，十位=%d， 个位=%d\n", b2, b1, b0);
}