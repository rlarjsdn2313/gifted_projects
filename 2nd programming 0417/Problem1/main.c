/* 두 개의 정수를 입력 받아 두 수의 합을 모니터에 출력해주는 프로그램 */
#include <stdio.h>

void main(void) {
    int x = 0;
    int y = 0;

    printf("x를 입력하세요: ");
    scanf("%d", &x);

    printf("\ny를 입력하세요: ");
    scanf("%d", &y);

    printf("\nx+y = %d\n", x+y);
}