/* 정수하나를 매개변수로 전달 받아 1부터 그 값까지 합을 반환하는 프로그램을 함수로 만드세요 */
#include <stdio.h>

int add_all(int a);

void main(void) {
    int a = 0;
    printf("Input a : ");
    scanf("%d", &a);

    printf("Result : %d\n", add_all(a));
}

int add_all(int a) {
    int sum = 0;
    for (int i=1; i<=a; i++) {
        sum += i;
    }

    return sum;
}