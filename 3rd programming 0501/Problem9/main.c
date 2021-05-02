/* 다음은 입력한 값이 1보다 작은 경우 다시 입력해달라는 메세지를 출력한 후, 1부터 그수까지의 난수중 하나를 선택하는 프로그램 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &a);

    while (a < 1) {
        printf("잘못 입력하셨습니다. 다시 입력하세요 : ");
        scanf("%d", &a);
    }

    srand(time(NULL));
    b = rand() % a + 1;

    printf("1부터 %d 가운데 선택된 난수는  %d 입니다.\n", a, b);
    return 0;
}