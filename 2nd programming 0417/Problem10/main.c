/* 점수에 따라 해당 등급의 문자를 출력하는 프로그램 */
#include <stdio.h>

void main(void) {
    int score = 0;
    printf("Input score: ");
    scanf("%d", &score);

    if (90<=score && score<=100) {
        printf("A\n");
    } else if (80<=score && score<=89) {
        printf("B\n");
    } else if (70<=score && score<=79) {
        printf("C\n");
    } else {
        printf("F\n");
    }
}