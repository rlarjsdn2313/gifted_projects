#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int people = 0;
    printf("사람 수 : ");
    scanf("%d", &people);

    int* height = (int*)calloc(people, sizeof(int));
    for (int i=0;i<people;i++) {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }

    printf("%d 사람의 키를 입력하세요.\n");

    int a = 0;
    for (int i=0;i<people;i++) {
        if (height[i] >= a) {
            a = height[i];
        }
    }

    printf("최댓값은 %d 입니다.\n", a);

    return 0;
}