/* main() 함수에 있는 변수 n의 값을 abc()함수에서 20으로 바꾸도록 빈칸을 채우세요 */
#include <stdio.h>

void abc(int* n);

int main() {
    int n = 10;
    abc(&n);
    printf("%d\n", n);
    return 1;
}

void abc(int* n) {
    *n = 20;
}