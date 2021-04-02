#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#define EPS 1e-6

void main() {
    float a, b, c, disc, p, q;
    printf("输入a, b, c的值：");
    scanf("%f, %f, %f", &a, &b, &c);
    // 判断a是否为0
    if (fabs(a) <= EPS) {
        printf("这不是一个一元二次方程！\n");
        exit(0);
    }

    disc = b*b - 4*a*c;
    p = -b / (2*a);
    q = sqrt(fabs(disc)) / (2*a);

    // 若判别式=0
    if (fabs(disc) <= EPS) {
        printf("两个实根相等：x1=x2=%6.2f\n", p);
    }
    // 若判别式>0
    else if (disc > EPS) {
        printf("两个不相等实根：x1=%6.2f, x2=%6.2f\n", p+q, p-q);
    }
    // 若判别式<0，即为共轭复根
    else {
        printf("两个复数根：\n");
        printf("x1=%6.2f + %6.2fi\n", p, q);
        printf("x2=%6.2f - %6.2fi\n", p, q);
    }
}