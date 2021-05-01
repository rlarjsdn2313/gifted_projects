#include <stdio.h>

int main(void) {
    int mat[100][100] = {{0,}}; // 여기 채우기
    int i , j, N;               // N은 사이즈를 담는 변수
    int k = 1;

    printf("크기를 입력하세요 : ");
    scanf("%d", &N);

    for (i = 0; i < N; i ++) {
        for (j = 0; j <= i; j++) {
            mat[i][j] = k;
            k ++;
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%-3d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}