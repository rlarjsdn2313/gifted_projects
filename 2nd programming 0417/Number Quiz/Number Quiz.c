/*숫자를 맞추는 게임입니다.*/
#include <stdio.h>
#include <stdlib.h>

int generate_answer(int scope);

int main() {
    int scope = 0;
    printf("범위를 입력하세요: ");
    scanf("%d", &scope);

    int num = generate_answer(scope);
    int a = 0;

    while (a != num) {
        printf("수를 입력하세요: ");
        scanf("%d", &a);

        if (a > num) {
            printf("다운!\n");
        } else if (a < num) {
            printf("업!\n");
        }

        printf("\n");
    }

    printf("정답!!\n");

    return 0;
}

int generate_answer(int scope) {
    return rand()%(scope+1) + 1;
}