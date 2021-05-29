#include <stdio.h>

int main(void) {
    FILE* stream;
    int file_state;

    stream = fopen("data1.txt", "w");
    if (stream == NULL) {
        printf("[!]Error in opening file...\n");
    }

    file_state = fclose(stream);
    if (file_state == EOF) {
        puts("[!]Error in closing file...");
    }

    return 0;
}