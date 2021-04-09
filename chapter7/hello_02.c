#include <stdio.h>
void MyStrcpy(char *dstStr, const char *srcStr);

int main(void) {
    char a[80], b[80];
    printf("输入一个字符串：");
    gets(a);
    MyStrcpy(b, a);
    printf("复制后的字符串：");
    puts(b);

    return 0;
}

// void MyStrcpy(char dstStr[], char srcStr[]) {
//     int i = 0;
//     while (srcStr[i] != '\0') {
//         dstStr[i] = srcStr[i];
//         i++;
//     }
//     dstStr[i] = '\0';
// }

void MyStrcpy(char *dstStr, const char *srcStr) {
    while (*srcStr != '\0') {
        *dstStr = *srcStr;
        srcStr++;
        dstStr++;
    }

    *dstStr = '\0';
}