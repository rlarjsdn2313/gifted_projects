/* 사용자로부터 알파벳 대문자를 입력받은 후, 해당하는 알파벳 소문자로 출력하는 프로그램을 작성해 보세요 */
#include <stdio.h>

void main(void) {
    char w = {0};
    printf("Input Capital letter: ");
    scanf("%c", &w);

    printf("Small Letter: %c\n", w + 32);
}