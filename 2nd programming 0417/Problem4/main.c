/* 정민이는 집으로 갔습니다. 그런데 어머니께서 정민이를 보시면서 말씀하셨
습니다. 어머니께서 빨간 간장 통에 식초를, 파란 식초 통에 간장으로 잘
담으셨으니 정민이보고 다시 옮겨 닮으라고 하셨습니다. */
#include <stdio.h>

void main(void) {
    int a = 10;
    int b = 20;
    int temp = a;

    a = b;
    b = temp;

    printf("%d\n", a);
    printf("%d\n", b);
}