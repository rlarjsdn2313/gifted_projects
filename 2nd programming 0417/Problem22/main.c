/* 정수하나를 매개변수로 받아 해당하는 구구단을 출력하는 프로그램을 함수로 만드세요 */
#include <stdio.h>

void googoodan(int a) {
    printf("<%d단>\n", a);
    for (int i=1; i<=9; i++) {
        printf("%d X %d = %d\n", a, i, a*i);
    }
}

void main(void) {
    int a = 0;
    printf("Input a : ");
    scanf("%d", &a);

    googoodan(a);
}