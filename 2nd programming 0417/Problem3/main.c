/* 당신의 나이를 입력받아 출력해주는 프로그램 */
#include <stdio.h>

void main(void) {
    int age = 0;
    printf("How old are you?  ");
    scanf("%d", &age);

    printf("You are %d years old.\n", age);
}