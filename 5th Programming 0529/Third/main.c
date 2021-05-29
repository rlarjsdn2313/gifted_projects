#include <stdio.h>

int main(void) {
    FILE* stream;
    stream = fopen("seek.txt", "w");
    fputs("ABCDEFGHJ", stream);
    fclose(stream);

    stream = fopen("seek.txt", "r");

    fseek(stream, 0, SEEK_SET);
    fprintf(stdout, "%c \n", fgetc(stream));

    fseek(stream, 2, SEEK_SET);
    fprintf(stdout, "%c \n", fgetc(stream));

    fseek(stream, -1, SEEK_END);
    fprintf(stdout, "%c \n", fgetc(stream));

    fseek(stream, -2, SEEK_CUR);
    fprintf(stdout, "%c \n", fgetc(stream));

    fclose(stream);
    return 0;
}