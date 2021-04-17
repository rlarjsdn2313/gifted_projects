/* 두 정수를 입력 받아, 두 숫자의 합과 차를 출력하는 프로그램 */
#include <stdio.h>

void main(void) {
    int x = 0;
    int y = 0;

    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &x, &y);

    printf("합 : %d + %d = %d\n", x, y, x + y);
    printf("차 : %d - %d = %d\n", x, y, x - y);
}