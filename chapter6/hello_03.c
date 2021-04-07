#include <stdio.h>
#define ARR_SIZE 40 
void Sort(float score[], long num[], int n);

int main() {
    float score[ARR_SIZE];
    int n, i;
    long num[ARR_SIZE];
    printf("输入学生总人数：");
    scanf("%d", &n);

    printf("输入学生的学号和成绩：\n");
    for(i=0; i<n; i++) {
        scanf("%ld%f", &num[i], &score[i]);
    }
    
    Sort(score, num, n);

    printf("排序结果：\n");
    for(i=0; i<n; i++) {
        printf("%ld\t%4.0f\n", num[i], score[i]);
    }
    return 0;
}

void Sort(float score[], long num[], int n) {
    int i, j;
    float temp1;
    long temp2;

    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            // 降序
            if(score[j] > score[i]) {
                // 交换成绩
                temp1 = score[j];
                score[j] = score[i];
                score[i] = temp1;

                // 交换学号
                temp2 = num[j];
                num[j] = num[i];
                num[i] = temp2;
            }
        }
    }
}