#include <stdio.h>

#define Col 3
#define Row 5

int main() {
    int S[Col][Row] = {
        {0, 1, 2, 3, 4},
        {10, 11, 12 ,13 ,14},
        {20, 21,22, 23, 24}
    };

    int i, j;
    
    for (i = 0; i < Col; i++) {
        printf("%d번째 행 : ", i);

        for (j = 0; j < Row; j++) {
            printf("%3d ", S[i][j]);
        }

        printf("\n");
    }

    return 0;
}