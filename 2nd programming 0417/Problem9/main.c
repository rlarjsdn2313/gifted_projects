/* 현재의 원화 환율을 찾아 변수에 저장하고, 달러를 키보드로부터 입력 받으면 원화로 출력하는 프로그램을 작성하세요 */
#include <stdio.h>

#define ExchangeRate 1116.64

void main(void) {
    int dollar = 0;
    printf("Input dollar: ");
    scanf("%d", &dollar);

    printf("%d$ = %fwon\n",dollar,  dollar*ExchangeRate);
}