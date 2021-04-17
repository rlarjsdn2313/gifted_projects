/* 구구단을 사용자에게 단을 입력 받아 원하는 단을 출력하
도록 바꾸어 봅시다 */
#include <stdio.h>

void main(void) {
    int a = 0;
    printf("단을 입력하세요: ");
    scanf("%d", &a);

    printf("\n<%d단>\n", a);
    for (int i=1; i<10; i++) {
        printf("%d*%d=%d\n", a, i, a*i);
    }
}