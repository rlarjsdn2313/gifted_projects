/* 사용자로부터 반지름을 입력받아 원의 넓이와 반지름을 계산해주는 프로그램
작성하시오 */
#include <stdio.h>

void main(void) {
    int radius = 0;
    printf("Input radius: ");
    scanf("%d", &radius);

    printf("S = %dπ\n", radius*radius);
}