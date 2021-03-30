#include <stdio.h>

int Add(int a, int b) {
    return a + b;
}

void main() {
    int x, y, sum = 0;
    printf("输入两个整数：");

    scanf("%d%d", &x, &y);
    sum = Add(x, y);
    printf("和 = %d\n", sum);
}