#include <stdio.h>
#define N 11 
void Insert(int *a, int n, int x);

int main(void) {
    int a[N], x, i, n;
    printf("输入数组元素n(n<10)：");
    scanf("%d", &n);
    printf("输入数组：");
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("输入待插入的数x：");
    scanf("%d", &x);
    Insert(a, n, x);
    printf("输出插入x后的数组：");
    for (i=0; i<n+1; i++) {
        printf("%-4d", a[i]);
    }
    printf("\n");

    return 0;
}

// void Insert(int a[], int n, int x) {
//     int i, pos;
//     for (i=0; (i<n) && (x>a[i]); i++) {

//     }
//     pos = i;
//     // 从尾部开始移动pos
//     for (i=n-1; i>=pos; i--) {
//         a[i+1] = a[i];
//     }
//     a[pos] = x;
// }

void Insert(int *a, int n, int x) {
    int *p = NULL;
    for (p=a+n-1; (p>=a) && (x<*p); p--) {
        *(p+1) = *p;
    }
    *(p+1) = x;
}