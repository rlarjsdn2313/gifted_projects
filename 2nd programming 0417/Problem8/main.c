/* 사용자로부터 초 단위의 시간을 받아서 몇 분 몇 초를 계산하는 프로그램 */
#include <stdio.h>

void main(void) {
    int time = 0;

    printf("시간을 입력하시오(초) : ");
    scanf("%d", &time);

    // printf("%d초는 %d분 %d초 입니다.\n", time, (time-(time%60))/60, time % 60);
    printf("%d초는 %d분 %d초 입니다.\n", time, time/60, time % 60);

}
