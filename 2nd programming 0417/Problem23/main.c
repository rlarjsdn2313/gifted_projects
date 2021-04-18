/* 3개의 주사위를 5만번 던져서 각 주사위의 숫자를 더한 합이 9가 되는 경우는 몇번 일까요? */
#include <stdio.h>
#include <stdlib.h>

#define HOWMANY 50000
void main(void) {
    int dices[3] = {0, 0, 0};
    int result = 0;

    for (int i=0;i<HOWMANY;i++) {
        for (int a=0;a<3;a++) {
            dices[a] = rand() % 6 + 1;
        }

        if (dices[0] + dices[1] + dices[2] == 9) {
            result ++;
        }
    }

    printf("%d번\n", result);
}