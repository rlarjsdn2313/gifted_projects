/* 사칙연산 계산기 만들기 */
#include <stdio.h>
#include <string.h>


void main(void) {
    char str = 0;
    int a = 0;
    int b = 0;

    printf("수식을 입력하세요. : ");
    scanf("%d%c%d", &a, &str, &b);
    
    switch (str)
    {
    case '+':
        printf("%d+%d=%d\n", a, b, a+b);
        break;
    case '-':
        printf("%d-%d=%d\n", a, b, a-b);
        break;
    case '*':
        printf("%d*%d=%d\n", a, b, a*b);
    case '/':
        printf("%d/%d=%d\n", a, b, a/b);
    }
}