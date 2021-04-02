#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, disc, p, q;
    printf("输入a, b, c的值：");
    scanf("%f, %f, %f", &a, &b, &c);
    disc = b*b - 4*a*c;
    p = -b / (2*a);
    q = sqrt(disc) / (2*a);
    printf("两个不相等实根为：x1=%.4f, x2=%.4f\n", p+q, p-q);
}