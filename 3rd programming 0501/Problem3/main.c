/* 다음은 배열값의 함계를 구하는 프로그램입니다. */
#include <stdio.h>

#define SIZE 5

int get(int score[], int n);

int main(void) {
    int grade[SIZE] = {1, 2, 3, 4, 5};
    int s;
    s = get(grade, SIZE);
    printf("합계는 %d입니다.\n", s);
    return 0;
}

int get(int score[], int n) {
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += score[i];
    }
    return sum;
}