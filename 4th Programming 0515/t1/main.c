#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* p1 = (int*)malloc(sizeof(int));
    *p1 = 57;

    printf("%d\n", *p1);

    free(p1);
    p1 = NULL;
    
    return 1;
}