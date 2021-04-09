#include <stdio.h>
void Swap(int *x, int *y);

int main(void) {
    int a, b;
    printf("输入a,b: ");
    scanf("%d, %d", &a, &b);
    printf("互换前的a=%d, b=%d\n", a, b);

    Swap(&a, &b);
    printf("互换后的a=%d, b=%d\n", a, b);

    return 0;
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}