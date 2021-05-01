#include <stdio.h>

#define LIS_LEN 10

int main() {
    int lis[LIS_LEN] = {11, 3, 55, 24, 13, 44, 2, 1, 12, 3};
    int i, j, temp;

    for (i = 0; i < LIS_LEN; i++) {
        printf("%3d", lis[i]);
    }

    printf("\n\n");

    for (i = 0; i < LIS_LEN; i++) {
        for (j = 0; j < LIS_LEN-1-i; j++) {
            if (lis[j] > lis[j + 1]) {
                temp = lis[j + 1];
                lis[j + 1] = lis[j];
                lis[j] = temp;
            }

        }
    }

    for (i = 0; i < LIS_LEN; i++) {
        printf("%3d", lis[i]);
    }
    printf("\n");

    return 1;
}