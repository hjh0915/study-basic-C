#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct CARD {
    char suit[10];
    char face[10];
};

int main() {
    char *Suit[] = {"Spades", "Hearts", "Clubs", "Diamonds"};
    char *Face[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                    "Jack", "Queen", "King"};
    int i, j;
    int result[52] = {0};
    struct CARD card[52];

    for (i=0; i<52; i++) {
        result[i] = -1;     // 将数组各元素赋值为-1,可以选择除了0～51外的任意数
    }

    for (i=0; i<52; i++) {
        strcpy(card[i].suit, Suit[i/13]);
        strcpy(card[i].face, Face[i%13]);
    }

    srand(time(NULL));
    i = 0;
    while (1) {
        result[i] = rand() % 52;
        for (j=0; j<i; j++) {
            if (result[j] == result[i]) break;
        }
        if (j < i) continue;
        i++;
        if (i >= 52) break;
    }

    for (i=0; i<52; i++) {
        printf("%10s %5s\n", card[result[i]].suit, card[result[i]].face);
    }

    return 0;
}