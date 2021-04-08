#include <stdio.h>
#define ARR_SIZE 40 
int BinarySearch(long a[], int n, long x);

int main() {
    float score[ARR_SIZE];
    int n, i, pos;
    long num[ARR_SIZE], x;
    printf("输入学生总人数：");
    scanf("%d", &n);

    printf("输入学生的学号和成绩：\n");
    for(i=0; i<n; i++) {
        scanf("%ld%f", &num[i], &score[i]);
    }
    
    printf("输入待查找的学号：");
    scanf("%ld", &x);
    pos = BinarySearch(num, n, x);    // 调用查找函数
    if (pos != -1) {
        printf("成绩 = %4.0f\n", score[pos]);
    }
    else {
        printf("没有找到！\n");
    }
    return 0;
}

int BinarySearch(long a[], int n, long x) {
    int mid;
    int left = 0;
    int right = n-1;

    while(left <= right) {
        mid = (left + right) / 2;
        if (x > a[mid]) {
            left = mid + 1;
        }
        else if (x < a[mid]) {
            right = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1;
}