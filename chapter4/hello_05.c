#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main() {
    int magic;
    int guess;
    int counter = 0;

    // unsigned int seed;
    // printf("请输入随机数种子：");
    // scanf("%u", &seed);
    // srand(seed);    //调用库函数srand()为rand()设置随机数

    srand(time(NULL));

    magic = rand() % 100 + 1;
    counter = 0;
    do {
        printf("请猜一个数：");
        scanf("%d", &guess);
        counter++;
        if(guess > magic) {
            printf("错了！太大了！\n");
        }
        else if(guess < magic) {
            printf("错了！太小了！\n");
        }
        else {
            printf("猜对了！\n");
            printf("这个数是：%d\n", magic);
        }
    } while(guess != magic);
    printf("猜的次数 = %d\n", counter);
}