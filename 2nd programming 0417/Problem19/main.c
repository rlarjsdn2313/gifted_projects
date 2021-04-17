/*임의의 양의 정수(n)를 입력받아 1~100 사이에서 n의 배
수의 개수를 출력하는 프로그램*/
#include <stdio.h>

void main(void) {
    int a = 0;
    int num = 1;
    printf("입력(양의 정수) : ");
    scanf("%d", &a);
    printf("%d의 배수 :" ,a);

    for (int i=0; a*(i+1) <= 100; i++) {
        printf("%d ", a*(i+1));
        num++; 
    }

    printf("\n%d의 배수의 개수 : %d\n",a, num-1);
    printf("계속하려면 아무키나 누르십시오..\n"); // 리눅스라..

}