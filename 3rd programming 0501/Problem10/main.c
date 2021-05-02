/* 구조체 Date를 활용하여 학생 3명의 이름, 생일, 키 정보를 저장하는 구조체자료형 Person을 만들고 이름, 생일, 키 정보를 입력하고 출력하는 프로그램 */
#include <stdio.h>
#define SIZE 3

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    char name[20];
    Date bday;
    float height;
} Person;

int main() {
    Person s[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        printf("이름을 입력하세요 : ");
        scanf("%s", s[i].name);
        printf("생년월일을 차례로 입력하세요 : ");
        scanf("%d %d %d", &s[i].bday.year, &s[i].bday.month, &s[i].bday.day);
        printf("키를 입력하세요 : ");
        scanf("%f", &s[i].height);
    }

    for (int i = 0; i < SIZE; i++) {
        printf("이름 : %s, 연도 : %d, 월 : %3d, 일 : %3d, 키 : %f\n", s[i].name, s[i].bday.year, s[i].bday.month, s[i].bday.day, s[i].height);
    }

    return 1;
}