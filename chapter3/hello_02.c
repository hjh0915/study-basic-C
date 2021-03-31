#include <stdio.h>

void main() {
    char ch;
    printf("输入一个字符:");
    ch = getchar();
    printf("输入的字符为：");
    putchar(ch);
    putchar('\n');

    printf("---------------     ---------------\n");

    int var;
    printf("请输入一个数字：");
    scanf("%d", &var);
    printf("输入的数字为：%d\n", var);

    printf("%%p: %p\n", &var);

    printf("---------------     ---------------\n");

    double f1 = 1.0e+10;
    double f2 = 3.14;
    printf("%%f: %f\n", f1);
    printf("%%e: %e\n", f1);
    printf("%%f: %f\n", f2);
    printf("%%e: %e\n", f2);
}