#include <stdio.h>
#include <assert.h>

#define CUBIC(A) A*A*A  //宏定义

void main() {
    printf("%d\n", CUBIC(2));
    int x = CUBIC(2);
    assert(x == 8);
    printf("%d\n", x/2);
}

// #define USE_INT 0 
// #if USE_INT
// int foo;
// int bar;
// #else 
// long foo;
// long bar;
// #endif