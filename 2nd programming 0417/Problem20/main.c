/* 시험 점수의 평균을 산출하려고 합니다. 각 과목의 점수를 차례로 입력 받고, 음수를 입력하면 입력이 
종료되며 평균을 구하는 프로그림 */
#include <stdio.h>

void main(void) {
    int score = 0;
    int sum = 0;
    printf("열 과목의 점수의 평균을 계산합니다.\n");

    for (int i=1;1;i++) {
        printf("%d번째 점수를 입력해 주세요 : ", i);
        scanf("%d", &score);
        if (score < 0) {
            printf("평균은 %d점 입니다.\n", sum/(i-1));
            break;
        }

        sum += score;
    }
}