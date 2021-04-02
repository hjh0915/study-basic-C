#include <stdio.h>

void main() {
    int score, mark;
    printf("输入成绩：");
    scanf("%d", &score);
    mark = score>=0&&score<=100 ? score/10 : -1;

    switch(mark) {
        case 10:
        case 9: printf("%d--A\n", score);
                break;
        case 8: printf("%d--B\n", score);
                break;
        case 7: printf("%d--C\n", score);
                break;
        case 6: printf("%d--D\n", score);
                break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0: printf("%d--E\n", score);
                break;
        default: printf("数据不在合法范围！\n");
    }
}