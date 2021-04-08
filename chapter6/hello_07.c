#include <stdio.h>
#define STUD 30 
#define COURSE 3 
int Input(long num[], int score[][COURSE]);
void Total(int score[][COURSE], int sum[], float aver[], int n);
void Print(long num[], int score[][COURSE], int sum[], float aver[], int n);

int main() {
    int n, score[STUD][COURSE], sum[STUD];
    long num[STUD];
    float aver[STUD];
    n = Input(num, score);
    Total(score, sum, aver, n);
    Print(num, score, sum, aver, n);

    return 0;
}

// 输入参加考试的学生的学号和成绩， 返回参加考试的学生人数
int Input(long num[], int score[][COURSE]) {
    int i, j, n;
    printf("输入参加考试的学生人数(n<=30)：");
    scanf("%d", &n);
    printf("输入学号和成绩：数学 英语 物理 \n");
    for (i=0; i<n; i++) {
        scanf("%ld", &num[i]);

        for (j=0; j<COURSE; j++) {
            scanf("%d", &score[i][j]);
        }
    }

    return n;
}

// 统计整形数组score中存储的每个学生的总分和平均分
void Total(int score[][COURSE], int sum[], float aver[], int n) {
    int i, j;
    // for(i=0; i<n; i++) {
    //     sum[i] = 0;

    //     for (j=0; j<COURSE; j++) {
    //         sum[i] += score[i][j];      // 第i+1个学生
    //     }

    //     aver[i] = (float)sum[i] / COURSE;
    // }

    for (j=0; j<COURSE; j++) {
        sum[j] = 0;

        for(i=0; i<n; i++) {
            sum[j] += score[i][j];
        }
        aver[j] = (float)sum[j] / n;
    }
}

// 输出每个学生的学号、各门课的成绩、总分、平均分以及能否活动奖学金
void Print(long num[], int score[][COURSE], int sum[], float aver[], int n) {
    int i, j;
    // char c[STUD];
    printf("结果：\n");
    // printf(" 学号 \t 数学 \t 英语 \t 物理 \t 总分 \t 平均分 \t >90\n");
    printf("课程  ");
    for (i=0; i<n; i++) {
        // c[i] = 'Y';
        printf("%6ld\t", num[i]);
    }
    printf("总分 平均分\n");
    for (j=0; j<COURSE; j++) {
        switch(j) {
            case 0: printf("    数学  "); break;
            case 1: printf("    英语  "); break;
            case 2: printf("    物理  "); break;
        }
        for (i=0; i<n; i++) {
            printf("%6d\t", score[i][j]);
        }
    }
    printf("%6d%6.1f \n", sum[j], aver[j]);
}