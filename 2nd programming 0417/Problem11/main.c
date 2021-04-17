/* 두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램 */
#include <stdio.h>

void main(void) {
    int a = 0;
    int b = 0;

    printf("Input 2 num : ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Result: %d\n", a - b);
    } else if (a < b) {
        printf("Result: %d\n", b - a);
    } else {
        printf("Result: 0\n");
    }
}