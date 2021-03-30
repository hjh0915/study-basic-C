#include <stdio.h>

void main() {
    char ch = 'b';
    printf("%c, %d\n", ch, ch);
    // 以字符形式、整数格式输出

    // 数值溢出问题
    unsigned int m, n;
    for(m=1; m<=30; m++) {
        double result = 1;
        for(n=2; n<=m; n++) {
            result = result * n;
        }
        printf("%d! = %.0f\n", m, result);
        /*
        22!之后数值不对，是因为精度不够
        */
    }
}