/* 사칙연산 계산기 만들기 */
#include <stdio.h>
#include <string.h>


void main(void) {
    char str = 0;
    int a = 0;
    int b = 0;

    printf("수식을 입력하세요. : ");
    scanf("%d%c%d", &a, &str, &b);
    

    if (str == '+') {
        printf("%d+%d=%d\n", a, b, a+b);
    } else if (str == '-') {
        printf("%d-%d=%d\n", a, b, a-b);
    } else if (str == '*') {
        printf("%d*%d=%d\n", a, b, a*b);
    } else if (str == '/') {
        printf("%d/%d=%d\n", a, b, a/b);
    }
}