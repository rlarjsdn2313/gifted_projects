#include <stdio.h>

void main(void) {
    int a = 0;
    printf("양의 정수를 입력하세요 : ");
    scanf("%d", &a);

    for (int i=0; i<a; i++) {
        printf("%d ", 3*(i+1));
    }
    printf("\n");
}