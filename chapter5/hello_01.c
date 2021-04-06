#include <stdio.h>

int Max(int x, int y) {
    int result = (x > y) ? x : y;
    return result;
}

void Func() {
    printf("in Func()\n");
}

// void main() {
//     int a = 12, b = 24;
//     int larger = Max(a, b);
//     printf("%d 更大\n", larger);

//     Func(1, 2, 3);
// }

int main() {
    int a = 1;
    {
        int a = 2;
        printf("a = %d\n", a);
    }

    printf("a = %d\n", a);
    return 0;
}