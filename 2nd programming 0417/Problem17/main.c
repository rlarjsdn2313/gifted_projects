#include <stdio.h>

void main(void) {
    for (int i=1; i<7; i++) {
        for (int a=0; a<i; a++) {
            printf("*");
        }
        printf("\n");
    }
}