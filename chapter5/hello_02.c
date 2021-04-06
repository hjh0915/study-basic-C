#include <stdio.h>

void Func();

int main() {
    int i;
    for(i=0; i<10; i++) {
        Func();
    }
    return 0;
}

void Func() {
    static int times = 1;
    printf("调用Func()函数 %d\n", times++);
}