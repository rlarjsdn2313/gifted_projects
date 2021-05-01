/* 다음은 알파벳의 대소문자를 구분하여 소문자 대문자를 출력해주는 프로그램
입니다. */

#include <stdio.h>

int main() {
    // 입력 받을 문자열
    char ch;

    // 입력받기
    printf("알파벳을 입력하세요 : ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {
        printf("%c는 대문자. 소문자는 %c\n", ch, ch + 32);
    } else if (ch >= 97 && ch <= 122) {
        printf("%c는 소문자. 대문자는 %c\n", ch, ch - 32);
    } else {
        printf("지원하지 않는 문자\n");
    }

    return 0;
}