/* 포인터 매개 변수를 사용하여, 간단한 저축과 인출 프로그램을 작성하시오 */
#include <stdio.h>

void save(int* balance);
void draw(int* balance);

int main(void) {
    int menu;
    int balance = 0;

    do {
        printf("메뉴를 선택하세요 : 저축(1), 인출(2)? ");
        scanf("%d", &menu);
        if (menu == 1) {
            save(&balance);
        } 
        if (menu == 2) {
            draw(&balance);
        }
        printf("현재 잔액은 %d입니다.\n", balance);
    } while (menu == 1 || menu == 2);
    return 0;
}

void save(int* balance) {
    int amount;
    printf("저축할 금액 : ");
    scanf("%d", &amount);
    *balance += amount;
}

void draw(int* balance) {
    int amount;
    printf("인출할 금액 : ");
    scanf("%d", &amount);
    *balance -= amount;
}
