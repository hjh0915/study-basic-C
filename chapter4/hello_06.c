#include <stdio.h>
#include <math.h>

void main() {
    int n1, n2, n3;
    long p = 1;
    // int i = 1;

    // printf("输入n1：");
    // scanf("%d", &n1);
    // while(i <= n1) {
    //     p = p * i;
    //     i++;
    // }
    // printf("%d! = %ld\n", n1, p);

    // printf("---------------     ---------------\n");

    // printf("输入n2：");
    // scanf("%d", &n2);
    // do {
    //     p = p * i;
    //     i++;
    // } while (i <= n2);
    // printf("%d! = %ld\n", n2, p);

    // printf("---------------     ---------------\n");

    printf("输入n3：");
    scanf("%d", &n3);
    for(int i=1; i<=n3; i++) {
        p = p * i;
    }
    printf("%d! = %ld\n", n3, p);

    printf("---------------     ---------------\n");

    int i, j;
    for(i=0; i<3; i++) {
        printf("i=%d:", i);
        for (j=0; j<3; j++) {
            printf("j=%d\t", j);
        }
        printf("\n");
    }

    printf("---------------     ---------------\n");

    int m, n;
    for(m=1; m<10; m++) {
        for(n=1; n<10; n++) {
            printf("%4d", m*n);
        }
        printf("\n");
    }

    printf("---------------     ---------------\n");

    int a, b;
    for(a=1; a<10; a++) {
        for(b=1; b<=a; b++) {
            printf("%4d", a*b);
        }
        printf("\n");
    }

    printf("---------------     ---------------\n");

    int c, k, h;
    printf("请输入一个数：");
    scanf("%d", &c);
    h = (int)sqrt(c);

    for(k=2; k<=h; k++) {
        if(c%k == 0) {
            printf("不是素数！\n");
            goto end;
        }
    }

    printf("是素数！\n");
end: printf("程序结束!ln");
}