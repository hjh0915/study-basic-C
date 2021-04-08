#include <stdio.h>
#include <string.h>
#define ARRA_SIZE 80 

int main() {
    int n;
    char str[ARRA_SIZE], min[ARRA_SIZE];
    printf("输入5个名字：\n");
    gets(str);
    strcpy(min, str);

    for (n=1; n<5; n++) {
        gets(str);      // 每次输入一个字符串
        if (strcmp(str, min) < 0) {     // 比较两个字符串大小
            strcpy(min, str);
        }
    }

    printf("最小的是：");
    puts(min);

    return 0;
}