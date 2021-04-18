/* 1이상의 숫자를 입력받아 1부터 그 숫자 사이의 난수 중 하나를 출력해주는 프로그램을 작성해주세요 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
    int a = 0;
    srand((unsigned int)time(NULL));
    while (a <= 0) {
        printf("Input a : ");
        scanf("%d", &a);
    }

    printf("%d\n", rand() % a + 1);
}