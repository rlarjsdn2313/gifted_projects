/*숫자를 맞추는 게임입니다.*/
#include <stdio.h>
#include <stdlib.h>

int generate_answer(int scope);
void get_input(int* a, char* question);

int main() {
    int scope = 0;
    get_input(&scope, "범위를 입력하세요: ");
    printf("\n");
    
    int num = generate_answer(scope);
    int a = 0;

    while (a != num) {
        get_input(&a, "숫자를 입력하세요: ");

        if (a == 0) {
            printf("정답은 %d입니다\n", num);
            return 0;
        }
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

void get_input(int* a, char* question) {
    printf("%s", question);
    scanf("%d", a);
}

int generate_answer(int scope) {
    return rand()%(scope+1) + 1;
}