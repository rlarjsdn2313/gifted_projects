/* 화시 온도를 입력받아 변수 f에 대입한 후 섭씨 온도 c를 구하는 수식윽 작성하고 결과를 확인해 보세요
반대로 입력 받은 섭씨 온도를 변수 c에 대입한 후 화씨 온도 f를 구하는 수식을 작성하고 결과를 확인해 보세요 */
#include <stdio.h>



void main(void) {
    float c = 0;
    float f = 0;

    printf("Input f: ");
    scanf("%f", &f);

    printf("%ff = %f\n\n", f, 5.0/9.0*(f-32.0));

    printf("Input c: ");
    scanf("%f", &c);
    
    printf("%fc = %f\n", c, 9.0/5.0*c+32.0);
}

