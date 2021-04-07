#include <stdio.h>
#define ARR_SIZE 40 

int main() {
    float score[ARR_SIZE], maxScore;
    int n, i;
    long maxNum, num[ARR_SIZE];
    printf("输入学生总人数：");
    scanf("%d", &n);

    printf("输入学生的学号和成绩：\n");
    for(i=0; i<n; i++) {
        scanf("%ld%f", &num[i], &score[i]);
    }

    // 计算最高分及其学号
    maxScore = score[0];
    maxNum = num[0];
    for(i=1; i<n; i++) {
        if(score[i] > maxScore) {
            maxScore = score[i];
            maxNum = num[i];
        }
    }
    printf("最高分 = %.0f, 学号 = %ld\n", maxScore, maxNum);

    return 0;
}