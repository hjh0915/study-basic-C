#include <stdio.h>
#include <math.h>

void main() {
    printf("%d\n", 6/4);
    printf("%f\n", 6.0/4);
    printf("%d\n", 3*4/2);
    printf("%d\n", 3*(3/4));

    printf("%d\n", 12%7);       // = 12 - 12/7*7 = 12 - 1*7
    printf("%d\n", 12%(-7));    // = 12 - 12/(-7)*(-7) = 12 - (-1)*(-7)
    printf("%d\n", (-12)%7);    // = (-12) - (-12)/7*7 = (-12) - (-1)*7

    printf("%f\n", sqrt(4));
    printf("%f\n", fabs(-4));
    printf("%f\n", log(4));
    printf("%f\n", exp(4));
    printf("%f\n", pow(4, 2));

    printf("---------------     ---------------\n");

    printf("%d\n", (4 >= 2));
    printf("%d\n", (4 <= 2));
    printf("%d\n", (4 > 2));
    printf("%d\n", (4 < 2));
    printf("%d\n", (4%2 != 0));
    printf("%d\n", (4%2 == 0));
    printf("%d\n", ('A' < 'B'));    //为真，字母也可以比较
    printf("%d\n", ('a' > 'b'));    //为假

    printf("%d\n", (4 > 2 > 1));    //无法比较

    printf("---------------     ---------------\n");

    printf("%d\n", ((2020%4 == 0) && (2020%100 != 0) || (2020%400 == 0)));

    printf("---------------     ---------------\n");

    int i = 1;
    int m;
    while(i <= 3) {
        m = i++;
    }
    printf("%d\n", m);

    printf("---------------     ---------------\n");

    int j = 1;
    int n;
    while(j <= 3) {
        n = ++j;
    }
    printf("%d\n", n);
    
    printf("---------------     ---------------\n");

    int w = 3;
    int x;
    while(w >= 1) {
        x = w--;
    }
    printf("%d\n", x);

    printf("---------------     ---------------\n");

    int z = 3;
    int y;
    while(z >= 1) {
        y = --z;
    }
    printf("%d\n", y);

    printf("---------------     ---------------\n");

    int a = 1;
    int p;
    while(a <= 3) {
        p = -a++;   //-和++均为单目运算符，自右向左计算
        //等同于 -(a++)
        /*
        m = -n;
        n = n + 1;
        */
    }
    printf("%d\n", p);

    printf("---------------     ---------------\n");

    int b = 5;
    printf("(float)b/2 = %f\n", (float)b/2);
    printf("(float)(b/2) = %f\n", (float)(b/2));
    printf("(double)b/2 = %f\n", (double)b/2);
    printf("(int)(b/2) = %d\n", (int)(b/2));

    printf("---------------     ---------------\n");
    
    printf("%x\n", 15&1);
    printf("%x\n", 15|127);
    printf("%x\n", 3^5);
    printf("%x\n", ~5);
    printf("%x\n", 15<<1);
    printf("%x\n", 15<<2);
    printf("%x\n", 15>>1);
}